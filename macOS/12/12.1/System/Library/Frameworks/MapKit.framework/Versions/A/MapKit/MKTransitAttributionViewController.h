@class NSString, MKMapItem;
@protocol MKTransitAttributionViewControllerDelegate, GEOTransitLineItem;

@interface MKTransitAttributionViewController : _MKClickableTableViewController <GEOResourceManifestTileGroupObserver, MKModuleViewControllerProtocol> {
    BOOL _isAttributionURLAvailable;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKTransitAttributionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)_commonInit;
- (void)viewDidLoad;
- (id)_attribution;
- (id)initWithMapItem:(id)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (BOOL)tableView:(id)a0 shouldClickRow:(long long)a1;
- (void)tableView:(id)a0 mouseUpOnRow:(long long)a1;
- (id)_attributionCell;
- (void)_transitInfoUpdated;
- (BOOL)_hasAttribution;
- (void)_presentTransitAttributionDetails;
- (id)initWithTransitLineItem:(id)a0;

@end
