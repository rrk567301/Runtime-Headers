@class CAContext;

@interface NSOcclusionDetectionView : NSView {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _regionOfInterestInsets;
    char _registeredForNotifications;
    CAContext *_context;
    char _ignoresWindowOcclusion;
    char _roiIsUnoccluded;
    unsigned long long _lastUnoccludedValidationToken;
    char _clientThinksWeAreOccluded;
    long long _clientOcclusionReason;
    unsigned long long _clientUnoccludedValidationToken;
}

@property (nonatomic) char disableDetection;
@property char ignoresWindowOcclusion;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } regionOfInterestInsets;
@property (readonly) char isOccluded;
@property (readonly) long long occlusionReason;

+ (char)supportsEventShapeDetection;
+ (char)supportsSecureLayerValidation;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_cleanUpContext;
- (void)_assertOnlyOneOcclusionDetectionView;
- (void)_evaluateOcclusionState;
- (void)_registerForNotifications:(char)a0;
- (void)_updateContext;
- (void)_updateRegionOfInterest;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)validateNoOcclusionSinceToken:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewGeometryDidChangeNotification:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
