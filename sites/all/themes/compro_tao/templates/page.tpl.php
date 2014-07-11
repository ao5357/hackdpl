<?php if ($page['header']) print render($page['header']) ?>
<?php if ($page['nav']) print render($page['nav']) ?>
<?php if ($page['post_header']) print render($page['post_header']) ?>
<?php if ($is_front): ?>
  <div class="action-section"><div class="inner">
<?php endif; ?>
<div class="page-meta"><div class="inner">
  <?php if ($page['cta']) print render($page['cta']) ?>
  <?php if ($page['cta_bottom']) print render($page['cta_bottom']) ?>
  <?php /* Fake region and fake block. Does not want. bpcz */ if (!$is_front): ?>
    <div class="region region-breadcrumb"><div class="inner">
        <div id="block-nr-breadcrumb" class="block first last">
          <div class="block-content">
            <?php print $breadcrumb; ?>
          </div>
        </div>
      </div></div>
  <?php endif; ?>
</div></div>
<?php if ($page['content_top']) print render($page['content_top']) ?>
<?php if ($is_front): ?>
  </div></div>
<?php endif; ?>
<?php if ($page['content']) print render($page['content']) ?>
<?php if ($page['content_bottom']) print render($page['content_bottom']) ?>
<div class="footer-regions"><div class="inner">
  <?php if ($page['pre_footer']) print render($page['pre_footer']) ?>
  <?php if ($page['footer']) print render($page['footer'])  ?>
</div></div>