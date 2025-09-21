@class NSString, NSArray, CLLocation, _MKPlacePoisInlineMapContentView;

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
}

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) char resizableViewsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 configuration:(id)a1;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)visibleMapItems;
- (void)_handleTapOnMap;
- (char)_canShowWhileLocked;
- (void)_updateMap;
- (Class)classForRootView;
- (void)fetchPoisForBrand;
- (id)geoCamera;

@end
