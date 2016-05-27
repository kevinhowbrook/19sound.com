#Commenting in the less files
Comment in styling should follow the drupal standard:
see the [coding standards](https://www.drupal.org/coding-standards/css)

If you notice any comments that do not follow the standards, please rewrite them

```
/* A comment describing the ruleset */
.this,
.that{
	color:red;
}

/**
 * A longer comment describing this ruleset.
 * Note the blank line before the docblock.
 */
 .them,
 .these{
 	color:blue;
 }
```
###Avoid  inline comments in less
```
//This is a bad comment
.this{
	color:red; 
}
```
---

#SMACCS
>The method of naming and organising can be as detailed as you want, you could have 4 main folders with 1 file in each and all the less in each of the files or have a more detailed approach. eg:

####Basic method folder structure (preferable)
```
  boostrap.less
  variables.less
  overrides.less
  _base.less
  _components.less
  _layout.less
  _theme.less
  _style.less < list of includes
```
####Detailed method folder structure
```
less/base
	boostrap.less
	overrides.less
	_base.less
	_forms.less
	_type.less
	_wysiwyg.less
less/components
	_display_teaser.less
	_display_defaults.less
	_entities.less
	_views.less
	_buttons.less
	_user_profiles.less
less/layout
	_header.less
	_main.less
	_promoted.less
	_sidebar.less
	_footer.less
	_carousels.less
	_mainnav.less
	_block_style_1.less
	_cta_block.less
less/state
 	_user_registration.less
 	_commerce_basket.less  
less/theme.less
	variables.less
	_theme.less
```


##1. Base
Base styles and css resets. Generic basic styling.
#####This folder is likely to contain:
* bootstrap.less - core boostrap includes
* overrides.less - helpers and overrides
* _base.less

```
body, form {
	margin:0;
	padding:0;
}
a{
	color:@brand-primary;
}
```
##2. Layout 
Regions, grids and other layout style rules
#####This folder is likely to contain:
* _sidebar.less
* _footer.less
* _header.less
* _featured.less

```
#article {
    float: left;
}

#sidebar {
    float: right;
}

.l-flipped #article {
    float: right;
}

.l-flipped #sidebar {
    float: left;
}
```

##3. Componenets/Modules
Repeatable design blocks - eg displays, blocks, buttons, carousels etc. It can be one main file, or it can be broken up into smaller files. Err on the side of creating additional, separate components.

#####This folder is likely to contain:
* _displays.less
* _carousels.less
* _mainnav.less
* _block_style_1.less
* _cta_block.less
* _buttons.less
* _entities.less

>Use classes instead of elements and ids. Flatten selector hierarchy:

```
.this{
	input{...}
	&-contained{
		input{...}
	}
}
```
##4. State
Custom classes, often but not always applied via JavaScript.
Preferably prefixed with .is-. For example error messages, alerts of logged in conditionals
```
.is-open{
	background:red;
}
```


##5. Theme (skin/variables)
This will mainly be the variables folder or anything controlling branding of the site.

---





[BootTheme](http://www.boottheme.com).

