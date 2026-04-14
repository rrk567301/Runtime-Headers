@class MKAnnotatedMapSnapshotter, NSArray, NSString, _MKPlaceViewController, _MKPlaceInlineMapContentView, MKMapItem, MKMapCamera;

@interface MKPlaceInlineMapViewController : _MKUIViewController <MKModuleViewControllerProtocol> {
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    MKAnnotatedMapSnapshotter *_collectionSnapshotter;
    struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) BOOL useWindowTrait;
@property (retain, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) NSArray *visibleMapItems;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (weak, nonatomic) _MKPlaceViewController *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)snapshot;
- (struct CGSize { double x0; double x1; })_mapSize;
- (BOOL)_canShowWhileLocked;
- (Class)classForRootView;
- (void)_handleTapOnMap;
- (id)initWithMKMapItem:(id)a0;
- (void)_updateMapIfNeeded;
- (void)_updateMap;
- (void)updateInlineMapWithRefinedMapItems;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)cancelSnapshotRequestIfNeeded;
- (void)_updateSnapshotImage:(id)a0;
- (void)_launchMaps;

@end
