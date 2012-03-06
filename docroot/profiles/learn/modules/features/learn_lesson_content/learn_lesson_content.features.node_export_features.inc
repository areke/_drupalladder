<?php
/**
 * @file
 * learn_lesson_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function learn_lesson_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'node_export_serialize::a:14:{i:0;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;5&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:11:&quot;Install Git&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;6b0a0764-f026-7a24-b132-7070033969e5&quot;;s:3:&quot;nid&quot;;s:1:&quot;5&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330902206&quot;;s:7:&quot;changed&quot;;s:10:&quot;1331048827&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;027b5839-7a74-af04-6905-fee2d01c7ef4&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1331048827&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:10291:&quot;Installing Git on Linux
Installing Git on Mac OS X
Installing Git on Windows
Next Steps With Git


________________


                            Installing Git on Linux


Objective:
Install git on your computer.


Overview:
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.


You will install Git so that you can use it from the command line.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.


How To:
On RPM-based systems (RHEL, Fedora Core, CentOS, ...) this should work:
        $ sudo yum install git-core
On apt-based systems (Debian, Ubuntu, ...):
        $ sudo apt-get install git-core
If you have Macports installed on your Mac, then
        $ sudo port install git-core +bash_completion +doc +gitweb +svn


Moving Around:
1. Open a terminal window.  On Ubuntu, Programs / Accessories / Terminal
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then
$ cd sites/all/modules
$ cd ../themes
will get you to your modules/ and then themes/ directories.


Don\\\'t worry.  If you stay in your home directory for now, see the next page.
________________
                           Installing Git on Mac OS X


Objective:
Install git on your computer.


Overview:
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.


You will install Git so that you can use it from the command line.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.


How To:
If you use Macports or similar, then you may prefer
        $ sudo port install git-core +bash_completion +doc +gitweb +svn
to the steps below.  If you have Lion (OS X 10.7) then the XCode 4 includes Git.  Untested by us but popular:  the Homebrew package manager, http://mxcl.github.com/homebrew/.


1. Visit http://code.google.com/p/git-osx-installer/downloads/list?can=3.  If you are not using the most recent version of OS X, then change &quot;Featured downloads&quot; to &quot;Current downloads&quot; in the drop-down list.  As of this writing, versions are available for Leopard (OS X 10.5) and Snow Leopard (OS X 10.6).
2. Find a version of Git (not OpenInGitX, OpenInGitGui) for your version of OS X.
3. Follow the link from 2. to the download page.  Download the installer.
4. Run the installer and follow the directions.  The defaults are all reasonable.


Moving Around:
1. Open a terminal window:  Applications / Utilities / Terminal.app
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then
$ cd sites/all/modules
$ cd ../themes
will get you to your modules/ and then themes/ directories.


Don\\\'t worry.  If you stay in your home directory for now, see the next page.


________________


                           Installing Git on Windows


Objective:
Install git on your computer.


Overview:
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.


You will install Git so that you can use it from the command line.  You will also install an alternative to the built-in cmd.exe.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.


How To:
1. Visit http://code.google.com/p/msysgit/downloads/list?can=3.  Do not get the portable versions nor the ones for hacking Git.  Maybe later.
2. Follow the link from 1. to the download page.  Download the installer.
3. Run the installer and follow the directions.  The defaults are all reasonable.  When you get to &quot;Select Components,&quot; select &quot;Git Bash Here&quot; (and &quot;Git GUI Here&quot; if you like) under Windows Explorer Integration.
4. (Optional)  Open the Start menu, All Programs, and open the Git folder.  Right-click on Git-Bash and choose &quot;Pin to Start Menu&quot;.


Moving Around:
1. Open Git-Bash from your Start menu or a Desktop shortcut.
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then
$ cd sites/all/modules
$ cd ../themes
will get you to your modules/ and then themes/ directories.


Tips:
1. Use the INS key instead of control-v to paste, or right-click at the top of the Git-Bash window to access Edit / Paste.
2. Or find the directory you want in Explorer, right-click, and choose Git Bash Here to open a new Git-Bash window.
Don\\\'t worry.  If you stay in your home directory for now, see the next page.
________________


                              Next Steps With Git


You are now prepared for several of the &quot;higher rungs&quot; on the Drupal ladder.  See their instructions on how to manage patches while contributing to issues queues.


Git is great!  You can use it to keep track of your own code (HTML, CSS, PHP, TeX).  You can use it to synchronize files between your development, testing, and production servers, and you can back it up on your free GitHub account.  You can collaborate with other developers.


Basic Configuration:
1. Make sure Git is installed.
$ git --help
1. Tell Git who you are.
$ git config --global user.name Your Name
$ git config --global user.email your.name@example.com


Download a Project:
1. Find a project (module or theme) you know, or want to try out.  If you are sharing an overloaded WiFi connection, choose a tiny one like http://drupal.org/project/multicolumn.  If you want a richer example, choose something like http://drupal.org/project/views.  Either way, choose the &quot;Version control&quot; tab near the top of the page and select a version from the drop-down list.  
2. Copy the git clone and cd commands to your terminal window.  Then try these informational commands:
        $ ls -a
        $ git status
        $ git branch -a
        $ git log -3


Download Drupal:
For higher rungs on the Drupal Ladder, you will want to have a Git repository for Drupal core.  Some time when you have a good internet connection,
1. git clone --branch 8.x http://git.drupal.org/project/drupal.git
2. git clone --branch 7.x http://git.drupal.org/project/drupal.git


Tips:
1. You would think that problems with line endings would be solved by now.  Ha!  If all your files have UNIX-style line endings (almost true for Drupal) then Windows users are often advised to configure Git with
        $ git config --global core.autocrlf true
        $ git config --global core.safecrlf true
The first line is done by default by the Git installer.  Linux and Mac users are often advised to configure Git with
        $ git config --global core.autocrlf input
        $ git config --global core.safecrlf true
If you ever have to deal with files that have Windows line endings, or if git status reports that files have changed even though you just checked them out, you may have to change these settings.
1. If you did not get out of your home directory before, then you downloaded the project there.  You can move it some place more useful using your favorite method is (Windows Explorer, Mac Finder, Nautilus, or mv).  All the information Git needs is in the .git/ subdirectory, so it is safe to move or even rename the project directory.  Eventually, you will run more git commands from the project directory.


What else:
1. Install Drupal.
2. Install Skitch (http://skitch.com/), Jing (http://www.techsmith.com/jing.html), or Awesome Screenshot (http://awesomescreenshot.com/) to share screenshots.
3. If you have a GUI version of Git, try it out!


Further Reading:
1. Every project page on d.o has a &quot;Version control&quot; tab for project-specific Git instructions.
2. There is a whole section of d.o devoted to Git documentation:  http://drupal.org/documentation/git.  There are links there to Drupal-specific and more general Git documentation, instructions, and tutorials.
Two sources that I have found helpful are
1. http://gitimmersion.com/:  commonly used commands as a long series of short tutorials.  (I borrowed a few lines for ‚ÄúBasic Configuration‚Äù and ‚ÄúTips‚Äù above.)
2. http://www.eecs.harvard.edu/~cduan/technical/git/:  a good explanation to read when you need to know what git is doing, not just follow instructions
3. Windows users:  MinGW is an old project that ports open-source tools to Windows.  Part of  MinGW is MSYS (Minimal SYStem), a port of bash.  You have installed msysgit, which bundles MSYS with Git.


Experimentation:
1. There is a lot you can do using just your own computer.
2. When you want to experiment with a remote server, you can set up a free account on https://github.com/.  GitHub also has its own set of instructions and tutorials.
3. When you want to start your own project on d.o, the instructions are at http://drupal.org/node/1047190.  Anyone can create sandbox projects, but you need to get one project approved before you can add a real project with its own releases.&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:11567:&quot;&lt;p&gt;Installing Git on Linux&lt;br /&gt;
Installing Git on Mac OS X&lt;br /&gt;
Installing Git on Windows&lt;br /&gt;
Next Steps With Git&lt;/p&gt;
&lt;p&gt;________________&lt;/p&gt;
&lt;p&gt;                            Installing Git on Linux&lt;/p&gt;
&lt;p&gt;Objective:&lt;br /&gt;
Install git on your computer.&lt;/p&gt;
&lt;p&gt;Overview:&lt;br /&gt;
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.&lt;/p&gt;
&lt;p&gt;You will install Git so that you can use it from the command line.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.&lt;/p&gt;
&lt;p&gt;How To:&lt;br /&gt;
On RPM-based systems (RHEL, Fedora Core, CentOS, ...) this should work:&lt;br /&gt;
        $ sudo yum install git-core&lt;br /&gt;
On apt-based systems (Debian, Ubuntu, ...):&lt;br /&gt;
        $ sudo apt-get install git-core&lt;br /&gt;
If you have Macports installed on your Mac, then&lt;br /&gt;
        $ sudo port install git-core +bash_completion +doc +gitweb +svn&lt;/p&gt;
&lt;p&gt;Moving Around:&lt;br /&gt;
1. Open a terminal window.  On Ubuntu, Programs / Accessories / Terminal&lt;br /&gt;
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then&lt;br /&gt;
$ cd sites/all/modules&lt;br /&gt;
$ cd ../themes&lt;br /&gt;
will get you to your modules/ and then themes/ directories.&lt;/p&gt;
&lt;p&gt;Don\\\'t worry.  If you stay in your home directory for now, see the next page.&lt;br /&gt;
________________&lt;br /&gt;
                           Installing Git on Mac OS X&lt;/p&gt;
&lt;p&gt;Objective:&lt;br /&gt;
Install git on your computer.&lt;/p&gt;
&lt;p&gt;Overview:&lt;br /&gt;
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.&lt;/p&gt;
&lt;p&gt;You will install Git so that you can use it from the command line.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.&lt;/p&gt;
&lt;p&gt;How To:&lt;br /&gt;
If you use Macports or similar, then you may prefer&lt;br /&gt;
        $ sudo port install git-core +bash_completion +doc +gitweb +svn&lt;br /&gt;
to the steps below.  If you have Lion (OS X 10.7) then the XCode 4 includes Git.  Untested by us but popular:  the Homebrew package manager, &lt;a href=&quot;http://mxcl.github.com/homebrew/&quot;&gt;http://mxcl.github.com/homebrew/&lt;/a&gt;.&lt;/p&gt;
&lt;p&gt;1. Visit &lt;a href=&quot;http://code.google.com/p/git-osx-installer/downloads/list?can=3&quot;&gt;http://code.google.com/p/git-osx-installer/downloads/list?can=3&lt;/a&gt;.  If you are not using the most recent version of OS X, then change &quot;Featured downloads&quot; to &quot;Current downloads&quot; in the drop-down list.  As of this writing, versions are available for Leopard (OS X 10.5) and Snow Leopard (OS X 10.6).&lt;br /&gt;
2. Find a version of Git (not OpenInGitX, OpenInGitGui) for your version of OS X.&lt;br /&gt;
3. Follow the link from 2. to the download page.  Download the installer.&lt;br /&gt;
4. Run the installer and follow the directions.  The defaults are all reasonable.&lt;/p&gt;
&lt;p&gt;Moving Around:&lt;br /&gt;
1. Open a terminal window:  Applications / Utilities / Terminal.app&lt;br /&gt;
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then&lt;br /&gt;
$ cd sites/all/modules&lt;br /&gt;
$ cd ../themes&lt;br /&gt;
will get you to your modules/ and then themes/ directories.&lt;/p&gt;
&lt;p&gt;Don\\\'t worry.  If you stay in your home directory for now, see the next page.&lt;/p&gt;
&lt;p&gt;________________&lt;/p&gt;
&lt;p&gt;                           Installing Git on Windows&lt;/p&gt;
&lt;p&gt;Objective:&lt;br /&gt;
Install git on your computer.&lt;/p&gt;
&lt;p&gt;Overview:&lt;br /&gt;
While climbing the Drupal Ladder, Git gives you easy ways to manage changes to the code:  you can apply a patch for testing, tweak the patch, experiment, re-roll it, and get back safely to where you started.&lt;/p&gt;
&lt;p&gt;You will install Git so that you can use it from the command line.  You will also install an alternative to the built-in cmd.exe.  You may also install a GUI version, but we want to give one set of instructions that everyone can follow.  When you get instructions on drupal.org, while climbing the Drupal Ladder, or when asking for advice on how to use Git, the instructions will assume a command line.&lt;/p&gt;
&lt;p&gt;How To:&lt;br /&gt;
1. Visit &lt;a href=&quot;http://code.google.com/p/msysgit/downloads/list?can=3&quot;&gt;http://code.google.com/p/msysgit/downloads/list?can=3&lt;/a&gt;.  Do not get the portable versions nor the ones for hacking Git.  Maybe later.&lt;br /&gt;
2. Follow the link from 1. to the download page.  Download the installer.&lt;br /&gt;
3. Run the installer and follow the directions.  The defaults are all reasonable.  When you get to &quot;Select Components,&quot; select &quot;Git Bash Here&quot; (and &quot;Git GUI Here&quot; if you like) under Windows Explorer Integration.&lt;br /&gt;
4. (Optional)  Open the Start menu, All Programs, and open the Git folder.  Right-click on Git-Bash and choose &quot;Pin to Start Menu&quot;.&lt;/p&gt;
&lt;p&gt;Moving Around:&lt;br /&gt;
1. Open Git-Bash from your Start menu or a Desktop shortcut.&lt;br /&gt;
2. You need to know enough about the command line to move to a useful directory.  Try pwd (present working directory) and ls (list) for information; cd (change directory) to move around.  For example, if you are already in an installed drupal/ directory, then&lt;br /&gt;
$ cd sites/all/modules&lt;br /&gt;
$ cd ../themes&lt;br /&gt;
will get you to your modules/ and then themes/ directories.&lt;/p&gt;
&lt;p&gt;Tips:&lt;br /&gt;
1. Use the INS key instead of control-v to paste, or right-click at the top of the Git-Bash window to access Edit / Paste.&lt;br /&gt;
2. Or find the directory you want in Explorer, right-click, and choose Git Bash Here to open a new Git-Bash window.&lt;br /&gt;
Don\\\'t worry.  If you stay in your home directory for now, see the next page.&lt;br /&gt;
________________&lt;/p&gt;
&lt;p&gt;                              Next Steps With Git&lt;/p&gt;
&lt;p&gt;You are now prepared for several of the &quot;higher rungs&quot; on the Drupal ladder.  See their instructions on how to manage patches while contributing to issues queues.&lt;/p&gt;
&lt;p&gt;Git is great!  You can use it to keep track of your own code (HTML, CSS, PHP, TeX).  You can use it to synchronize files between your development, testing, and production servers, and you can back it up on your free GitHub account.  You can collaborate with other developers.&lt;/p&gt;
&lt;p&gt;Basic Configuration:&lt;br /&gt;
1. Make sure Git is installed.&lt;br /&gt;
$ git --help&lt;br /&gt;
1. Tell Git who you are.&lt;br /&gt;
$ git config --global user.name Your Name&lt;br /&gt;
$ git config --global user.email &lt;a href=&quot;mailto:your.name@example.com&quot;&gt;your.name@example.com&lt;/a&gt;&lt;/p&gt;
&lt;p&gt;Download a Project:&lt;br /&gt;
1. Find a project (module or theme) you know, or want to try out.  If you are sharing an overloaded WiFi connection, choose a tiny one like &lt;a href=&quot;http://drupal.org/project/multicolumn&quot;&gt;http://drupal.org/project/multicolumn&lt;/a&gt;.  If you want a richer example, choose something like &lt;a href=&quot;http://drupal.org/project/views&quot;&gt;http://drupal.org/project/views&lt;/a&gt;.  Either way, choose the &quot;Version control&quot; tab near the top of the page and select a version from the drop-down list.&lt;br /&gt;
2. Copy the git clone and cd commands to your terminal window.  Then try these informational commands:&lt;br /&gt;
        $ ls -a&lt;br /&gt;
        $ git status&lt;br /&gt;
        $ git branch -a&lt;br /&gt;
        $ git log -3&lt;/p&gt;
&lt;p&gt;Download Drupal:&lt;br /&gt;
For higher rungs on the Drupal Ladder, you will want to have a Git repository for Drupal core.  Some time when you have a good internet connection,&lt;br /&gt;
1. git clone --branch 8.x &lt;a href=&quot;http://git.drupal.org/project/drupal.git&quot;&gt;http://git.drupal.org/project/drupal.git&lt;/a&gt;&lt;br /&gt;
2. git clone --branch 7.x &lt;a href=&quot;http://git.drupal.org/project/drupal.git&quot;&gt;http://git.drupal.org/project/drupal.git&lt;/a&gt;&lt;/p&gt;
&lt;p&gt;Tips:&lt;br /&gt;
1. You would think that problems with line endings would be solved by now.  Ha!  If all your files have UNIX-style line endings (almost true for Drupal) then Windows users are often advised to configure Git with&lt;br /&gt;
        $ git config --global core.autocrlf true&lt;br /&gt;
        $ git config --global core.safecrlf true&lt;br /&gt;
The first line is done by default by the Git installer.  Linux and Mac users are often advised to configure Git with&lt;br /&gt;
        $ git config --global core.autocrlf input&lt;br /&gt;
        $ git config --global core.safecrlf true&lt;br /&gt;
If you ever have to deal with files that have Windows line endings, or if git status reports that files have changed even though you just checked them out, you may have to change these settings.&lt;br /&gt;
1. If you did not get out of your home directory before, then you downloaded the project there.  You can move it some place more useful using your favorite method is (Windows Explorer, Mac Finder, Nautilus, or mv).  All the information Git needs is in the .git/ subdirectory, so it is safe to move or even rename the project directory.  Eventually, you will run more git commands from the project directory.&lt;/p&gt;
&lt;p&gt;What else:&lt;br /&gt;
1. Install Drupal.&lt;br /&gt;
2. Install Skitch (&lt;a href=&quot;http://skitch.com/&quot;&gt;http://skitch.com/&lt;/a&gt;), Jing (&lt;a href=&quot;http://www.techsmith.com/jing.html&quot;&gt;http://www.techsmith.com/jing.html&lt;/a&gt;), or Awesome Screenshot (&lt;a href=&quot;http://awesomescreenshot.com/&quot;&gt;http://awesomescreenshot.com/&lt;/a&gt;) to share screenshots.&lt;br /&gt;
3. If you have a GUI version of Git, try it out!&lt;/p&gt;
&lt;p&gt;Further Reading:&lt;br /&gt;
1. Every project page on d.o has a &quot;Version control&quot; tab for project-specific Git instructions.&lt;br /&gt;
2. There is a whole section of d.o devoted to Git documentation:  &lt;a href=&quot;http://drupal.org/documentation/git&quot;&gt;http://drupal.org/documentation/git&lt;/a&gt;.  There are links there to Drupal-specific and more general Git documentation, instructions, and tutorials.&lt;br /&gt;
Two sources that I have found helpful are&lt;br /&gt;
1. &lt;a href=&quot;http://gitimmersion.com/:&quot;&gt;http://gitimmersion.com/:&lt;/a&gt;  commonly used commands as a long series of short tutorials.  (I borrowed a few lines for ‚ÄúBasic Configuration‚Äù and ‚ÄúTips‚Äù above.)&lt;br /&gt;
2. &lt;a href=&quot;http://www.eecs.harvard.edu/~cduan/technical/git/:&quot;&gt;http://www.eecs.harvard.edu/~cduan/technical/git/:&lt;/a&gt;  a good explanation to read when you need to know what git is doing, not just follow instructions&lt;br /&gt;
3. Windows users:  MinGW is an old project that ports open-source tools to Windows.  Part of  MinGW is MSYS (Minimal SYStem), a port of bash.  You have installed msysgit, which bundles MSYS with Git.&lt;/p&gt;
&lt;p&gt;Experimentation:&lt;br /&gt;
1. There is a lot you can do using just your own computer.&lt;br /&gt;
2. When you want to experiment with a remote server, you can set up a free account on &lt;a href=&quot;https://github.com/&quot;&gt;https://github.com/&lt;/a&gt;.  GitHub also has its own set of instructions and tutorials.&lt;br /&gt;
3. When you want to start your own project on d.o, the instructions are at &lt;a href=&quot;http://drupal.org/node/1047190&quot;&gt;http://drupal.org/node/1047190&lt;/a&gt;.  Anyone can create sandbox projects, but you need to get one project approved before you can add a real project with its own releases.&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:1:{s:3:&quot;und&quot;;a:3:{i:0;a:1:{s:5:&quot;value&quot;;s:1:&quot;6&quot;;}i:1;a:1:{s:5:&quot;value&quot;;s:1:&quot;7&quot;;}i:2;a:1:{s:5:&quot;value&quot;;s:1:&quot;8&quot;;}}}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:5:&quot;other&quot;;}}}s:17:&quot;field_lesson_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:5:&quot;other&quot;;}}}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:105:&quot;By the end of this lesson you will have Git installed on your computer and know a few basic commands.

&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:109:&quot;&lt;p&gt;By the end of this lesson you will have Git installed on your computer and know a few basic commands.&lt;/p&gt;
&quot;;}}}s:24:&quot;field_lesson_description&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:37:&quot;Install Git on your personal computer&quot;;s:6:&quot;format&quot;;N;s:10:&quot;safe_value&quot;;s:37:&quot;Install Git on your personal computer&quot;;}}}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330902206&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:1:&quot;8&quot;;s:6:&quot;source&quot;;s:6:&quot;node/5&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/027b5839-7a74-af04-6905-fee2d01c7ef4&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:1;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;4&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:81:&quot;Getting started: Create an issue, reproduce and confirm bugs, draft issue summary&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;9d9853ec-554c-a644-eddd-ada3525e7d6c&quot;;s:3:&quot;nid&quot;;s:1:&quot;4&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330901861&quot;;s:7:&quot;changed&quot;;s:10:&quot;1331048791&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;1d498fa2-d3e4-5754-9160-757d219e8032&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1331048791&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:3414:&quot;&lt;h3&gt;Posting an Issue:&lt;/h3&gt;
&lt;ol&gt;
    &lt;li&gt;Go to the Drupal 8 Sandbox issue queue &lt;a href=&quot;http://drupal.org/project/issues/1388780?categories=All&quot;&gt;here&lt;/a&gt; and click the option to Create a new issue.&lt;/li&gt;
   &lt;li&gt; Copy and paste the following Title and Description for your new issue:
&lt;blockquote&gt;&lt;p&gt;&lt;strong&gt;Title:&lt;/strong&gt; Rewrite description for URL alias on node/add/*&lt;/p&gt;
&lt;p&gt;&lt;strong&gt;Description: &lt;/strong&gt;&lt;/p&gt;
&lt;p&gt;&lt;strong&gt;Note: This issue is being posted here as an exercise. Please don\\\'t do anything with this post. The real issue has already been resolved in Drupal 8 (see issue &lt;a href=&quot;http://drupal.org/node/1326088&quot;&gt;#1326088&lt;/a&gt;). To participate in this exercise, see instructions here: &lt;a href=&quot;http://drupal.org/project/1388780&quot;&gt;http://drupal.org/project/1388780&lt;/a&gt;.&lt;/strong&gt;&lt;/p&gt;

&lt;h3&gt;Current:&lt;/h3&gt;
&lt;p&gt;&lt;code&gt;Optionally specify an alternative URL by which this content can be accessed. For example, type &quot;about&quot; when writing an about page. Use a relative path and don\\\'t add a trailing slash or the URL alias won\\\'t work.&lt;/code&gt;&lt;/p&gt;

&lt;h3&gt;Proposed:&lt;/h3&gt;
&lt;p&gt;&lt;code&gt;The alternative URL for this content. For example, type &quot;about&quot; when creating an about page. Use a relative path without a trailing slash.&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;

    &lt;li&gt;Save. Now you have re-created a real issue from the Drupal 8 issue queue.&lt;/li&gt;
    &lt;li&gt;Now find the bug reported in this issue.&lt;/li&gt;
   &lt;li&gt; Post a comment indicating whether you were able or unable to reproduce the bug (in this case, whether you found the confusing text and agree that the proposed alternative is better). Include documentation about how to reproduce the bug (find the confusing text) if these details are not already crystal clear from the original bug report. And upload a screen shot with an arrow, circle, or some sort of highlighting that shows other readers what needs to be fixed.&lt;/li&gt;
    &lt;li&gt;Contributors are strongly encouraged to use the &lt;a href=&quot;http://drupal.org/&quot;&gt;drupal.org&lt;/a&gt; issue summary template &lt;a href=&quot;http://drupal.org/node/1155816&quot;&gt;here&lt;/a&gt;, especially for posts with lots and lots of comments. Take a minute to familiarize yourself with the template and try using it to re-write the issue post you just created. Under sections that are not applicable, like API Changes, just say ‚Äúnone‚Äù. If you don‚Äôt know, just say ‚ÄúI‚Äôm not sure‚Äù. (See an exemplary issue post &lt;a href=&quot;http://drupal.org/node/1005570&quot;&gt;here&lt;/a&gt;.)&lt;/li&gt;
&lt;/ol&gt;

&lt;h3&gt;Tips:&lt;/h3&gt;
&lt;ol&gt;
    &lt;li&gt;There‚Äôs a list of bugs that are supposed to be good for beginners &lt;a href=&quot;http://drupal.org/project/issues/search/drupal?issue_tags=Novice&quot;&gt;here&lt;/a&gt;.&lt;/li&gt;
    &lt;li&gt;When working on real, unresolved issues, double check if this bug has been reported or resolved elsewhere. If it has, change the issue‚Äôs to status ‚Äúclosed (duplicate)‚Äù and post a link to the duplicated issue.&lt;/li&gt;
   &lt;li&gt;If the software works as it‚Äôs supposed to, the issue you‚Äôre working on is not really a bug. Change the issue‚Äôs category from ‚Äúbug report‚Äù to ‚Äúsupport request‚Äù (questions about how to use the software) or ‚Äúfeature request‚Äù (suggestions for other functionality that might be nice to add to the software) then move onto the next reported bug. (The fourth category, &quot;task&quot; is usually reserved for maintainers to track their to do lists.)&lt;/li&gt;
&lt;/ol&gt;&quot;;s:6:&quot;format&quot;;s:9:&quot;full_html&quot;;s:10:&quot;safe_value&quot;;s:3354:&quot;&lt;h3&gt;Posting an Issue:&lt;/h3&gt;
&lt;ol&gt;&lt;li&gt;Go to the Drupal 8 Sandbox issue queue &lt;a href=&quot;http://drupal.org/project/issues/1388780?categories=All&quot;&gt;here&lt;/a&gt; and click the option to Create a new issue.&lt;/li&gt;
&lt;li&gt; Copy and paste the following Title and Description for your new issue:&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;strong&gt;Title:&lt;/strong&gt; Rewrite description for URL alias on node/add/*&lt;/p&gt;
&lt;p&gt;&lt;strong&gt;Description: &lt;/strong&gt;&lt;/p&gt;
&lt;p&gt;&lt;strong&gt;Note: This issue is being posted here as an exercise. Please don\\\'t do anything with this post. The real issue has already been resolved in Drupal 8 (see issue &lt;a href=&quot;http://drupal.org/node/1326088&quot;&gt;#1326088&lt;/a&gt;). To participate in this exercise, see instructions here: &lt;a href=&quot;http://drupal.org/project/1388780&quot;&gt;http://drupal.org/project/1388780&lt;/a&gt;.&lt;/strong&gt;&lt;/p&gt;
&lt;h3&gt;Current:&lt;/h3&gt;
&lt;p&gt;&lt;code&gt;Optionally specify an alternative URL by which this content can be accessed. For example, type &quot;about&quot; when writing an about page. Use a relative path and don\\\'t add a trailing slash or the URL alias won\\\'t work.&lt;/code&gt;&lt;/p&gt;
&lt;h3&gt;Proposed:&lt;/h3&gt;
&lt;p&gt;&lt;code&gt;The alternative URL for this content. For example, type &quot;about&quot; when creating an about page. Use a relative path without a trailing slash.&lt;/code&gt;&lt;/p&gt;
&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Save. Now you have re-created a real issue from the Drupal 8 issue queue.&lt;/li&gt;
&lt;li&gt;Now find the bug reported in this issue.&lt;/li&gt;
&lt;li&gt; Post a comment indicating whether you were able or unable to reproduce the bug (in this case, whether you found the confusing text and agree that the proposed alternative is better). Include documentation about how to reproduce the bug (find the confusing text) if these details are not already crystal clear from the original bug report. And upload a screen shot with an arrow, circle, or some sort of highlighting that shows other readers what needs to be fixed.&lt;/li&gt;
&lt;li&gt;Contributors are strongly encouraged to use the &lt;a href=&quot;http://drupal.org/&quot;&gt;drupal.org&lt;/a&gt; issue summary template &lt;a href=&quot;http://drupal.org/node/1155816&quot;&gt;here&lt;/a&gt;, especially for posts with lots and lots of comments. Take a minute to familiarize yourself with the template and try using it to re-write the issue post you just created. Under sections that are not applicable, like API Changes, just say ‚Äúnone‚Äù. If you don‚Äôt know, just say ‚ÄúI‚Äôm not sure‚Äù. (See an exemplary issue post &lt;a href=&quot;http://drupal.org/node/1005570&quot;&gt;here&lt;/a&gt;.)&lt;/li&gt;
&lt;/ol&gt;&lt;h3&gt;Tips:&lt;/h3&gt;
&lt;ol&gt;&lt;li&gt;There‚Äôs a list of bugs that are supposed to be good for beginners &lt;a href=&quot;http://drupal.org/project/issues/search/drupal?issue_tags=Novice&quot;&gt;here&lt;/a&gt;.&lt;/li&gt;
&lt;li&gt;When working on real, unresolved issues, double check if this bug has been reported or resolved elsewhere. If it has, change the issue‚Äôs to status ‚Äúclosed (duplicate)‚Äù and post a link to the duplicated issue.&lt;/li&gt;
&lt;li&gt;If the software works as it‚Äôs supposed to, the issue you‚Äôre working on is not really a bug. Change the issue‚Äôs category from ‚Äúbug report‚Äù to ‚Äúsupport request‚Äù (questions about how to use the software) or ‚Äúfeature request‚Äù (suggestions for other functionality that might be nice to add to the software) then move onto the next reported bug. (The fourth category, &quot;task&quot; is usually reserved for maintainers to track their to do lists.)&lt;/li&gt;
&lt;/ol&gt;&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:1:{s:3:&quot;und&quot;;a:3:{i:0;a:1:{s:5:&quot;value&quot;;s:1:&quot;6&quot;;}i:1;a:1:{s:5:&quot;value&quot;;s:1:&quot;7&quot;;}i:2;a:1:{s:5:&quot;value&quot;;s:1:&quot;8&quot;;}}}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;core&quot;;}}}s:17:&quot;field_lesson_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:6:&quot;config&quot;;}}}s:26:&quot;field_lesson_prerequisites&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:1708:&quot;&lt;ul&gt;
&lt;li&gt; Know how to set up a working installation of Drupal&lt;/li&gt;
&lt;li&gt; Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://drupal.org/project/1388780/git-instructions&quot;&gt;here&lt;/a&gt; @TODO.
      &lt;ul&gt;
      &lt;li&gt;Note that on this webpage commands to create the repository are displayed on three lines.  It‚Äôs actually two commands: git, cd, but because the directory name (drupal_8_sandbox_for_boston_initiative) is so long, the browser wordwraps it, making it look like three commands.&lt;/li&gt;
        &lt;li&gt;Set up the linkages appropriate to your OS and webserver.  E.G. edit a new domain name into /etc/hosts (on Unix) or c:/WINDOWS/system32/drivers/etc/hosts (on Windows XP).  Something like: mynewdomain.local 127.0.0.1.  Then edit a &amp;lt;VirtualHost&amp;gt; clause into Apache‚Äôs vhosts.conf (if it exists) or httpd.conf, wherever those files live on your installation.  The &amp;lt;VirtualHost&amp;gt; clause should contain ServerName and DocumentRoot directives to map your new domain name to the full path to drupal_8_sandbox_for_boston_initiative.&lt;/li&gt;
        &lt;li&gt;Note for anyone running Spybot Search and Destroy under Windows: Spybot locks the hosts file.  Navigate to Spybot&gt;Tools&gt;IE tweaks and uncheck ‚ÄúLock Hosts File read-only as protection against hijackers‚Äù.&lt;/li&gt;
       &lt;li&gt; Navigate to the URL you‚Äôve set up for the sandbox and select ‚ÄúStandard‚Äù installation profile.&lt;/li&gt;
    &lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;You need a way to capture screen shots, popular options include: &lt;a href=&quot;http://skitch.com/&quot;&gt;Skitch&lt;/a&gt;, &lt;a href=&quot;http://www.techsmith.com/jing.html&quot;&gt;Jing&lt;/a&gt;, or &lt;a href=&quot;http://awesomescreenshot.com/&quot;&gt;Awesome Screenshot&lt;/a&gt;.&lt;/li&gt;
&lt;/ul&gt;
&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:1661:&quot;&lt;ul&gt;&lt;li&gt; Know how to set up a working installation of Drupal&lt;/li&gt;
&lt;li&gt; Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://drupal.org/project/1388780/git-instructions&quot;&gt;here&lt;/a&gt; @TODO.
&lt;ul&gt;&lt;li&gt;Note that on this webpage commands to create the repository are displayed on three lines.  It‚Äôs actually two commands: git, cd, but because the directory name (drupal_8_sandbox_for_boston_initiative) is so long, the browser wordwraps it, making it look like three commands.&lt;/li&gt;
&lt;li&gt;Set up the linkages appropriate to your OS and webserver.  E.G. edit a new domain name into /etc/hosts (on Unix) or c:/WINDOWS/system32/drivers/etc/hosts (on Windows XP).  Something like: mynewdomain.local 127.0.0.1.  Then edit a &amp;lt;VirtualHost&amp;gt; clause into Apache‚Äôs vhosts.conf (if it exists) or httpd.conf, wherever those files live on your installation.  The &amp;lt;VirtualHost&amp;gt; clause should contain ServerName and DocumentRoot directives to map your new domain name to the full path to drupal_8_sandbox_for_boston_initiative.&lt;/li&gt;
&lt;li&gt;Note for anyone running Spybot Search and Destroy under Windows: Spybot locks the hosts file.  Navigate to Spybot&amp;gt;Tools&amp;gt;IE tweaks and uncheck ‚ÄúLock Hosts File read-only as protection against hijackers‚Äù.&lt;/li&gt;
&lt;li&gt; Navigate to the URL you‚Äôve set up for the sandbox and select ‚ÄúStandard‚Äù installation profile.&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;You need a way to capture screen shots, popular options include: &lt;a href=&quot;http://skitch.com/&quot;&gt;Skitch&lt;/a&gt;, &lt;a href=&quot;http://www.techsmith.com/jing.html&quot;&gt;Jing&lt;/a&gt;, or &lt;a href=&quot;http://awesomescreenshot.com/&quot;&gt;Awesome Screenshot&lt;/a&gt;.&lt;/li&gt;
&lt;/ul&gt;&quot;;}}}s:21:&quot;field_lesson_overview&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:515:&quot;&lt;p&gt;In this exercise you will create an issue post. (Actually you‚ are re-creating issue post 1326088.) Then you will confirm the reported bug and draft an improved issue summary.&lt;/p&gt;
&lt;p&gt;It can take a lot of time to understand what\'s going on with an issue and reproduce reported bugs. Two valuable ways to contribute to a Drupal project is to reproduce and document bugs, and to improve issue summaries where they are missing or incomplete. This helps maintainers quickly diagnose and respond to bug reports.&lt;/p&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:514:&quot;&lt;p&gt;In this exercise you will create an issue post. (Actually you‚ are re-creating issue post 1326088.) Then you will confirm the reported bug and draft an improved issue summary.&lt;br /&gt;
It can take a lot of time to understand what\'s going on with an issue and reproduce reported bugs. Two valuable ways to contribute to a Drupal project is to reproduce and document bugs, and to improve issue summaries where they are missing or incomplete. This helps maintainers quickly diagnose and respond to bug reports.&lt;/p&gt;
&quot;;}}}s:24:&quot;field_lesson_description&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:105:&quot;By the end of this exercise you will know how to post and contribute to issues in the Drupal issue queue.&quot;;s:6:&quot;format&quot;;N;s:10:&quot;safe_value&quot;;s:105:&quot;By the end of this exercise you will know how to post and contribute to issues in the Drupal issue queue.&quot;;}}}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330901861&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:1:&quot;7&quot;;s:6:&quot;source&quot;;s:6:&quot;node/4&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/1d498fa2-d3e4-5754-9160-757d219e8032&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:2;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;13&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:25:&quot;Review and revise patches&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;b4e32ad8-5960-9da4-252a-e1117aee761d&quot;;s:3:&quot;nid&quot;;s:2:&quot;13&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903312&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903312&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;32c03c97-5fd5-c5d4-497c-9c54a309d557&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903312&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:36:&quot;This lesson has not been written yet&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:44:&quot;&lt;p&gt;This lesson has not been written yet&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903312&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;16&quot;;s:6:&quot;source&quot;;s:7:&quot;node/13&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/32c03c97-5fd5-c5d4-497c-9c54a309d557&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:3;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;10&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:51:&quot;Join an issue team to work on an issue in the queue&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;4ca51bb6-838d-75b4-3552-9dcc3e7748c3&quot;;s:3:&quot;nid&quot;;s:2:&quot;10&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903142&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903169&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;683e80f8-11b8-2f64-b985-a97d436c664e&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903169&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:197:&quot;This lesson has not been written yet.

Here\'s a link to the Boston Initiative issue teams:
https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&amp;hl=en_US#gid=0&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:307:&quot;&lt;p&gt;This lesson has not been written yet.&lt;/p&gt;
&lt;p&gt;Here\'s a link to the Boston Initiative issue teams:&lt;br /&gt;&lt;a href=&quot;https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&amp;amp;hl=en_US#gid=0&quot;&gt;https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ...&lt;/a&gt;&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903142&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;13&quot;;s:6:&quot;source&quot;;s:7:&quot;node/10&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/683e80f8-11b8-2f64-b985-a97d436c664e&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:4;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;7&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:13:&quot;Write a patch&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;33722653-ca74-b304-711a-2d5a4154ab08&quot;;s:3:&quot;nid&quot;;s:1:&quot;7&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330902500&quot;;s:7:&quot;changed&quot;;s:10:&quot;1331048869&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;72a836e6-b408-a7a4-1923-8788761b2608&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1331048869&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:3454:&quot;&lt;h3&gt;How To:&lt;/h3&gt;
&lt;ol&gt;
&lt;li&gt;Go to your issue on drupal.org. (If you have not already created an issue to work on, please do so by following the steps here.)&lt;/li&gt;
&lt;li&gt;Create a branch for development:&lt;br /&gt;
&lt;pre&gt;
# Go to Drupal 8 sandbox.
cd path/to/drupal-8/sandbox
		
# Check what branch you\\\'¬Ä¬ôre in. 
git branch 
		
# Create a branch where you will work on your patch.
git branch [issue-number]-rewrite-description-for-url-alias

# Now check out the branch you just created.
git checkout [issue-number]-rewrite-description-for-url-alias

# Confirm you\\\'¬Ä¬ôre on the branch you just created like this
# (that is currently checked out is indicated with an asterisk):
git branch
&lt;/pre&gt;
&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;Now make your edits. Open path.module (that is my-sandbox/core/modules/path/path.module) with your favorite text editor. Go to line 139. Then replace this:&lt;/p&gt;
&lt;blockquote&gt;Optionally specify an alternative URL by which this content can be accessed. For example, type &quot;about&quot; when writing an about ||      page. Use a relative path and don\\\\\\\'t add a trailing slash or the URL alias won\\\'t work.&lt;/blockquote&gt;
&lt;p&gt;with this:&lt;/p&gt;
&lt;blockquote&gt;The alternative URL for this content. Use a relative path without a trailing slash. For example, type &quot;about&quot; for the about page.&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;
In your browser, go to node/add/article to confirm your edit worked, and to confirm you didn\\\'¬Ä¬ôt accidentally introduce an error.
&lt;/li&gt;
&lt;li&gt;Take a screen shot. Using your screenshot program, call out out the changed text with an arrow or highlight. (You will upload this along with your patch.)&lt;/li&gt;
&lt;li&gt;Review your changes with Git:&lt;br /&gt;
&lt;pre&gt;
# Review a standard diff.
git diff

# You can also review your changes word-by-word.
git diff --word-diff

# See which files have changes pending.
git status

# If you made a mistake, you can undo all of your changes like this:
git reset --hard
&lt;/pre&gt;
&lt;/li&gt;
&lt;li&gt;
Commit your changes on your local development branch:&lt;br /&gt;
&lt;pre&gt;
# Commit your changes
git commit -am &quot;¬Ä¬úIssue [issue-number]. Updated description for URL alias on node form.\\\'¬Ä&quot;

# You can review your changes like this:
git log
git show

# Or
git show [commit ID]
&lt;/pre&gt;
&lt;/li&gt;
&lt;li&gt;
Create a patch:&lt;br /&gt;
&lt;pre&gt;
# Generate a patch file that would apply the changes from your 
# development branch to 8.x.
git diff 8.x &gt; [issue-number]-description-of-issue-[comment-number].patch
&lt;/pre&gt;
&lt;/li&gt;
&lt;li&gt;
Post a comment on the issue and upload your patch and screenshot.
&lt;/li&gt;
&lt;li&gt;
Now wait for the testbot to test your patch. If your patch turns green, the patch applied cleanly and passed Drupal\\\'¬Ä¬ôs tests. Now if your patch passes tests by other members of the community, it can be committed. If your patch turns red, tests failed. Click the link for View details to see what\\\'¬Ä¬ôs going wrong, then re-write and re-submit your patch.
&lt;/li&gt;
&lt;li&gt;
Bonus: Change the word ¬Ä¬útype\\\'¬Ä¬ù to \\\'¬Ä¬úenter\\\'¬Ä¬ù and re-roll the patch. This is what they did before committing the real patch to this issue, http://drupal.org/node/1326088#comment-5188202. 
&lt;br /&gt;&lt;pre&gt;
# Checkout your development branch.
git checkout my-branch

# (Make your edits.)

# Commit.
git commit -am \\\'&quot;Issue [issue-number]. [Description].\\\'¬Ä&quot;

# Re-roll patch.
git diff 8.x &gt; [issue-number]-[description]-[comment-number].patch
&lt;/pre&gt;
&lt;/li&gt;
&lt;/ol&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:3555:&quot;&lt;p&gt;How To:&lt;/p&gt;
&lt;ol&gt;&lt;li&gt;Go to your issue on drupal.org. (If you have not already created an issue to work on, please do so by following the steps here.)&lt;/li&gt;
&lt;li&gt;Create a branch for development:
&lt;p&gt;# Go to Drupal 8 sandbox.&lt;br /&gt;
cd path/to/drupal-8/sandbox&lt;/p&gt;
&lt;p&gt;# Check what branch you\\\'¬Ä¬ôre in.&lt;br /&gt;
git branch &lt;/p&gt;
&lt;p&gt;# Create a branch where you will work on your patch.&lt;br /&gt;
git branch [issue-number]-rewrite-description-for-url-alias&lt;/p&gt;
&lt;p&gt;# Now check out the branch you just created.&lt;br /&gt;
git checkout [issue-number]-rewrite-description-for-url-alias&lt;/p&gt;
&lt;p&gt;# Confirm you\\\'¬Ä¬ôre on the branch you just created like this&lt;br /&gt;
# (that is currently checked out is indicated with an asterisk):&lt;br /&gt;
git branch&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
Now make your edits. Open path.module (that is my-sandbox/core/modules/path/path.module) with your favorite text editor. Go to line 139. Then replace this:
&lt;blockquote&gt;&lt;p&gt;Optionally specify an alternative URL by which this content can be accessed. For example, type &quot;about&quot; when writing an about ||      page. Use a relative path and don\\\\\\\'t add a trailing slash or the URL alias won\\\'t work.&lt;/p&gt;&lt;/blockquote&gt;
&lt;p&gt;with this:&lt;/p&gt;
&lt;blockquote&gt;&lt;p&gt;The alternative URL for this content. Use a relative path without a trailing slash. For example, type &quot;about&quot; for the about page.&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;
In your browser, go to node/add/article to confirm your edit worked, and to confirm you didn\\\'¬Ä¬ôt accidentally introduce an error.
&lt;/li&gt;
&lt;li&gt;Take a screen shot. Using your screenshot program, call out out the changed text with an arrow or highlight. (You will upload this along with your patch.)&lt;/li&gt;
&lt;li&gt;Review your changes with Git:
&lt;p&gt;# Review a standard diff.&lt;br /&gt;
git diff&lt;/p&gt;
&lt;p&gt;# You can also review your changes word-by-word.&lt;br /&gt;
git diff --word-diff&lt;/p&gt;
&lt;p&gt;# See which files have changes pending.&lt;br /&gt;
git status&lt;/p&gt;
&lt;p&gt;# If you made a mistake, you can undo all of your changes like this:&lt;br /&gt;
git reset --hard&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
Commit your changes on your local development branch:
&lt;p&gt;# Commit your changes&lt;br /&gt;
git commit -am &quot;¬Ä¬úIssue [issue-number]. Updated description for URL alias on node form.\\\'¬Ä&quot;&lt;/p&gt;
&lt;p&gt;# You can review your changes like this:&lt;br /&gt;
git log&lt;br /&gt;
git show&lt;/p&gt;
&lt;p&gt;# Or&lt;br /&gt;
git show [commit ID]&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
Create a patch:
&lt;p&gt;# Generate a patch file that would apply the changes from your&lt;br /&gt;
# development branch to 8.x.&lt;br /&gt;
git diff 8.x &amp;gt; [issue-number]-description-of-issue-[comment-number].patch&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
Post a comment on the issue and upload your patch and screenshot.
&lt;/li&gt;
&lt;li&gt;
Now wait for the testbot to test your patch. If your patch turns green, the patch applied cleanly and passed Drupal\\\'¬Ä¬ôs tests. Now if your patch passes tests by other members of the community, it can be committed. If your patch turns red, tests failed. Click the link for View details to see what\\\'¬Ä¬ôs going wrong, then re-write and re-submit your patch.
&lt;/li&gt;
&lt;li&gt;
Bonus: Change the word ¬Ä¬útype\\\'¬Ä¬ù to \\\'¬Ä¬úenter\\\'¬Ä¬ù and re-roll the patch. This is what they did before committing the real patch to this issue, &lt;a href=&quot;http://drupal.org/node/1326088#comment-5188202&quot;&gt;http://drupal.org/node/1326088#comment-5188202&lt;/a&gt;. 
&lt;p&gt;# Checkout your development branch.&lt;br /&gt;
git checkout my-branch&lt;/p&gt;
&lt;p&gt;# (Make your edits.)&lt;/p&gt;
&lt;p&gt;# Commit.&lt;br /&gt;
git commit -am \\\'&quot;Issue [issue-number]. [Description].\\\'¬Ä&quot;&lt;/p&gt;
&lt;p&gt;# Re-roll patch.&lt;br /&gt;
git diff 8.x &amp;gt; [issue-number]-[description]-[comment-number].patch&lt;/p&gt;
&lt;/li&gt;
&lt;/ol&gt;&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:1:{s:3:&quot;und&quot;;a:3:{i:0;a:1:{s:5:&quot;value&quot;;s:1:&quot;6&quot;;}i:1;a:1:{s:5:&quot;value&quot;;s:1:&quot;7&quot;;}i:2;a:1:{s:5:&quot;value&quot;;s:1:&quot;8&quot;;}}}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;core&quot;;}}}s:17:&quot;field_lesson_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;code&quot;;}}}s:26:&quot;field_lesson_prerequisites&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:893:&quot;&lt;ul&gt;
&lt;li&gt;Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Fdrupal.org%2Fproject%2F1388780%2Fgit-instructions&amp;sa=D&amp;sntz=1&amp;usg=AFQjCNFHMNt1JSCypDoRJKlZKSW-WYFtIQ&quot;&gt;here&lt;/a&gt;&lt;/li&gt;
&lt;li&gt;Install Git&lt;/li&gt;
&lt;li&gt;Basic Git knowledge is helpful but not required (&lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Flearn.github.com%2Fp%2Fintro.html&amp;sa=D&amp;sntz=1&amp;usg=AFQjCNFe2AAGYVRDtEH9GpM1h_pAmHJ6rg&quot;&gt;Intro to Git&lt;/a&gt;, &lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Fgitref.org%2F&amp;sa=D&amp;sntz=1&amp;usg=AFQjCNFaMYTP9sF9yJH1dZ-yNSqdhXmTGA&quot;&gt;Git Reference&lt;/a&gt;)&lt;/li&gt;
&lt;li&gt;You need a way to capture screen shots, popular options include: &lt;a href=&quot;http://skitch.com/&quot; title=&quot;Skitch&quot;&gt;Skitch&lt;/a&gt;, &lt;a href=&quot;http://jing.com/&quot; title=&quot;Jing&quot;&gt;Jing&lt;/a&gt;, or &lt;a href=&quot;http://awesomescreenshot.com/&quot; title=&quot;Awesome Screenshot&quot;&gt;Awesome Screenshot&lt;/a&gt;&lt;/li&gt;
&lt;/ul&gt;
&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:921:&quot;&lt;ul&gt;&lt;li&gt;Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Fdrupal.org%2Fproject%2F1388780%2Fgit-instructions&amp;amp;sa=D&amp;amp;sntz=1&amp;amp;usg=AFQjCNFHMNt1JSCypDoRJKlZKSW-WYFtIQ&quot;&gt;here&lt;/a&gt;&lt;/li&gt;
&lt;li&gt;Install Git&lt;/li&gt;
&lt;li&gt;Basic Git knowledge is helpful but not required (&lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Flearn.github.com%2Fp%2Fintro.html&amp;amp;sa=D&amp;amp;sntz=1&amp;amp;usg=AFQjCNFe2AAGYVRDtEH9GpM1h_pAmHJ6rg&quot;&gt;Intro to Git&lt;/a&gt;, &lt;a href=&quot;http://www.google.com/url?q=http%3A%2F%2Fgitref.org%2F&amp;amp;sa=D&amp;amp;sntz=1&amp;amp;usg=AFQjCNFaMYTP9sF9yJH1dZ-yNSqdhXmTGA&quot;&gt;Git Reference&lt;/a&gt;)&lt;/li&gt;
&lt;li&gt;You need a way to capture screen shots, popular options include: &lt;a href=&quot;http://skitch.com/&quot; title=&quot;Skitch&quot;&gt;Skitch&lt;/a&gt;, &lt;a href=&quot;http://jing.com/&quot; title=&quot;Jing&quot;&gt;Jing&lt;/a&gt;, or &lt;a href=&quot;http://awesomescreenshot.com/&quot; title=&quot;Awesome Screenshot&quot;&gt;Awesome Screenshot&lt;/a&gt;&lt;/li&gt;
&lt;/ul&gt;&quot;;}}}s:21:&quot;field_lesson_overview&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:307:&quot;&lt;p&gt;In this exercise you will create a patch to resolve the issue created in the previous exercise. Then you will post this patch along with before and after screen shots as a proposed solution to the issue.&lt;/p&gt;
&lt;p&gt;Currently, this tutorial only has instructions for working with Git on the command line.&lt;/p&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:306:&quot;&lt;p&gt;In this exercise you will create a patch to resolve the issue created in the previous exercise. Then you will post this patch along with before and after screen shots as a proposed solution to the issue.&lt;br /&gt;
Currently, this tutorial only has instructions for working with Git on the command line.&lt;/p&gt;
&quot;;}}}s:24:&quot;field_lesson_description&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:58:&quot;Learn to submit suggested changes to Drupal as patch files&quot;;s:6:&quot;format&quot;;N;s:10:&quot;safe_value&quot;;s:58:&quot;Learn to submit suggested changes to Drupal as patch files&quot;;}}}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330902500&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;10&quot;;s:6:&quot;source&quot;;s:6:&quot;node/7&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/72a836e6-b408-a7a4-1923-8788761b2608&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:5;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;9&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:22:&quot;Install Drupal locally&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;33caf55c-b4c3-c8d4-8128-89c7138228a1&quot;;s:3:&quot;nid&quot;;s:1:&quot;9&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903063&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903063&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;8daa1222-481d-fc54-a9bf-9d9ccc1ae702&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903063&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:164:&quot;This lesson has not been written yet. There\'s some material to pull from here:
https://docs.google.com/document/d/1Tp-4l0ZCMkwIwmuPsHen_HqZ5Ua2Fq71nJmevfvAH7o/edit&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:266:&quot;&lt;p&gt;This lesson has not been written yet. There\'s some material to pull from here:&lt;br /&gt;&lt;a href=&quot;https://docs.google.com/document/d/1Tp-4l0ZCMkwIwmuPsHen_HqZ5Ua2Fq71nJmevfvAH7o/edit&quot;&gt;https://docs.google.com/document/d/1Tp-4l0ZCMkwIwmuPsHen_HqZ5Ua2Fq71nJme...&lt;/a&gt;&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903063&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;12&quot;;s:6:&quot;source&quot;;s:6:&quot;node/9&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/8daa1222-481d-fc54-a9bf-9d9ccc1ae702&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:6;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;11&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:53:&quot;Create an issue team to work on an issue in the queue&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;19f4ef50-2371-2b44-ed0b-7eee0fdcd306&quot;;s:3:&quot;nid&quot;;s:2:&quot;11&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903214&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903214&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;91729e89-5c3a-8e44-bd90-38b1124fc4d1&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903214&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:203:&quot;This lesson has not been written yet.

Here\'s a link to the Boston Initiative issue spreadsheet:
https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&amp;hl=en_US#gid=0&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:313:&quot;&lt;p&gt;This lesson has not been written yet.&lt;/p&gt;
&lt;p&gt;Here\'s a link to the Boston Initiative issue spreadsheet:&lt;br /&gt;&lt;a href=&quot;https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ5b1VncGl4NXFiM0E&amp;amp;hl=en_US#gid=0&quot;&gt;https://docs.google.com/spreadsheet/ccc?key=0AjEp9HDGLykIdEJkOTAzREdLbDZ...&lt;/a&gt;&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903214&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;14&quot;;s:6:&quot;source&quot;;s:7:&quot;node/11&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/91729e89-5c3a-8e44-bd90-38b1124fc4d1&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:7;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;6&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:12:&quot;Test patches&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;99fb4e2d-607b-e7a4-2d00-b0ed230066ac&quot;;s:3:&quot;nid&quot;;s:1:&quot;6&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330902368&quot;;s:7:&quot;changed&quot;;s:10:&quot;1331048853&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;93887717-c398-2434-394c-cf10851b4f1c&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1331048853&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:3626:&quot;&lt;h3&gt;How To:&lt;/h3&gt;
&lt;ol&gt;
	&lt;li&gt;(Optional) Open a terminal. Do this to make Git pretty: &lt;br&gt;
	#Note: You\\\'ll only have to do this once.  You\\\'ll never have to do it again.
		&lt;ul&gt;
			&lt;li&gt;git config --global color.status auto &lt;/li&gt;
			&lt;li&gt;git config --global color.branch auto &lt;/li&gt;
			&lt;li&gt;git config --global color.interactive auto &lt;/li&gt;
			&lt;li&gt;git config --global color.diff auto &lt;/li&gt;
		&lt;/ul&gt;
	&lt;/li&gt;
	&lt;li&gt;Do this on the command line: &lt;br&gt;
		&lt;ul&gt;
			&lt;li&gt; 
				&lt;p&gt;# Go to Drupal 8 sandbox. &lt;/p&gt;
					&lt;p&gt;cd path/to/drupal-8/sandbox &lt;/p&gt;
			&lt;/li&gt;
			&lt;li&gt;
				&lt;p&gt;# Check what branch you‚Äôre on. &lt;/p&gt; 
					&lt;p&gt;git branch&lt;/p&gt; 
			&lt;/li&gt;
			&lt;li&gt;
				&lt;p&gt;# If you‚Äôre not on branch 8.x (indicated with an asterisk * ), checkout 8.x. &lt;/p&gt;
					&lt;p&gt;git checkout 8.x &lt;/p&gt;
			&lt;/li&gt;
		&lt;/ul&gt;
	&lt;/li&gt;
	&lt;li&gt;In your browser, go to &lt;a href=&quot;http://my-sandbox.com/node/add/article&quot;&gt;http://my-sandbox.com/node/add/article&lt;/a&gt; and 
	verify you can see the bug described in your issue post. 
	(	If you skipped the previous step, see http://drupal.org/node/1388832.)&lt;/li&gt;
	&lt;li&gt;Download this patch, &lt;a href=&quot;http://drupal.org/files/1326088-urlalias-desc-rerolled-enter-4.patch&quot;&gt;http://drupal.org/files/1326088-urlalias-desc-rerolled-enter-4.patch&lt;/a&gt;.&lt;/li&gt;
	&lt;li&gt;Do this:
		&lt;ul&gt;
			&lt;li&gt;
				&lt;p&gt;# Apply the patch &lt;/p&gt;
				&lt;ul&gt;&lt;li&gt;git apply path/to/1326088-urlalias-desc-rerolled-enter-4.patch&lt;/li&gt;&lt;/ul&gt;
			&lt;/li&gt;

			&lt;li&gt;&lt;p&gt;# If you‚Äôre curious, you can see the changes applied by the patch like this: &lt;/p&gt;
				&lt;ul&gt;&lt;li&gt;git diff&lt;/li&gt;&lt;/ul&gt;
			&lt;/li&gt;
		&lt;/ul&gt;
	&lt;/li&gt;
	&lt;li&gt;Now refresh the page open in your browser and confirm the issue has been resolved.&lt;/li&gt;
	&lt;li&gt;If you were working on a real issue, you would now post a comment saying you have applied and tested the patch and it works.&lt;/li&gt;
	&lt;li&gt;
		&lt;p&gt;Now that we‚Äôre done testing, undo the changes applied by the patch. &lt;/p&gt;
			&lt;ul&gt;&lt;li&gt;git reset --hard&lt;/li&gt;&lt;/ul&gt;
	&lt;/li&gt;
&lt;/ol&gt;
&lt;h3&gt;Tips for testing more complex patches:&lt;/h3&gt;
&lt;ol&gt;
	&lt;li&gt;If your patch applies cleanly, but doesn‚Äôt seem to work, try clearing your cache.&lt;/li&gt;
	&lt;li&gt;
		&lt;p&gt;If clearing the cache doesn‚Äôt work, check to see if the patch you applied requires database updates.
		Database updates live in .install files. Do this to see the files modified by the patch: &lt;/p&gt;
			&lt;ul&gt;
			&lt;li&gt;git show --stat &lt;/li&gt;
			&lt;/ul&gt;
		&lt;p&gt;Git should display a list like &lt;a href=&quot;https://skitch.com/bryan.hirsch/f7u26/terminal-less-106x16%20&quot;&gt;this&lt;/a&gt;. 
		If an .install file was modified, run update.php by going to http://my.test.site/update.php&lt;/p&gt;
	&lt;/li&gt;
	&lt;li&gt;
		&lt;p&gt;If you want to save a copy of your patched version of Drupal 
		to continue working on this issue later, create a new branch and then save, 
		or ‚Äúcommit‚Äù, the changes there. Do this after applying the patch: &lt;/p&gt;
			&lt;ul&gt;
			&lt;li&gt;git checkout -b [issue-number]-[description] &lt;/li&gt;
			&lt;li&gt;git commit -m ‚ÄúApplying [patchname.patch] from &lt;/li&gt;
			&lt;li&gt;http://drupal.org/node/[issue-number]-[comment-number]‚Äù &lt;/li&gt;
				&lt;li&gt;To see your branches do this: &lt;br&gt;
				&lt;p&gt;git branch&lt;/p&gt;&lt;/li&gt;
			&lt;/ul&gt;
	&lt;/li&gt;
	&lt;li&gt;
		&lt;p&gt;Now you can switch back and forth between Drupal‚Äôs development branch (e.g. 7.x-dev), stable releases (e.g. tag 7.8), 
		and your own patched branch like this: &lt;/p&gt;
				&lt;ul&gt;
				&lt;li&gt;git branch 		# Show available branches&lt;/li&gt; 
				&lt;li&gt;git checkout 7.x  	# Check out out branch 7.x&lt;/li&gt;
				&lt;li&gt;git checkout 7.8	# Check out the stable release tagged version 7.8 &lt;/li&gt;
				&lt;li&gt;git checkout [name]	# Check out your own branch&lt;/li&gt;
				&lt;/ul&gt;
	&lt;/li&gt;
&lt;/ol&gt;&quot;;s:6:&quot;format&quot;;s:9:&quot;full_html&quot;;s:10:&quot;safe_value&quot;;s:3548:&quot;&lt;h3&gt;How To:&lt;/h3&gt;
&lt;ol&gt;&lt;li&gt;(Optional) Open a terminal. Do this to make Git pretty: &lt;br /&gt;&lt;br /&gt;
	#Note: You\\\'ll only have to do this once.  You\\\'ll never have to do it again.
&lt;ul&gt;&lt;li&gt;git config --global color.status auto &lt;/li&gt;
&lt;li&gt;git config --global color.branch auto &lt;/li&gt;
&lt;li&gt;git config --global color.interactive auto &lt;/li&gt;
&lt;li&gt;git config --global color.diff auto &lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;Do this on the command line: &lt;br /&gt;&lt;ul&gt;&lt;li&gt;
&lt;p&gt;# Go to Drupal 8 sandbox. &lt;/p&gt;
&lt;p&gt;cd path/to/drupal-8/sandbox &lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;# Check what branch you‚Äôre on. &lt;/p&gt;
&lt;p&gt;git branch&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;# If you‚Äôre not on branch 8.x (indicated with an asterisk * ), checkout 8.x. &lt;/p&gt;
&lt;p&gt;git checkout 8.x &lt;/p&gt;
&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;In your browser, go to &lt;a href=&quot;http://my-sandbox.com/node/add/article&quot;&gt;http://my-sandbox.com/node/add/article&lt;/a&gt; and&lt;br /&gt;
	verify you can see the bug described in your issue post.&lt;br /&gt;
	(	If you skipped the previous step, see &lt;a href=&quot;http://drupal.org/node/1388832&quot;&gt;http://drupal.org/node/1388832&lt;/a&gt;.)&lt;/li&gt;
&lt;li&gt;Download this patch, &lt;a href=&quot;http://drupal.org/files/1326088-urlalias-desc-rerolled-enter-4.patch&quot;&gt;http://drupal.org/files/1326088-urlalias-desc-rerolled-enter-4.patch&lt;/a&gt;.&lt;/li&gt;
&lt;li&gt;Do this:
&lt;ul&gt;&lt;li&gt;
&lt;p&gt;# Apply the patch &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git apply path/to/1326088-urlalias-desc-rerolled-enter-4.patch&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;# If you‚Äôre curious, you can see the changes applied by the patch like this: &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git diff&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;Now refresh the page open in your browser and confirm the issue has been resolved.&lt;/li&gt;
&lt;li&gt;If you were working on a real issue, you would now post a comment saying you have applied and tested the patch and it works.&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;Now that we‚Äôre done testing, undo the changes applied by the patch. &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git reset --hard&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;/ol&gt;&lt;h3&gt;Tips for testing more complex patches:&lt;/h3&gt;
&lt;ol&gt;&lt;li&gt;If your patch applies cleanly, but doesn‚Äôt seem to work, try clearing your cache.&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;If clearing the cache doesn‚Äôt work, check to see if the patch you applied requires database updates.&lt;br /&gt;
		Database updates live in .install files. Do this to see the files modified by the patch: &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git show --stat &lt;/li&gt;
&lt;/ul&gt;&lt;p&gt;Git should display a list like &lt;a href=&quot;https://skitch.com/bryan.hirsch/f7u26/terminal-less-106x16%20&quot;&gt;this&lt;/a&gt;.&lt;br /&gt;
		If an .install file was modified, run update.php by going to &lt;a href=&quot;http://my.test.site/update.php&quot;&gt;http://my.test.site/update.php&lt;/a&gt;&lt;/p&gt;
&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;If you want to save a copy of your patched version of Drupal&lt;br /&gt;
		to continue working on this issue later, create a new branch and then save,&lt;br /&gt;
		or ‚Äúcommit‚Äù, the changes there. Do this after applying the patch: &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git checkout -b [issue-number]-[description] &lt;/li&gt;
&lt;li&gt;git commit -m ‚ÄúApplying [patchname.patch] from &lt;/li&gt;
&lt;li&gt;&lt;a href=&quot;http://drupal.org/node/[issue-number]-[comment-number]&quot;&gt;http://drupal.org/node/[issue-number]-[comment-number]&lt;/a&gt;‚Äù &lt;/li&gt;
&lt;li&gt;To see your branches do this: &lt;br /&gt;&lt;p&gt;git branch&lt;/p&gt;
&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;li&gt;
&lt;p&gt;Now you can switch back and forth between Drupal‚Äôs development branch (e.g. 7.x-dev), stable releases (e.g. tag 7.8),&lt;br /&gt;
		and your own patched branch like this: &lt;/p&gt;
&lt;ul&gt;&lt;li&gt;git branch 		# Show available branches&lt;/li&gt;
&lt;li&gt;git checkout 7.x  	# Check out out branch 7.x&lt;/li&gt;
&lt;li&gt;git checkout 7.8	# Check out the stable release tagged version 7.8 &lt;/li&gt;
&lt;li&gt;git checkout [name]	# Check out your own branch&lt;/li&gt;
&lt;/ul&gt;&lt;/li&gt;
&lt;/ol&gt;&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;core&quot;;}}}s:17:&quot;field_lesson_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;code&quot;;}}}s:26:&quot;field_lesson_prerequisites&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:483:&quot;&lt;ul&gt;
&lt;li&gt;Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://drupal.org/project/1388780/git-instructions&quot; target=&quot;_blank&quot;&gt;here&lt;/a&gt;.&lt;/li&gt;
	&lt;ul&gt;&lt;li&gt;#Note - When you click this link, you will be presented with 3 lines comprised of 2 git commands. 
		The first 2 lines are the first git command overflowing onto the second line. &lt;/li&gt;&lt;/ul&gt;
&lt;li&gt;Git installed on your computer (if you don‚Äôt know Git, that‚Äôs okay, just install it)&lt;/li&gt;
&lt;/ul&gt;
&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:479:&quot;&lt;ul&gt;&lt;li&gt;Download and install Drupal 8 from the Boston Initiative sandbox &lt;a href=&quot;http://drupal.org/project/1388780/git-instructions&quot; target=&quot;_blank&quot;&gt;here&lt;/a&gt;.&lt;/li&gt;
&lt;ul&gt;&lt;li&gt;#Note - When you click this link, you will be presented with 3 lines comprised of 2 git commands.&lt;br /&gt;
		The first 2 lines are the first git command overflowing onto the second line. &lt;/li&gt;
&lt;/ul&gt;&lt;li&gt;Git installed on your computer (if you don‚Äôt know Git, that‚Äôs okay, just install it)&lt;/li&gt;
&lt;/ul&gt;&quot;;}}}s:21:&quot;field_lesson_overview&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:592:&quot;&lt;p&gt;In this exercise you will apply a patch that resolves the issue described in the &lt;a href=&quot;/lessons/create_issues&quot; target=&quot;_blank&quot;&gt;previous exercise&lt;/a&gt;. &lt;/p&gt;
&lt;p&gt;Before patches get committed they must be reviewed and tested by members of the community. Testing patches is an easy way to help project maintainers resolve issues in the queue. And it doesn‚Äôt require writing any code. You just need to understand the problem and know if it is resolved after the patch has been applied.&lt;/p&gt;
&lt;p&gt;Currently, this tutorial only has instructions for working with Git on the command line.&lt;/p&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:588:&quot;&lt;p&gt;In this exercise you will apply a patch that resolves the issue described in the &lt;a href=&quot;/lessons/create_issues&quot; target=&quot;_blank&quot;&gt;previous exercise&lt;/a&gt;.&lt;br /&gt;
Before patches get committed they must be reviewed and tested by members of the community. Testing patches is an easy way to help project maintainers resolve issues in the queue. And it doesn‚Äôt require writing any code. You just need to understand the problem and know if it is resolved after the patch has been applied.&lt;br /&gt;
Currently, this tutorial only has instructions for working with Git on the command line.&lt;/p&gt;
&quot;;}}}s:24:&quot;field_lesson_description&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:64:&quot;Test patches submitted to drupal.org for issues awaiting review.&quot;;s:6:&quot;format&quot;;N;s:10:&quot;safe_value&quot;;s:64:&quot;Test patches submitted to drupal.org for issues awaiting review.&quot;;}}}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330902368&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:1:&quot;9&quot;;s:6:&quot;source&quot;;s:6:&quot;node/6&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/93887717-c398-2434-394c-cf10851b4f1c&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:8;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;14&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:30:&quot;Help maintain a core component&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;30c8af7c-1cd0-7814-15c8-59e0eb4e1772&quot;;s:3:&quot;nid&quot;;s:2:&quot;14&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903325&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903325&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;a3f18dbc-46e3-22f4-fd82-8116c3c57bf8&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903325&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:36:&quot;This lesson has not been written yet&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:44:&quot;&lt;p&gt;This lesson has not been written yet&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903325&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;17&quot;;s:6:&quot;source&quot;;s:7:&quot;node/14&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/a3f18dbc-46e3-22f4-fd82-8116c3c57bf8&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:9;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:1:&quot;3&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:65:&quot;Re-roll patches to apply cleanly to the latest version of Drupal.&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;07502c8f-0905-e894-fd1c-dda90365b833&quot;;s:3:&quot;nid&quot;;s:1:&quot;3&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330900883&quot;;s:7:&quot;changed&quot;;s:10:&quot;1331048222&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;b93deb54-264f-19a4-49eb-db74bc6c2712&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1331048222&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:8529:&quot;&lt;p&gt;Before getting started, it helps to have a basic understanding of what weíre about to do with Git. Hereís a brief overview of whatís going on in Git during the patch re-rolling process.&lt;/p&gt;
&lt;p&gt;Every saved revision of a Git project is called a ìcommitî. Every commit in a projectís history has an ID number (Figure 1.1).&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.1.png&quot; /&gt;

&lt;p&gt;When a new Drupal release comes out the project is tagged with the release number, for example,7.4, 7.5, 7.6, 7.7. A tag is just an alias for a commit ID. It is a human readable name assigned to a specific revision of the project. (Figure 1.2).&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.2.png&quot; /&gt;

&lt;p&gt;Before re-rolling a patch, we will find a place in the projectís history where the patch applies cleanly. (Figure 1.3)&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.3.png&quot; /&gt;

&lt;p&gt;Next we will create a local working branch, or ìtopicî branch, based on a version of the project where our patch applies cleanly. (Figure 1.4)&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.4.png&quot; /&gt;

&lt;p&gt;Then we merge in more recent changes from branch 7.x to our working branch and resolve any conflicts that arise during the merge. (Figure 1.5)&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.5.png&quot; /&gt;

&lt;p&gt;Finally, we re-roll the patch by getting the diff between our local branch and Drupalís development branch. Then we save the new diff as a patch and post it on drupal.org. &lt;/p&gt;

&lt;p&gt;(Figure 1.6 shows all the previous diagrams combined into one, in case itís helpful for reference.)&lt;/p&gt;

&lt;img src=&quot;http://drupal.org/files/figure1.6.png&quot; /&gt;

&lt;h3&gt;How To:&lt;/h3&gt;
&lt;p&gt;(Note: Examples below were written using Drupal 7 as an example. For work on Drupal core, you should really be using Drupal 8. Just type 8.x instead of 7.x following the examples below.)&lt;/p&gt;
&lt;ol&gt;
&lt;li&gt;Go to the Drupal core issue queue and find patches that need to be reviewed by filtering the list of issues for ìneeds reviewî. (Example screen shot here.)&lt;/li&gt;
&lt;li&gt;Make sure youíre running the latest version of Drupal&lt;br/&gt;
&lt;blockquote&gt;&lt;code&gt;
	cd /path/to/drupal&lt;br/&gt;
	git pull&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;&lt;/li&gt;
&lt;li&gt;Find a patch that was created a while ago. Download and try to apply the patch. If it applies cleanly, test it, then go back to step 1. If Git reports errors when trying to apply the patch, the patch needs to be re-rolled.&lt;/li&gt;
&lt;li&gt;Next we need to get the patch to apply cleanly. Git checkout the version of Drupal the patch was created for. Note: Git will notify you that the checkout you are doing in this step puts Git in a ìdetached head state.î Detached head sounds  scary, but itís okay, this is what we want. (Example screenshot here.)
If the patch was written for a tagged release of Drupal, getting the patch to apply cleanly is easy. This should be all you have to do:
&lt;blockquote&gt;&lt;code&gt;
git checkout 7.4	 	# Replace 7.4 with your own release number.&lt;br /&gt;
		git apply -v /path/to/patch/example.patch&lt;br /&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;p&gt;If the patch was written for the development branch (7.x) and the author specifies a commit in Drupalís project history where the patch applies cleanly, do this:&lt;/p&gt;
&lt;blockquote&gt;&lt;code&gt;
		git checkout abcd1234	 	# Replace abcd1234 with the real commit ID.&lt;br/&gt;
		git apply -v /path/to/patch/example.patch&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;p&gt;If the patch was written for the development branch (7.x) and the author does not specify a commit in Drupalís project history where the patch applies cleanly, we have some detective work to do. First, find the date when the patch was posted on d.o. Then checkout a version of Drupal that would have been available when the patch was written by doing this: &lt;/p&gt;
&lt;blockquote&gt;&lt;code&gt;
git log --before=1/10/11      # Replace 1/10/11 with date patch was posted. &lt;br/&gt;
# If you want to show a shorter list, you can specify how many&lt;br/&gt;
# commits are displayed.&lt;br/&gt;
git log --before=1/10/11 -5&lt;br/&gt;
# You can also view a more condensed list like this:&lt;br/&gt;
git log --before=1/10/11 --pretty=oneline&lt;br/&gt;
git log --before=1/10/11 --pretty=oneline -5&lt;br/&gt;
&lt;br/&gt;
# Many terminals display Gitís log with Less. Press ìqî to exit Less.&lt;br/&gt;
# Now checkout a commit that was available at the time the patch was &lt;br/&gt;
# written and try applying the patch.&lt;br/&gt;
git checkout abcd1234	# Replace abcd1234 with a real commit ID.&lt;br/&gt;
git apply -v /path/to/example.patch&lt;br/&gt;
&lt;br/&gt;
# If the patch does not apply cleanly, &lt;br/&gt;
# checkout an older commit and try again.&lt;br/&gt;
git checkout efgh5678&lt;br/&gt;
git apply -v /path/to/example.patch&lt;br/&gt;
&lt;/code&gt;&lt;blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Once you get the patch to apply cleanly, create your own local working branch. 
&lt;blockquote&gt;&lt;code&gt;
# Create a new branch. Named [description]-[issue number]&lt;br/&gt;
# This branch begins at the commit you checked out and includes&lt;br/&gt;
# unsaved changes from the patch you applied.&lt;br/&gt;
git checkout -b example-12345&lt;br/&gt;
# Save the changes created by applying the patch.&lt;br/&gt;
git commit -am ìApplying patch example.patch from drupal.org/node/09876.î&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now merge all the commits from branch 7.x into your branch.
&lt;blockquote&gt;&lt;code&gt;
		git merge 7.x
&lt;/code&gt;&lt;/blockquote&gt;
&lt;p&gt;Git will report conflicts like this:&lt;/p&gt; 
&lt;blockquote&gt;&lt;code&gt;
Auto-merging includes/common.inc&lt;br/&gt;
CONFLICT (content): Merge conflict in includes/common.inc&lt;br/&gt;
Automatic merge failed; fix conflicts and then commit the result.&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Work through files with conflicts one-by-one. To see a list of files with outstanding conflicts do this (example):
&lt;blockquote&gt;&lt;code&gt;
		git diff --stat
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now open one of the files with conflicts, manually resolve the conflicts, and then remove all the lines that look like this:&lt;code&gt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;HEAD, =========, or &amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;7.x.&lt;/code&gt;
&lt;blockquote&gt;&lt;code&gt;

	  	&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt; HEAD&lt;br/&gt;
			[Your branchís version appears here.]&lt;br/&gt;
   		=======&lt;br/&gt;
			[7.xís version appears here.]&lt;br/&gt;
&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt; 7.x&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Stage your edits to be committed like this:
&lt;blockquote&gt;&lt;code&gt;
		git add path/to/fixed/file
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;See if there are any files with conflicts left to be fixed.
&lt;blockquote&gt;&lt;code&gt;
		git diff --stat
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;When all the files with conflicts have been fixed, save your work
&lt;blockquote&gt;&lt;code&gt;
		git commit -m ìResolving conflicts between 7.x and example.patchî
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now create a new patch:
&lt;blockquote&gt;&lt;code&gt;
		# Create a patch that will make branch 7.x like example-12345:&lt;br/&gt;
		git diff 7.x example-12345 &amp;gt; my-new.patch&lt;br/&gt;
		# If youíre on example-12345, this does the same thing:&lt;br/&gt;
	git diff 7.x &amp;gt; my-new.patch&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Test your patch on branch 7.x to make sure it works. Then reset to clean up branch 7x.
&lt;blockquote&gt;&lt;code&gt;
		git checkout 7.x&lt;br/&gt;
		git apply path/to/my-new.patch&lt;br/&gt;
		git reset --hard&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now upload your patch to drupal.org. As a courtesy. To the next person, please include a note to let them know where your patch applies cleanly. For example you can say something like: This patch applies cleanly at commit abcd1234.
&lt;/li&gt;
&lt;/ol&gt;
	
&lt;h3&gt;Tips:&lt;/h3&gt;
&lt;ol&gt;
&lt;li&gt;If you ever feel lost in Git, concerned about accidental changes, or want to start over for any reason, just do this:
&lt;blockquote&gt;&lt;code&gt;
		git checkout 7.x	# Checkout branch 7.x.&lt;br/&gt;
		git reset --hard		# Undo any uncommitted changes.&lt;br/&gt;
		git pull			# Sync your repository with the Git repo you cloned.&lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Git quick reference (more)
&lt;blockquote&gt;&lt;code&gt;
	git branch 		# See what branch your on now, indicated by * &lt;br/&gt;
	git checkout 7.x		# Switch to branch 7.x	&lt;br/&gt;
	git checkout 7.4		# Checkout Drupal release version 7.4&lt;br/&gt;
	git checkout abcd1234   # Checkout the code base at commit ID abcd1234 &lt;br/&gt;
	git checkout -b example # Create a new branch called ìexampleî beginning with&lt;br/&gt;
    # the last commit in my current branch.&lt;br/&gt;
	git reset --hard		# Undo changes until the last commit.&lt;br/&gt;
	git log -3		# Show commit messages and IDs for the last three commits.&lt;br/&gt;
	git show abcd1234	# Show the message and diff for commit abcd1234&lt;br/&gt;
	git commit -am ìmessageî &lt;br/&gt;
&lt;/code&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;/ol&gt;&quot;;s:6:&quot;format&quot;;s:9:&quot;full_html&quot;;s:10:&quot;safe_value&quot;;s:9100:&quot;&lt;p&gt;Before getting started, it helps to have a basic understanding of what weíre about to do with Git. Hereís a brief overview of whatís going on in Git during the patch re-rolling process.&lt;/p&gt;
&lt;p&gt;Every saved revision of a Git project is called a ìcommitî. Every commit in a projectís history has an ID number (Figure 1.1).&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.1.png&quot; /&gt;&lt;/p&gt;
&lt;p&gt;When a new Drupal release comes out the project is tagged with the release number, for example,7.4, 7.5, 7.6, 7.7. A tag is just an alias for a commit ID. It is a human readable name assigned to a specific revision of the project. (Figure 1.2).&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.2.png&quot; /&gt;&lt;/p&gt;
&lt;p&gt;Before re-rolling a patch, we will find a place in the projectís history where the patch applies cleanly. (Figure 1.3)&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.3.png&quot; /&gt;&lt;/p&gt;
&lt;p&gt;Next we will create a local working branch, or ìtopicî branch, based on a version of the project where our patch applies cleanly. (Figure 1.4)&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.4.png&quot; /&gt;&lt;/p&gt;
&lt;p&gt;Then we merge in more recent changes from branch 7.x to our working branch and resolve any conflicts that arise during the merge. (Figure 1.5)&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.5.png&quot; /&gt;&lt;/p&gt;
&lt;p&gt;Finally, we re-roll the patch by getting the diff between our local branch and Drupalís development branch. Then we save the new diff as a patch and post it on drupal.org. &lt;/p&gt;
&lt;p&gt;(Figure 1.6 shows all the previous diagrams combined into one, in case itís helpful for reference.)&lt;/p&gt;
&lt;p&gt;&lt;img src=&quot;http://drupal.org/files/figure1.6.png&quot; /&gt;&lt;/p&gt;
&lt;h3&gt;How To:&lt;/h3&gt;
&lt;p&gt;(Note: Examples below were written using Drupal 7 as an example. For work on Drupal core, you should really be using Drupal 8. Just type 8.x instead of 7.x following the examples below.)&lt;/p&gt;
&lt;ol&gt;&lt;li&gt;Go to the Drupal core issue queue and find patches that need to be reviewed by filtering the list of issues for ìneeds reviewî. (Example screen shot here.)&lt;/li&gt;
&lt;li&gt;Make sure youíre running the latest version of Drupal&lt;br /&gt;&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
	cd /path/to/drupal&lt;br /&gt;&lt;br /&gt;
	git pull&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Find a patch that was created a while ago. Download and try to apply the patch. If it applies cleanly, test it, then go back to step 1. If Git reports errors when trying to apply the patch, the patch needs to be re-rolled.&lt;/li&gt;
&lt;li&gt;Next we need to get the patch to apply cleanly. Git checkout the version of Drupal the patch was created for. Note: Git will notify you that the checkout you are doing in this step puts Git in a ìdetached head state.î Detached head sounds  scary, but itís okay, this is what we want. (Example screenshot here.)&lt;br /&gt;
If the patch was written for a tagged release of Drupal, getting the patch to apply cleanly is easy. This should be all you have to do:
&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
git checkout 7.4	 	# Replace 7.4 with your own release number.&lt;br /&gt;
		git apply -v /path/to/patch/example.patch&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;p&gt;If the patch was written for the development branch (7.x) and the author specifies a commit in Drupalís project history where the patch applies cleanly, do this:&lt;/p&gt;
&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git checkout abcd1234	 	# Replace abcd1234 with the real commit ID.&lt;br /&gt;&lt;br /&gt;
		git apply -v /path/to/patch/example.patch&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;p&gt;If the patch was written for the development branch (7.x) and the author does not specify a commit in Drupalís project history where the patch applies cleanly, we have some detective work to do. First, find the date when the patch was posted on d.o. Then checkout a version of Drupal that would have been available when the patch was written by doing this: &lt;/p&gt;
&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
git log --before=1/10/11      # Replace 1/10/11 with date patch was posted. &lt;br /&gt;&lt;br /&gt;
# If you want to show a shorter list, you can specify how many&lt;br /&gt;&lt;br /&gt;
# commits are displayed.&lt;br /&gt;&lt;br /&gt;
git log --before=1/10/11 -5&lt;br /&gt;&lt;br /&gt;
# You can also view a more condensed list like this:&lt;br /&gt;&lt;br /&gt;
git log --before=1/10/11 --pretty=oneline&lt;br /&gt;&lt;br /&gt;
git log --before=1/10/11 --pretty=oneline -5&lt;br /&gt;&lt;br /&gt;&lt;br /&gt;&lt;br /&gt;
# Many terminals display Gitís log with Less. Press ìqî to exit Less.&lt;br /&gt;&lt;br /&gt;
# Now checkout a commit that was available at the time the patch was &lt;br /&gt;&lt;br /&gt;
# written and try applying the patch.&lt;br /&gt;&lt;br /&gt;
git checkout abcd1234	# Replace abcd1234 with a real commit ID.&lt;br /&gt;&lt;br /&gt;
git apply -v /path/to/example.patch&lt;br /&gt;&lt;br /&gt;&lt;br /&gt;&lt;br /&gt;
# If the patch does not apply cleanly, &lt;br /&gt;&lt;br /&gt;
# checkout an older commit and try again.&lt;br /&gt;&lt;br /&gt;
git checkout efgh5678&lt;br /&gt;&lt;br /&gt;
git apply -v /path/to/example.patch&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;br /&gt;&lt;/p&gt;&lt;blockquote&gt;
&lt;/blockquote&gt;&lt;/blockquote&gt;&lt;/li&gt;
&lt;li&gt;Once you get the patch to apply cleanly, create your own local working branch.&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
# Create a new branch. Named [description]-[issue number]&lt;br /&gt;&lt;br /&gt;
# This branch begins at the commit you checked out and includes&lt;br /&gt;&lt;br /&gt;
# unsaved changes from the patch you applied.&lt;br /&gt;&lt;br /&gt;
git checkout -b example-12345&lt;br /&gt;&lt;br /&gt;
# Save the changes created by applying the patch.&lt;br /&gt;&lt;br /&gt;
git commit -am ìApplying patch example.patch from drupal.org/node/09876.î&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now merge all the commits from branch 7.x into your branch.&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git merge 7.x&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;p&gt;Git will report conflicts like this:&lt;/p&gt;
&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
Auto-merging includes/common.inc&lt;br /&gt;&lt;br /&gt;
CONFLICT (content): Merge conflict in includes/common.inc&lt;br /&gt;&lt;br /&gt;
Automatic merge failed; fix conflicts and then commit the result.&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Work through files with conflicts one-by-one. To see a list of files with outstanding conflicts do this (example):&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git diff --stat&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now open one of the files with conflicts, manually resolve the conflicts, and then remove all the lines that look like this:&lt;code&gt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;HEAD, =========, or &amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;7.x.&lt;/code&gt;&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;/code&gt;&lt;/p&gt;
&lt;p&gt;	  	&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt;&amp;lt; HEAD&lt;br /&gt;&lt;br /&gt;
			[Your branchís version appears here.]&lt;br /&gt;&lt;br /&gt;
   		=======&lt;br /&gt;&lt;br /&gt;
			[7.xís version appears here.]&lt;br /&gt;&lt;br /&gt;
&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt;&amp;gt; 7.x&lt;br /&gt;&lt;br /&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Stage your edits to be committed like this:&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git add path/to/fixed/file&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;See if there are any files with conflicts left to be fixed.&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git diff --stat&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;When all the files with conflicts have been fixed, save your work&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git commit -m ìResolving conflicts between 7.x and example.patchî&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now create a new patch:&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		# Create a patch that will make branch 7.x like example-12345:&lt;br /&gt;&lt;br /&gt;
		git diff 7.x example-12345 &amp;gt; my-new.patch&lt;br /&gt;&lt;br /&gt;
		# If youíre on example-12345, this does the same thing:&lt;br /&gt;&lt;br /&gt;
	git diff 7.x &amp;gt; my-new.patch&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Test your patch on branch 7.x to make sure it works. Then reset to clean up branch 7x.&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git checkout 7.x&lt;br /&gt;&lt;br /&gt;
		git apply path/to/my-new.patch&lt;br /&gt;&lt;br /&gt;
		git reset --hard&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Now upload your patch to drupal.org. As a courtesy. To the next person, please include a note to let them know where your patch applies cleanly. For example you can say something like: This patch applies cleanly at commit abcd1234.
&lt;/li&gt;
&lt;/ol&gt;&lt;h3&gt;Tips:&lt;/h3&gt;
&lt;ol&gt;&lt;li&gt;If you ever feel lost in Git, concerned about accidental changes, or want to start over for any reason, just do this:&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
		git checkout 7.x	# Checkout branch 7.x.&lt;br /&gt;&lt;br /&gt;
		git reset --hard		# Undo any uncommitted changes.&lt;br /&gt;&lt;br /&gt;
		git pull			# Sync your repository with the Git repo you cloned.&lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;li&gt;Git quick reference (more)&lt;br /&gt;&lt;blockquote&gt;&lt;p&gt;&lt;code&gt;&lt;br /&gt;
	git branch 		# See what branch your on now, indicated by * &lt;br /&gt;&lt;br /&gt;
	git checkout 7.x		# Switch to branch 7.x	&lt;br /&gt;&lt;br /&gt;
	git checkout 7.4		# Checkout Drupal release version 7.4&lt;br /&gt;&lt;br /&gt;
	git checkout abcd1234   # Checkout the code base at commit ID abcd1234 &lt;br /&gt;&lt;br /&gt;
	git checkout -b example # Create a new branch called ìexampleî beginning with&lt;br /&gt;&lt;br /&gt;
    # the last commit in my current branch.&lt;br /&gt;&lt;br /&gt;
	git reset --hard		# Undo changes until the last commit.&lt;br /&gt;&lt;br /&gt;
	git log -3		# Show commit messages and IDs for the last three commits.&lt;br /&gt;&lt;br /&gt;
	git show abcd1234	# Show the message and diff for commit abcd1234&lt;br /&gt;&lt;br /&gt;
	git commit -am ìmessageî &lt;br /&gt;&lt;br /&gt;&lt;/code&gt;&lt;/p&gt;&lt;/blockquote&gt;
&lt;/li&gt;
&lt;/ol&gt;&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:1:{s:3:&quot;und&quot;;a:3:{i:0;a:1:{s:5:&quot;value&quot;;s:1:&quot;6&quot;;}i:1;a:1:{s:5:&quot;value&quot;;s:1:&quot;7&quot;;}i:2;a:1:{s:5:&quot;value&quot;;s:1:&quot;8&quot;;}}}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:5:&quot;other&quot;;}}}s:17:&quot;field_lesson_type&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:1:{s:5:&quot;value&quot;;s:4:&quot;code&quot;;}}}s:26:&quot;field_lesson_prerequisites&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:555:&quot;&lt;ul&gt;
&lt;li&gt;Git checkout of Drupal 8 code base. (&lt;a href=&quot;http://drupal.org/project/drupal/git-instructions&quot;&gt;instructions&lt;/a&gt;)&lt;/li&gt;
&lt;li&gt;Know how to and &lt;a href=&quot;https://docs.google.com/document/d/1RdN-sIb2lvohxFbo2VTFtI-Gs38XHdpDsJBgk7oNzug/edit?hl=en_US&quot;&gt;apply and test patches&lt;/a&gt;.&lt;/li&gt;
&lt;li&gt;(Helpful but not required) Knowledge of Git &lt;a href=&quot;http://learn.github.com/p/branching.html&quot;&gt;branching and merging&lt;/a&gt;, &lt;a href=&quot;http://learn.github.com/p/tagging.html&quot;&gt;tagging&lt;/a&gt; and &lt;a href=&quot;http://learn.github.com/p/rebasing.html&quot;&gt;rebasing&lt;/a&gt;.&lt;/li&gt;
&lt;/ul&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:550:&quot;&lt;ul&gt;&lt;li&gt;Git checkout of Drupal 8 code base. (&lt;a href=&quot;http://drupal.org/project/drupal/git-instructions&quot;&gt;instructions&lt;/a&gt;)&lt;/li&gt;
&lt;li&gt;Know how to and &lt;a href=&quot;https://docs.google.com/document/d/1RdN-sIb2lvohxFbo2VTFtI-Gs38XHdpDsJBgk7oNzug/edit?hl=en_US&quot;&gt;apply and test patches&lt;/a&gt;.&lt;/li&gt;
&lt;li&gt;(Helpful but not required) Knowledge of Git &lt;a href=&quot;http://learn.github.com/p/branching.html&quot;&gt;branching and merging&lt;/a&gt;, &lt;a href=&quot;http://learn.github.com/p/tagging.html&quot;&gt;tagging&lt;/a&gt; and &lt;a href=&quot;http://learn.github.com/p/rebasing.html&quot;&gt;rebasing&lt;/a&gt;.&lt;/li&gt;
&lt;/ul&gt;&quot;;}}}s:21:&quot;field_lesson_overview&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:634:&quot;&lt;p&gt;In the time it takes to get a patch written, tested, reviewed, etc. Drupal continues evolving. As Drupal evolves, the patches must be kept up to date. For example, imagine a patch that was originally created to make some edits to line 5 in file X. Two releases later the patch should actually edit line 10, not line 5. Now the patch has to be updated, or ìre-rolledî. Sometimes re-rolling a patch is complex. But with usually itís pretty simple. Git provides some handy tools that will let you apply the patch to the version of Drupal it was written for, merge the changes into a newer version, and then re-create the patch.&lt;/p&gt;&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:635:&quot;&lt;p&gt;In the time it takes to get a patch written, tested, reviewed, etc. Drupal continues evolving. As Drupal evolves, the patches must be kept up to date. For example, imagine a patch that was originally created to make some edits to line 5 in file X. Two releases later the patch should actually edit line 10, not line 5. Now the patch has to be updated, or ìre-rolledî. Sometimes re-rolling a patch is complex. But with usually itís pretty simple. Git provides some handy tools that will let you apply the patch to the version of Drupal it was written for, merge the changes into a newer version, and then re-create the patch.&lt;/p&gt;
&quot;;}}}s:24:&quot;field_lesson_description&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:74:&quot;Learn to update or &quot;re-roll&quot; patches to apply to a newer version of Drupal&quot;;s:6:&quot;format&quot;;N;s:10:&quot;safe_value&quot;;s:84:&quot;Learn to update or &amp;quot;re-roll&amp;quot; patches to apply to a newer version of Drupal&quot;;}}}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330900883&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:1:&quot;6&quot;;s:6:&quot;source&quot;;s:6:&quot;node/3&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/b93deb54-264f-19a4-49eb-db74bc6c2712&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:10;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;15&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:44:&quot;Join an initiative (for a set of components)&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;0747cd45-706e-1444-5de0-9e6961030633&quot;;s:3:&quot;nid&quot;;s:2:&quot;15&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903350&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903350&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;de7dca9e-7b05-a934-4558-818813bd0619&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903350&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:36:&quot;This lesson has not been written yet&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:44:&quot;&lt;p&gt;This lesson has not been written yet&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903350&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;18&quot;;s:6:&quot;source&quot;;s:7:&quot;node/15&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/de7dca9e-7b05-a934-4558-818813bd0619&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:11;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;16&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:44:&quot;Own a project (core component or initiative)&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;678ecc45-e590-5954-6dac-95a0573c4a30&quot;;s:3:&quot;nid&quot;;s:2:&quot;16&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903366&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903366&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;e0a5e06e-d0f0-d364-d9ef-7193e5393410&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903366&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:36:&quot;This lesson has not been written yet&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:44:&quot;&lt;p&gt;This lesson has not been written yet&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903366&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;19&quot;;s:6:&quot;source&quot;;s:7:&quot;node/16&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/e0a5e06e-d0f0-d364-d9ef-7193e5393410&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:12;O:8:&quot;stdClass&quot;:33:{s:3:&quot;vid&quot;;s:2:&quot;17&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:13:&quot;Drupal Ladder&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;4c98abeb-c64e-64d4-d516-c0ed11b1846e&quot;;s:3:&quot;nid&quot;;s:2:&quot;17&quot;;s:4:&quot;type&quot;;s:10:&quot;curriculum&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903481&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903481&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;ee503327-50be-1904-8d04-9499098cad64&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903481&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:24:&quot;field_curriculum_lessons&quot;;a:1:{s:3:&quot;und&quot;;a:13:{i:0;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;9&quot;;}i:1;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;5&quot;;}i:2;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;4&quot;;}i:3;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;6&quot;;}i:4;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;7&quot;;}i:5;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;10&quot;;}i:6;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;11&quot;;}i:7;a:1:{s:9:&quot;target_id&quot;;s:1:&quot;3&quot;;}i:8;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;12&quot;;}i:9;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;13&quot;;}i:10;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;14&quot;;}i:11;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;15&quot;;}i:12;a:1:{s:9:&quot;target_id&quot;;s:2:&quot;16&quot;;}}}s:25:&quot;field_curriculum_overview&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903481&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;20&quot;;s:6:&quot;source&quot;;s:7:&quot;node/17&quot;;s:5:&quot;alias&quot;;s:47:&quot;curriculum/ee503327-50be-1904-8d04-9499098cad64&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}i:13;O:8:&quot;stdClass&quot;:40:{s:3:&quot;vid&quot;;s:2:&quot;12&quot;;s:3:&quot;uid&quot;;s:1:&quot;1&quot;;s:5:&quot;title&quot;;s:11:&quot;Write tests&quot;;s:3:&quot;log&quot;;s:0:&quot;&quot;;s:6:&quot;status&quot;;s:1:&quot;1&quot;;s:7:&quot;comment&quot;;s:1:&quot;2&quot;;s:7:&quot;promote&quot;;s:1:&quot;1&quot;;s:6:&quot;sticky&quot;;s:1:&quot;0&quot;;s:5:&quot;vuuid&quot;;s:36:&quot;54853770-c0b7-87b4-85bc-84e588454283&quot;;s:3:&quot;nid&quot;;s:2:&quot;12&quot;;s:4:&quot;type&quot;;s:6:&quot;lesson&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;s:7:&quot;created&quot;;s:10:&quot;1330903249&quot;;s:7:&quot;changed&quot;;s:10:&quot;1330903249&quot;;s:4:&quot;tnid&quot;;s:1:&quot;0&quot;;s:9:&quot;translate&quot;;s:1:&quot;0&quot;;s:4:&quot;uuid&quot;;s:36:&quot;f6499034-7520-2db4-6522-c32c8429e2d7&quot;;s:18:&quot;revision_timestamp&quot;;s:10:&quot;1330903249&quot;;s:12:&quot;revision_uid&quot;;s:1:&quot;1&quot;;s:18:&quot;field_lesson_steps&quot;;a:1:{s:3:&quot;und&quot;;a:1:{i:0;a:3:{s:5:&quot;value&quot;;s:37:&quot;This lesson has not been written yet.&quot;;s:6:&quot;format&quot;;s:13:&quot;filtered_html&quot;;s:10:&quot;safe_value&quot;;s:45:&quot;&lt;p&gt;This lesson has not been written yet.&lt;/p&gt;
&quot;;}}}s:27:&quot;field_lesson_drupal_version&quot;;a:0:{}s:25:&quot;field_lesson_project_name&quot;;a:0:{}s:25:&quot;field_lesson_project_type&quot;;a:0:{}s:17:&quot;field_lesson_type&quot;;a:0:{}s:26:&quot;field_lesson_prerequisites&quot;;a:0:{}s:21:&quot;field_lesson_overview&quot;;a:0:{}s:24:&quot;field_lesson_description&quot;;a:0:{}s:17:&quot;field_lesson_tags&quot;;a:0:{}s:11:&quot;rdf_mapping&quot;;a:9:{s:7:&quot;rdftype&quot;;a:2:{i:0;s:9:&quot;sioc:Item&quot;;i:1;s:13:&quot;foaf:Document&quot;;}s:5:&quot;title&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:8:&quot;dc:title&quot;;}}s:7:&quot;created&quot;;a:3:{s:10:&quot;predicates&quot;;a:2:{i:0;s:7:&quot;dc:date&quot;;i:1;s:10:&quot;dc:created&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:7:&quot;changed&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:11:&quot;dc:modified&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}s:4:&quot;body&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:15:&quot;content:encoded&quot;;}}s:3:&quot;uid&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:has_creator&quot;;}s:4:&quot;type&quot;;s:3:&quot;rel&quot;;}s:4:&quot;name&quot;;a:1:{s:10:&quot;predicates&quot;;a:1:{i:0;s:9:&quot;foaf:name&quot;;}}s:13:&quot;comment_count&quot;;a:2:{s:10:&quot;predicates&quot;;a:1:{i:0;s:16:&quot;sioc:num_replies&quot;;}s:8:&quot;datatype&quot;;s:11:&quot;xsd:integer&quot;;}s:13:&quot;last_activity&quot;;a:3:{s:10:&quot;predicates&quot;;a:1:{i:0;s:23:&quot;sioc:last_activity_date&quot;;}s:8:&quot;datatype&quot;;s:12:&quot;xsd:dateTime&quot;;s:8:&quot;callback&quot;;s:12:&quot;date_iso8601&quot;;}}s:3:&quot;cid&quot;;s:1:&quot;0&quot;;s:22:&quot;last_comment_timestamp&quot;;s:10:&quot;1330903249&quot;;s:17:&quot;last_comment_name&quot;;N;s:16:&quot;last_comment_uid&quot;;s:1:&quot;1&quot;;s:13:&quot;comment_count&quot;;s:1:&quot;0&quot;;s:4:&quot;name&quot;;s:5:&quot;admin&quot;;s:7:&quot;picture&quot;;s:1:&quot;0&quot;;s:4:&quot;data&quot;;s:4:&quot;b:0;&quot;;s:4:&quot;path&quot;;a:4:{s:3:&quot;pid&quot;;s:2:&quot;15&quot;;s:6:&quot;source&quot;;s:7:&quot;node/12&quot;;s:5:&quot;alias&quot;;s:43:&quot;lesson/f6499034-7520-2db4-6522-c32c8429e2d7&quot;;s:8:&quot;language&quot;;s:3:&quot;und&quot;;}s:4:&quot;menu&quot;;a:14:{s:10:&quot;link_title&quot;;s:0:&quot;&quot;;s:4:&quot;mlid&quot;;i:0;s:4:&quot;plid&quot;;i:0;s:9:&quot;menu_name&quot;;s:9:&quot;main-menu&quot;;s:6:&quot;weight&quot;;i:0;s:7:&quot;options&quot;;a:0:{}s:6:&quot;module&quot;;s:4:&quot;menu&quot;;s:8:&quot;expanded&quot;;i:0;s:6:&quot;hidden&quot;;i:0;s:12:&quot;has_children&quot;;i:0;s:10:&quot;customized&quot;;i:0;s:18:&quot;parent_depth_limit&quot;;i:8;s:11:&quot;description&quot;;s:0:&quot;&quot;;s:7:&quot;enabled&quot;;i:1;}s:26:&quot;node_export_drupal_version&quot;;s:1:&quot;7&quot;;}}',
);
  return $node_export;
}
