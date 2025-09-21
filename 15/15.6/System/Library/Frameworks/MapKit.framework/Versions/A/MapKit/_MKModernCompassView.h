@class NSClickGestureRecognizer, NSString, MKMapView, CALayer, NSPanGestureRecognizer, NSCursor, MKModernControlAppearanceHelper, NSImage, NSArray, NSNumber;

@interface _MKModernCompassView : NSView <MKModernControlAppearanceView, NSGestureRecognizerDelegate, MKCompassView> {
    MKModernControlAppearanceHelper *_appearanceHelper;
    CALayer *_compassLayerMain;
    CALayer *_assetLayer;
    NSImage *_compassAsset;
    NSPanGestureRecognizer *_dragRecognizer;
    NSClickGestureRecognizer *_tapRecognizer;
    NSCursor *_currentCursor;
    char _userInteractionEnabled;
    struct CGPoint { double x; double y; } _dragMapScreenPoint;
    double _compassRotationInitialOffset;
    NSNumber *_lastMaybeDraggingNSNumber;
    NSArray *_compassPointLocalizedAbbreviations;
    int _lastDrawnCompassDirection;
}

@property (class, readonly) double diameter;

@property (nonatomic) char userInteractionEnabled;
@property (nonatomic) char hovering;
@property (nonatomic) char hoveringOnInnerRadius;
@property (nonatomic) char dragging;
@property (nonatomic) char maybeDragging;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) double mapHeading;
@property (nonatomic, getter=isDragGestureEnabled) char dragGestureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compassViewWithMapView:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)textColor;
- (void)updateAppearance;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)updateImageForCompassDirection:(int)a0;
- (void)_cancelPendingMaybeDragging;
- (void)_populateCompassPointLocalizedAbbreviationsArray;
- (void)_scheduleMaybeDragging:(char)a0;
- (void)_updateDirectionImageLayer:(id)a0;
- (id)compassAssetName:(char)a0;
- (id)compassMainLayerColor;
- (void)dragGestureRecognizerChanged:(id)a0;
- (void)fetchImage:(id)a0;
- (id)initWithMapView:(id)a0;
- (char)isPoint:(struct CGPoint { double x0; double x1; })a0 betweenInner:(double)a1 outer:(double)a2;
- (void)setCompassViewSize:(long long)a0;
- (void)setCompassViewSize:(long long)a0 style:(long long)a1;
- (void)setMaybeDraggingNSNumber:(id)a0;
- (id)stringForCompassPoint:(int)a0;
- (void)tapGestureRecognizerChanged:(id)a0;
- (void)updateCompassLayers;
- (void)updateCursor;

@end
