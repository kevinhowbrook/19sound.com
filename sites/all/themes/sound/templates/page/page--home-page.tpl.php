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
							  <div class="slide-nav">
							  Slide nav
							  </div>
							<br>
								<div class="slide-content">
								slide content
								</div>
						</div>
					</div>
					<!-- END SIDR -->

<div class="page-info">
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
<div class="top-region-wrapper">
	<div class="container">
		<div class="row">
			<div class="col-sm-1">
				<?php if ($logo): ?>
		      <a class="logo navbar-btn" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
		        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
		      </a>
		      <?php endif; ?>
					<?php if(!empty($page['top_sidebar'])):?>
							<?php print render($page['top_sidebar']); ?>
				<?php endif; ?>			
			</div>
			<?php if(!empty($page['top_content'])):?>
				<div class="col-sm-11"><?php print render($page['top_content']); ?></div>
			<?php endif; ?>		
		</div>
	</div>
</div>

<div class="middle-region-wrapper">
	<a id="main-content"></a>
	<div class="container">
		<div class="row">
			<div class="col-sm-1">
				<div class="sticky">
					<?php if ($logo): ?>
			      <a class="logo navbar-btn" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
			        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
			      </a>
			      <?php endif; ?>
						<?php if(!empty($page['top_sidebar'])):?>
								<?php print render($page['top_sidebar']); ?>
					<?php endif; ?>			
					<?php if(!empty($page['middle_sidebar'])):?>
						<?php print render($page['middle_sidebar']); ?>
					<?php endif; ?>			
					</div>
				</div>
				<?php if(!empty($page['middle_content'])):?>
					<div class="col-sm-11"><?php print render($page['middle_content']); ?></div>
				<?php endif; ?>		
			</div>
		</div>
	</div>
	<?php if (!empty($page['highlighted'])): ?>
	<div class="container">
		<div class="row">
		  <div id="highlighted" class="col-sm-12"><?php print render($page['highlighted']); ?></div>
		</div>
	</div>
	<?php endif; ?>
	
	
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