@class NSTrackingArea, CALayer, GEOWorldImageLayer, NSMutableArray;

@interface GEOWorldView : NSView {
    GEOWorldImageLayer *_dayMapLayer;
    GEOWorldImageLayer *_nightMapLayer;
    NSMutableArray *overlappingLayers;
    BOOL enabled;
    BOOL isDebugON;
    CALayer *primeMeridianLayer;
    CALayer *viewEquatorLayer;
    CALayer *copyrightLayer;
    unsigned char imageMonthOfTheYear;
    long long trackingRectTag;
    NSTrackingArea *mouseMoveTrackingArea;
    struct CGPoint { double x; double y; } previousMousePosition;
    double scaleFactor;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, setter=setNightMap:) BOOL isNightMap;
@property (nonatomic) double globeRotation;
@property (nonatomic, setter=setDebugON:) BOOL isDebugON;

+ (struct CGImage { } *)_copyWorldMapDayImage;

- (void)dealloc;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)makeBackingLayer;
- (void)mouseMoved:(id)a0;
- (void)awakeFromNib;
- (void)viewWillDraw;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (double)_scaleFactor;
- (void)effectiveAppearanceDidChange;
- (void)addOverlappingLayer:(id)a0 centeredInCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)removeOverlappingLayer:(id)a0;
- (id)currentMapLayer;
- (void)mouseDragged:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })longLatSpanPerPoint;
- (void)repositionLayers;
- (struct CGPoint { double x0; double x1; })viewPointFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)mouseExited:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)timedMouseMoved:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mouseUp:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mouseDown:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)_createDayMapLayer;
- (void)_renderDayLayer;
- (void)_updateDayLayer;
- (void)updatedWorldMapEnabled;
- (void)_removeTrackingArea;
- (void)_addTrackingArea;
- (struct CGImage { } *)_copyCopyRightImageWithString:(id)a0 textColor:(id)a1 fontSize:(double)a2;
- (id)dayMapLayer;
- (void)systemClockDidChangeNotificationHandler;
- (void)_renderNightLayer;
- (void)updateContents;
- (void)_repositionOverlappingLayers;
- (id)nightMapLayer;
- (double)_normalizeLongitude:(double)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_coordinateFromLayerPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)viewPrimeMeridian;
- (double)viewEquator;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinateFromViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_startMouseMoveTracking;
- (struct CLLocationCoordinate2D { double x0; double x1; })_coordinateLocationForEvent:(id)a0;
- (void)mouseEntered:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)_stopMouseMoveTracking;
- (void)_setHiddenToNOForLayer:(id)a0;
- (void)_setupCopyRightLayer;

@end
