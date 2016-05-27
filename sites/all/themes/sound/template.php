<?php
/**
 * @file
 * template.php
 */
 
 /**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function sound_preprocess_page(&$variables) {
  
	/**
	 * !! IMORTANT !! Over ride of bootstrap default column setting classes. 
	 * Also introduces a class for first and second and allows for content first approach if needed.
	 * This setup works on the 'push' and 'pull' column useage. It will always render the content
	 * region first. If you want to swap this back - you will probably need to change the push and pull parts
	 */
  //BOTH SIDEBARS
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="main-content-column col-sm-6 col-sm-push-3"';
    $variables['sidebar_first_class'] = ' class="sidebar sidebar-first col-sm-3 col-sm-pull-6"';
    $variables['sidebar_second_class'] = ' class="sidebar sidebar-second col-sm-3"';
  }
  //FIRST SIDEBAR ONLY
  elseif (!empty($variables['page']['sidebar_first']) && empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="main-content-column col-sm-11 col-sm-push-1"';
    $variables['sidebar_first_class'] = ' class="sidebar sidebar-first col-sm-1 col-sm-pull-11"';
  }
  //SECOND SIDEBAR ONLY
  elseif (empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="main-content-column col-sm-8 "';
    $variables['sidebar_second_class'] = ' class="sidebar sidebar-second col-sm-4"';
  }
  //NO SIDEBARS
  else {
    $variables['content_column_class'] = ' class="main-content-column col-sm-12"';
  }
  

}


/* BOOTSTRAP MENU FIXES */

function sound_menu_link(array $variables) {
    
  if($variables['theme_hook_original'] == 'menu_link'){
	  
	  $element = $variables['element'];
	  $sub_menu = '';
	  
	    if ($element['#below']) {
	    // Ad our own wrapper
	    unset($element['#below']['#theme_wrappers']);
	    $sub_menu = '<ul>' . drupal_render($element['#below']) . '</ul>'; // removed flyout class in ul
	    unset($element['#localized_options']['attributes']['class']); // removed flydown class
	    unset($element['#localized_options']['attributes']['data-toggle']); // removed data toggler
	
	    // Check if this element is nested within another
	    if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 1)) {
	      
	      unset($element['#attributes']['class']); // removed flyout class
	    }
	    else {
	      unset($element['#attributes']['class']); // unset flyout class
	      $element['#localized_options']['html'] = TRUE;
	      $element['#title'] .= ''; // removed carat spans flyout
	    }
	
	    // Set dropdown trigger element to # to prevent inadvertent page loading with submenu click
	    $element['#localized_options']['attributes']['data-target'] = '#'; // You could unset this too as its no longer necessary. 
	  }
	  
	  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
	  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	  
  } else {
	  
	  // use default theme_menu_link
	  $element = $variables['element'];
	  $sub_menu = '';
	
	  if ($element['#below']) {
	    $sub_menu = drupal_render($element['#below']);
	  }
	  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
	  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
	  
	  
  }
  
}