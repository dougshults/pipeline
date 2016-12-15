<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php // Custom wrapper for Pipeline Filters to display filter in grid
print $wrapper_prefix; ?>
  <div class="filter-grid">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <select class="filter">
  <option value="*">Show All</option>
    <?php foreach ($rows as $id => $row): ?>
      <?php print $row; ?>
    <?php endforeach; ?>
  </select>
  </div>
<?php print $wrapper_suffix; ?>
