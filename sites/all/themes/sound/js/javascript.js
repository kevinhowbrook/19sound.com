/**
 * @file
 * A JavaScript file for the theme.
 */
(function ($) {
  Drupal.behaviors.jscriptglue = {
		attach: function(context, settings) {

			/**
				* SIDR - http://www.berriart.com/sidr/#getstarted
				* ========================================================================================
				*/
			function sidrNav(){
				// Main navigation
				$('#existing-content-menu').sidr({
					 name: 			'sidr-main',
					 source: 		'#sidr-main-menu-content',
					 renaming:	false,
					 side:			'right',
					 speed:			100
					 
				});
				
				// if click outside, close
				$('.body-inner').click(function(){
					$.sidr('close', 'sidr-main');
				})
				
			}
			sidrNav();      

			function nextInDOM(_selector, _subject) {
    var next = getNext(_subject);
    while(next.length != 0) {
        var found = searchFor(_selector, next);
        if(found != null) return found;
        next = getNext(next);
    }
    return null;
}
function getNext(_subject) {
    if(_subject.next().length > 0) return _subject.next();
    return getNext(_subject.parent());
}
function searchFor(_selector, _subject) {
    if(_subject.is(_selector)) return _subject;
    else {
        var found = null;
        _subject.children().each(function() {
            found = searchFor(_selector, $(this));
            if(found != null) return false;
        });
        return found;
    }
    return null; // will/should never get here
}
    function clickAppend(){
        $('.view-mode-teaser.node-work-post').click(function(){          
          var container = nextInDOM('.row-append',  $(this));
          $('.row-append').empty();
          $(this).find('.group-window').clone().appendTo(container);
          $(container).prepend('<div class="close-row-append">close x</div>');
          
          //vimeo stuff

  				
          $('.close-row-append').click(function(){
          	
          	$('html, body').animate({
              scrollTop: $('#block-views-work-authed-block,#block-views-work-anon-block ').offset().top
            }, 500);
            $(this).hide();
            $(container).empty();

          });
        
            $('html, body').animate({
              scrollTop: $(container).offset().top
            }, 500
      //       function () {
      //       			var id = $(container).find('iframe').attr('id');
      // 	$('iframe#' + id).on("ready", function(){  
			 			
			 		// 	console.log(id);
						// $('iframe#' + id).vimeo("play");
  				// })
      //       }
         //     function () {
        	// 				var id = $(container).find('iframe').attr('id');
			  				//   $(id).vimeo("play");
							  //   console.log(id);
							  //   $(id).on("ready", function(){  
    					// 			console.log( "Vimeo is ready!" ); 
    					// 			$(id).vimeo("play");
									// });
    					// 	}
    					);
           return false;

        });
      } clickAppend();

      //autoplay top video
      function autoPlayBannerVid(){
      	var id = $('.view-mode-banner').find('iframe').attr('id');
      	$('iframe#' + id).on("ready", function(){  
			 			console.log(id);
						$('iframe#' + id).vimeo("play");

  				})
      } //autoPlayBannerVid();



$(function() {
  $('a[href*="#"]:not([href="#"])').click(function() {
    if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
      var target = $(this.hash);
      console.log(target);
      target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
      if (target.length) {
        $('html, body').animate({
          scrollTop: target.offset().top + -40
        }, 1000);
        return false;
      }
    }
  });
});
// $(document).ready(function() {
//   var stickyNavTop = $('#block-views-block-page-scrolling-list-block-1').offset().top;
//   var stickyNav = function(){
//   var scrollTop = $(window).scrollTop();
      
//   if (scrollTop > stickyNavTop) { 
//     $('#block-views-block-page-scrolling-list-block-1').addClass('sticky');
//     } else {
//       $('#block-views-block-page-scrolling-list-block-1').removeClass('sticky'); 
//     }
//   };
//   stickyNav();
        
        /**
         * Tocify stuff
         */
        function tocifyColors(){
          var colors = ['grad-red'];
          var color = colors[Math.floor(Math.random()*colors.length)];
          console.log(color);
          $('.middle-region-wrapper').addClass(color);
        } tocifyColors();

        function minHeightForTocifyPages(){
          //var window_height = $(window).height();
          $('.tocify-pages .views-row').css('min-height', $(window).height() + 400);
        } minHeightForTocifyPages();

        function anmiations(){
          var $animation_elements = $('.animated');
          var $window = $(window);

          function check_if_in_view() {
            var window_height = $window.height();
            var window_top_position = $window.scrollTop();
            var window_bottom_position = (window_top_position + window_height);
           
            $.each($animation_elements, function() {
              var $element = $(this);
              var element_height = $element.outerHeight();
              var element_top_position = $element.offset().top;
              var element_bottom_position = (element_top_position + element_height);
           
              //check to see if this current container is within viewport
              if ((element_bottom_position >= window_top_position) &&
                  (element_top_position <= window_bottom_position)) {
                $element.addClass('in-view');
              
              } else {
                //$element.removeClass('in-view');
              }
            });
          }

          $window.on('scroll resize', check_if_in_view);
          $window.trigger('scroll');
          } anmiations();
        
        function stickyStuff(){
          $(".sticky").sticky({topSpacing:20});
        }  stickyStuff();

        

    }
	};
})(jQuery);