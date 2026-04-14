@class NSArray, MKMapView, NSMutableOrderedSet, NSMapTable, NSMutableArray;
@protocol MKOverlayContainerViewDelegate;

@interface MKOverlayContainerView : NSView {
    NSMutableOrderedSet *_overlays[2];
    NSMapTable *_overlayToDrawable[2];
    NSMutableArray *_drawables[2];
    NSMutableArray *_vkOverlays[2];
}

@property (weak, nonatomic) id<MKOverlayContainerViewDelegate> delegate;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) double mapZoomScale;
@property (readonly, nonatomic) BOOL supportsElevation;
@property (readonly, nonatomic) BOOL requiresModernMap;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *allDrawables;

+ (long long)_defaultOverlayLevel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)addOverlay:(id)a0;
- (void)addOverlays:(id)a0;
- (void)addOverlay:(id)a0 level:(long long)a1;
- (void)addOverlays:(id)a0 level:(long long)a1;
- (void)insertOverlay:(id)a0 atIndex:(unsigned long long)a1 level:(long long)a2;
- (void)removeOverlay:(id)a0;
- (void)removeOverlays:(id)a0;
- (void)insertOverlay:(id)a0 atIndex:(unsigned long long)a1;
- (void)exchangeOverlayAtIndex:(unsigned long long)a0 withOverlayAtIndex:(unsigned long long)a1;
- (void)exchangeOverlay:(id)a0 withOverlay:(id)a1;
- (void)insertOverlay:(id)a0 aboveOverlay:(id)a1;
- (void)insertOverlay:(id)a0 belowOverlay:(id)a1;
- (id)overlaysInLevel:(long long)a0;
- (long long)_drawableIndexForDrawable:(id)a0 level:(long long)a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_mapRectWithFractionOfVisible:(double)a0;
- (void)_configureAndAddDrawable:(id)a0 forOverlay:(id)a1 level:(long long)a2;
- (id)_considerAddingDrawable:(id)a0 inAddRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 level:(long long)a2;
- (void)addAndRemoveOverlayViews;
- (long long)_levelForOverlay:(id)a0 exists:(BOOL *)a1;
- (void)_exchangeOverlayAtIndex:(unsigned long long)a0 withOverlayAtIndex:(unsigned long long)a1 level:(long long)a2;
- (unsigned long long)_overlayCount;
- (id)drawableForOverlay:(id)a0;
- (void)_removeDrawable:(id)a0 forOverlay:(id)a1 level:(long long)a2;
- (void)_updateContentScale:(id)a0;
- (void)_insertDrawable:(id)a0 forOverlay:(id)a1 atIndex:(long long)a2 level:(long long)a3;
- (void)_flexTerrainIfNeeded;
- (void)_unFlexTerrainIfNeeded;
- (BOOL)_overlayRequiresModernMap:(id)a0;
- (BOOL)_anyOverlayRequiresModernMap;
- (BOOL)_allOverlaysSupportElevation;

@end
