@class NSTimer, NSString, NSManagedObjectContext, CALayer, NSOperationQueue, GEOPulseLayer, GEOCity, GEOWorldImageLayer;

@interface GEOWorldTimeZoneView : GEOWorldView {
    NSOperationQueue *__operationQueue;
    NSManagedObjectContext *__geoContext;
    GEOCity *selectedCity;
    NSTimer *isBusyTimer;
    BOOL isSearchingByName;
    GEOWorldImageLayer *timeZoneLayer;
    GEOWorldImageLayer *mouseOverTimeZoneLayer;
    CALayer *cityLightsLayer;
    CALayer *_selectedCityLayer;
    CALayer *_tentativeSelectionLayer;
    GEOPulseLayer *_pulseLayer;
    BOOL pulseSelectedCity;
    CALayer *_pinLayer;
    CALayer *_pinShadowLayer;
}

@property (nonatomic) BOOL showTimeZone;
@property (nonatomic) BOOL showSelectedCity;
@property (retain, nonatomic) GEOCity *selectedCity;
@property (readonly) NSManagedObjectContext *geoContext;
@property (readonly) NSOperationQueue *operationQueue;
@property BOOL isBusy;
@property BOOL isSearchingByName;
@property (retain) NSString *nameToSearch;
@property BOOL pulseSelectedCity;
@property struct CGPoint { double x; double y; } pinPoint;

+ (struct CGImage { } *)_selectedCityImage:(double)a0;
+ (struct CGImage { } *)_smallDotCityImage:(double)a0;
+ (struct CGImage { } *)_tentativeSelectedCityImage:(double)a0;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeValue:(id)a0;
- (void)awakeFromNib;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)effectiveAppearanceDidChange;
- (void)_invokeInvocation:(id)a0;
- (void)showTentativeSelectionForCity:(id)a0;
- (void)searchForCityWhoseNameContainsString:(id)a0 notifyTargetWhenDone:(id)a1 selector:(SEL)a2;
- (id)pinLayer;
- (id)pinShadowLayer;
- (id)pulseLayer;
- (id)selectedCityLayer;
- (id)layerWithTimeZoneImage:(struct CGImage { } *)a0;
- (void)_setCityLightsLayer:(id)a0;
- (void)_removeMouseOverTimeZoneLayer;
- (id)_mouseOverLayerForAreaName:(id)a0;
- (void)setSelectedMaskForTimeZone:(id)a0;
- (void)setTimeZoneMask:(struct CGImage { } *)a0;
- (void)setNightMap:(BOOL)a0;
- (void)_setSelectedCityWithManagedObjectID:(id)a0;
- (void)_findCityAtLongLatOpererationFinished:(id)a0;
- (void)_seachForCityAtLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3 timeZoneNamesScope:(id)a4;
- (void)_drawCityResultInContext:(struct CGContext { } *)a0 dotImage:(struct CGImage { } *)a1 contextSize:(struct CGSize { double x0; double x1; })a2 city:(id)a3;
- (struct CGImage { } *)_copyComposeCityResultImage:(id)a0;
- (void)setCityResultImage:(struct CGImage { } *)a0;
- (void)_findCityByNameOpererationFinished:(id)a0;
- (void)_updateLightPointsFromFindOperation:(id)a0;
- (void)_setNeedsDisplayYES;
- (void)_addFindCityOperationWithName:(id)a0 fetchLimit:(unsigned long long)a1 notifyWhenDoneInvocation:(id)a2;
- (void)_busyTimerCallback;
- (void)_stopBusyTimer;
- (void)_startBusyTimer;
- (void)_setIsBusyToNO;
- (void)updatePinLayer;
- (void)updateSelectedCityLayer;
- (void)mouseDragged:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)repositionLayers;
- (id)_layerWithImageFromResources:(id)a0 extension:(id)a1;
- (void)removePin;
- (void)dropPinToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_layer:(id)a0 withWorldMaskLayer:(id)a1;
- (void)mouseExited:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)timedMouseMoved:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)seachForCityAtLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3;
- (void)mouseUp:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mouseDown:(id)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)dropPinToCity:(id)a0;

@end
