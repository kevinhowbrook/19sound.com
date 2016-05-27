#Gulp
This theme uses gulp to compile it's css to ./less/css. If you add further node_modules please save them in the package.json file using the --save flag during npm install.

To use gulp in the theme you will need node npm and gulp globaly.

###1. Install node
Installation notes are [here](https://docs.npmjs.com/getting-started/installing-node)

###2. Install gulp
Install gulp locally with npm
```
$ npm install --global gulp
```
###3. Install node_modules
Run npm install to load everything you need to run the gulp tasks, cd into the theme (/var/www/yoursite/sites/all/themes/ndp-responsive) and run:
```
$ npm install
```

###Running gulp
Using a terminal, cd into the theme directory and run gulp:
```
$ gulp

```

>The default task is a watch task which compiles less

####Gotchas
For ubuntu users... you may get an ENOSPC watch error when running gulp.
This command will increase the watcher limit:
```
echo fs.inotify.max_user_watches=582222 | sudo tee -a /etc/sysctl.conf && sudo sysctl -p
```
---
#Menu block

Where's my main navigation menu?

Variables have been removed from the theme's page template to avoid the default main navigation code from being displayed.
You must turn on and use the menu block module, create a menu block for the main menu and display it in the 'Navigation' region of the theme.

