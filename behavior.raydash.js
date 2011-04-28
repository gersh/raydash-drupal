(function($) { 
/**
 * Ajax call for button for change to next video stream.
 */
  Drupal.behaviors.raydash = {
    attach: function(context,settings) {
        jQuery.each(settings.raydash.next_button,function(name,value) {
            $('#raydash_next_'  + name,context).click(function() {
                $.ajax({method:"GET",url:("/raydash/next/" + value.nid + "/" + name  )});
            });
        });
        jQuery.each(settings.raydash.randnext_button,function(name,value) {
            $('#raydash_next_'  + name,context).click(function() {
                $.ajax({method:"GET",url:("/raydash/randnext/"+ value.nid + "/" + name )});
            });
        });
    }
  }
})(jQuery);
