<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables: see https://api.drupal.org/api/drupal/modules!system!page.tpl.php/7
 *
 * @ingroup themeable
 */
?>
<div id="sb-site" class="body-inner">
	
	<header role="banner" id="page-header">
	 	<div class="container">
	 	 <div class="row">
	  		<div class="col-xs-6 col-sm-4">
	  		
	  		<?php if ($logo): ?>
	      <a class="logo navbar-btn" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
	        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
	      </a>
	      <?php endif; ?>
				</div>
	
				<div class="col-xs-6 col-sm-8">
		    	
		    	<?php if (!empty($page['header'])): ?>
		    	<div class="hidden-xs hidden-sm">
		    		<?php print render($page['header']); ?>
		    	</div>
		    	<?php endif; ?>
		    	
			    <div class="nav-controller hidden-md hidden-lg">
			      <!-- slidebar controls - use toggle with left or right depending on the slidebar/s you have -->
			      <a id="existing-content-menu" href="#existing-content-menu" class="ham-button navbar-toggle" >
				        <span class="sr-only">Toggle navigation</span>
				        <span class="icon-bar"></span>
				        <span class="icon-bar"></span>
				        <span class="icon-bar"></span>
			      </a>
			    </div>
			    
					<!-- SIDR containers here, you can have left and/or right -->
					<div id="sidr-main-menu-content" class="sidr sidr-panel">
						<div class="inner">
							<?php if (!empty($page['navigation'])): ?>
							  <div class="slide-nav">
									<?php print render($page['navigation']); ?>
							  </div>
							<?php endif; ?>
							<br>
							<?php if (!empty($page['header'])): ?>
								<div class="slide-content">
									<?php print render($page['header']); ?>
								</div>
							<?php endif; ?>
						</div>
					</div>
					<! END SIDR -->
			    
	    	</div>
	
	    </div>
	  </div>
	</header> <!-- /#page-header -->
	
	<header id="navbar" class="hidden-xs hidden-sm" role="banner" >
		  <div class="<?php print $navbar_classes; ?>">
		   	<?php if (!empty($page['navigation'])): ?>
		        <nav role="navigation">
		           <?php print render($page['navigation']); ?>
		        </nav>
		     <?php endif; ?>
			</div>
	</header>
	
	<?php if (!empty($page['highlighted'])): ?>
	<div class="container">
		<div class="row">
		  <div id="highlighted" class="col-sm-12"><?php print render($page['highlighted']); ?></div>
		</div>
	</div>
	<?php endif; ?>
	
	<div class="main-container">
		<div class="container">
		  <div class="row">
		
		    <section<?php print $content_column_class; ?>>
			    
			    <div class="page-info">
			      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
			      <a id="main-content"></a>
			      <?php print render($title_prefix); ?>
			      <?php if (!empty($title)): ?>
			        <h1 class="page-header"><?php print $title; ?></h1>
			      <?php endif; ?>
			      <?php print render($title_suffix); ?>
			      <?php print $messages; ?>
			      <?php if (!empty($tabs)): ?>
			        <div class="page-tabs">
			        	<?php print render($tabs); ?>
			        </div>
			      <?php endif; ?>
			      <?php if (!empty($page['help'])): ?>
			        <?php print render($page['help']); ?>
			      <?php endif; ?>
			      <?php if (!empty($action_links)): ?>
			        <ul class="action-links"><?php print render($action_links); ?></ul>
			      <?php endif; ?>
			    </div>
			    
		      <?php if (!empty($page['content_top'])): ?>
		        <div id="content-top"><?php print render($page['content_top']); ?></div>
		      <?php endif; ?>
		      
		      <?php print render($page['content']); ?>
		      
		      <?php if (!empty($page['content_bottom'])): ?>
		        <div id="content-bottom"><?php print render($page['content_bottom']); ?></div>
		      <?php endif; ?>
		      
		    </section>
		
		    <?php if (!empty($page['sidebar_first'])): ?>
		      <aside<?php print $sidebar_first_class; ?> role="complementary">
		        <?php print render($page['sidebar_first']); ?>
		      </aside>  <!-- /#sidebar-first -->
		    <?php endif; ?>
		
		    <?php if (!empty($page['sidebar_second'])): ?>
		      <aside<?php print $sidebar_second_class; ?> role="complementary">
		        <?php print render($page['sidebar_second']); ?>
		      </aside>  <!-- /#sidebar-second -->
		    <?php endif; ?>
		
		  </div>
		</div>
	</div>
	
	<div id="footerwrap"> 
		<footer class="footer">
			<div class="container">
		  	<?php print render($page['footer']); ?>
		  </div>
		</footer>
		<?php if (!empty($page['footer_second'])): ?>
			<footer class="footer-second">
				<div class="container">
					<?php print render($page['footer_second']); ?>
				</div>
			</footer>
		<?php endif; ?>
	</div>
	
</div>