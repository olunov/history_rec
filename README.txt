Browsing History Recommender
============================

This module uses [Recommender API](http://drupal.org/project/recommender) to generate content recommendations based on users' browsing history:

  * For each node: "Users who viewed this node also viewed"
  * For each user: "Personalized recommendations to me"
  
Users browsing history data are either from Drupal's built-in "history" database table, or from the "accesslog" database table provided by the Statistics module in Drupal Core.
    

Installation & Configuration
----------------------------

You need to install the Recommender API module and Drupal Computing module before install this module.

After installation, follow these steps to compute recommendations:

  1. Go to admin/config/system/computing/recommender/history_rec to review the settings, and make changes if necessary. Note that the "Use accesslog table" option is only valid if you enable the "Statistics" module in Core.
  2. Run Drupal Cron to feed data into recommender.
  3. Go to admin/config/system/computing/add, and click "Browsing History Recommender" to add a computing command.
  4. Compute recommendations using either of the following approaches:
    - Open a command line terminal and run "drush recommender-run".
    - Open a command line terminal and execute the Recommender Java agent.
    - Go to admin/config/system/computing/recommender and click "Run Recommender". You might experience PHP "Out of Memory" error depending on the size of your data.
  5. You can view the execution results at admin/config/system/computing/records.

For more information about how the module works, please read the documentation of Recommender API.


Limitations and Customizations
------------------------------

This module is **not** able to:
  
  * Make recommendations for entity types other than "node".
  * Access database other than `$database['default']` for better performance.

To do those, you need to customize the module on the code level.
