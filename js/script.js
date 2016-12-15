jQuery(document).ready(function($) {

	// Reset each select option to default when a new option is selected
	$('select.filter').on('change', function(){
			($('select.filter').not(this).prop('selectedIndex',0));
		});

	// Console log message when the isotope library is ready for use
	// Create our ".grid" variable to attach isotope
	if($().isotope) {
     console.log("isotope is loaded and ready");
			// init Isotope
			var isoTile = $('.view-pipeline .pipeline').isotope({
			  percentPosition: true,
			  itemSelector: '.dev-candidate',
	  		stagger: 30,
	  		columnWidth: 50
			});
			var filterFns = {};
			// bind filter on select change
			$('select.filter').each(function(){
				$(this).on('change', function() {
			  // get filter value from option value
			  var filterValue = ($(this).val());
				console.log(filterValue);
			  // use filterFn if matches value
			  filterValue = filterFns[ filterValue ] || filterValue;
			  isoTile.isotope({ filter: filterValue });
			  //console.log(filterValue);
				});
			});
	}

// END THE ISOTOPE SCRIPT

});
