/**
 * @file
 * A JavaScript file for the theme.
 */
(function ($) {
  Drupal.behaviors.ndp_blazy = {
		attach: function(context, settings) {

			
			/**
			 * Blazy image loading
			 */
			function blazyload(){
				
				// Initialize
				var bLazy = new Blazy({
					offset: 1500,
					breakpoints: [
						{
						  width: 360, // max-width
							src: 'data-src-small'
						},
						{
						  width: 680, // max-width
						  src: 'data-src-medium'
						}
					],
					
					// callbacks
					success: function(ele){
	          // Image has loaded
	        },
	        error: function(ele, msg){
            if(msg === 'missing'){
                // Data-src is missing
                window.console && console.log('b-lazy: missing data-src');
            }
            else if(msg === 'invalid'){
                // Data-src is invalid
                window.console && console.log('b-lazy: invalid data-src, check the file type etc');
            }  
	        }
			        					
				});
				
			}
			blazyload();
			
          
    }
	};
})(jQuery);