@class CAContext;

@interface NSOcclusionDetectionView : NSView {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _regionOfInterestInsets;
    BOOL _registeredForNotifications;
    CAContext *_context;
    BOOL _ignoresWindowOcclusion;
    BOOL _roiIsUnoccluded;
    unsigned long long _lastUnoccludedValidationToken;
    BOOL _clientThinksWeAreOccluded;
}

@property (nonatomic) BOOL disableDetection;
@property BOOL ignoresWindowOcclusion;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } regionOfInterestInsets;
@property (readonly) BOOL isOccluded;

+ (BOOL)supportsEventShapeDetection;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (BOOL)wantsLayer;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_registerForNotifications:(BOOL)a0;
- (void)_cleanUpContext;
- (BOOL)_eventShapeIsEffectivelyUnoccluded;
- (void)viewGeometryDidChangeNotification:(id)a0;
- (void)_updateRegionOfInterest;
- (void)_updateContext;
- (void)_evaluateOcclusionState;
- (BOOL)validateNoOcclusionSinceToken:(id)a0;

@end
