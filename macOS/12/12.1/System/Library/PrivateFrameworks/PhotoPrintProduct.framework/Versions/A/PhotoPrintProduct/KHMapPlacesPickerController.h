@class NSTextField, NSString, NSScrollView, KHMapView, KHPlusMinusFooterView, NSMutableArray, NSButton, NSTableView;

@interface KHMapPlacesPickerController : UXViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>

@property (retain) NSTableView *placesTable;
@property (retain) NSScrollView *placesTableContainer;
@property (retain) NSTextField *placesTitle;
@property (retain) NSButton *addButton;
@property (retain) NSButton *removeButton;
@property (retain) NSButton *showLabelsButton;
@property (retain) KHPlusMinusFooterView *tableFooter;
@property (retain) NSMutableArray *observedMarkers;
@property (retain, nonatomic) KHMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_reloadData;
- (void)unObserveMarkers;
- (void)setMarkersHidden:(id)a0;
- (void)addMapMarker:(id)a0;
- (void)removeMapMarker:(id)a0;
- (void)observeMarkers;
- (void)markerButtonClicked:(id)a0;

@end
