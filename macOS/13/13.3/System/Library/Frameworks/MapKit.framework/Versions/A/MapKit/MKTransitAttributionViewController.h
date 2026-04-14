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
- (void)_commonInit;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (id)_attribution;
- (id)initWithMapItem:(id)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (BOOL)_hasAttribution;
- (void)viewWillAppear:(BOOL)a0;
- (id)_attributionCell;
- (BOOL)_canShowWhileLocked;
- (void)_presentTransitAttributionDetails;
- (void)_transitInfoUpdated;
- (id)initWithTransitLineItem:(id)a0;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)tableView:(id)a0 mouseUpOnRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldClickRow:(long long)a1;

@end
