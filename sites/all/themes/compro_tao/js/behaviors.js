/**
 * @file Implementation of Drupal behavior.
 */

(function($) {
/**
 * Wrapper function for Google Analytics events
 */
function ga_event(params) {
  params.splice(0, 0, "_trackEvent");
  if (typeof _gaq === "object") {
    _gaq.push(params);
  }
}

/**
 * jQuery when the DOM is ready.
 */
$(document).ready(function(){
  // Placeholder polyfill
  if(!("placeholder" in document.createElement("input"))) {
    $("input[placeholder]").each(function() {
      var $this = $(this), val = $this.attr("placeholder");
      $this.val(val).css("color", "#888")
        .focus(function() {
          $this.css("color","#000");
          if ($this.val() == val) {
            $this.val("");
          }
        })
        .blur(function() {
          if ($this.val() == "") {
            $this.val(val).css("color", "#888");
          }
        });
    });
  }
  
  // Give external links target="_blank"
  var $a = $('a');
  $a.each(function(i) {
    if (this.href.length && this.hostname !== window.location.hostname) {
      $(this).attr('target','_blank');
    }
  });
  
  // Activate fancy tooltips on non-touch screens.
  if (!('ontouchstart' in window) && !('onmsgesturechange' in window)) {
    $('[title]').tipsy();
  }
  
  // Remove image height and width attributes from the DOM.
  if ($.browser.msie && $.browser.version.substring(0,1) <= 8) {
    $("img").removeAttr('height').removeAttr('width');
  }
  
  // Immediately submit the form when a dropdown item is selected.
  $('select.special-cat').change(function(e){
    $(this).parents('form').submit();
  });
});

})(jQuery);
