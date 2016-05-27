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

			/* HEADER SEARCH */
			/* -- add in descriptive text to search box
			function headersearch(){
			  var searchbox = $("#id-form-text-input-element");
				var searchtext = "Search";
				var submitbutton = $('#id-of-submit-form-button');
				
				searchbox.attr("value", searchtext);
					
				searchbox.focus(function(){  
				  if(jQuery.trim($(this).attr("value")) == searchtext) $(this).attr("value", "");  
				});  
				
				searchbox.blur(function(){  
				  if(jQuery.trim($(this).attr("value")) == "") $(this).attr("value", searchtext);  
				});
				
				submitbutton.click(function(){
					if (searchbox.val() == searchtext) searchbox.attr("value", "");
				});
				
			}
			headersearch();
			*/
          
    }
	};
})(jQuery);