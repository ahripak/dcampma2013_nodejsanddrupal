(function($) {

  /**
   * gif module nodejs callbacks
   */
  Drupal.Nodejs.callbacks.gif_refresh = {
    callback: function(message) {

      // nodejs messages with :broadcast set to true will call all callbacks
      // so switch on channel just in case
      switch(message.channel) {
      case 'gif':

	// swap out the old number with the new one
	$('#number').html(message.data.number);

	// add new row, and reload masonry
	var view = $(".view-felines.view-display-id-page .view-content");
	view.prepend(message.data.row);
	view.imagesLoaded(function() {
	  view.masonry('reload');
	});
	break;
      }
    }
  }
}) (jQuery);