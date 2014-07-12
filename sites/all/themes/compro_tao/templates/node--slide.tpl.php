<?php if (!empty($pre_object)) print render($pre_object) ?>

<div class="<?php print $classes ?>" <?php print ($attributes) ?>>
  <?php if (!empty($title_prefix)) print render($title_prefix); ?>

  <?php if (!$page && !empty($title)): ?>
    <h3 <?php if (!empty($title_attributes)) print $title_attributes ?>>
      <?php print $title ?>
    </h3>
  <?php endif; ?>

  <?php if (!empty($title_suffix)) print render($title_suffix); ?>

  <?php if (!empty($submitted)): ?>
    <div class="<?php print $hook ?>-submitted"><?php print $submitted ?></div>
  <?php endif; ?>

  <?php if (!empty($content)): ?>
    <div class="<?php print $hook ?>-content <?php if (!empty($is_prose)) print 'prose' ?>">
      <?php print render($content) ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($links)): ?>
    <div class="<?php print $hook ?>-links clearfix">
      <?php print render($links) ?>
    </div>
  <?php endif; ?>
</div>

<?php if (!empty($post_object)) print render($post_object) ?>
