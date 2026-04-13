@class CAContext, NSUUID;

@interface NSOcclusionDetectionView : NSView {
    BOOL _registeredForNotifications;
    CAContext *_context;
    BOOL _ignoresWindowOcclusion;
    NSUUID *_uuid;
    BOOL _eventShapeIsUnoccluded;
    BOOL _roiIsUnoccluded;
    unsigned long long _lastUnoccludedValidationToken;
    BOOL _clientThinksWeAreUnoccluded;
}

@property BOOL ignoresWindowOcclusion;

+ (BOOL)supportsEventShapeDetection;

- (void)dealloc;
- (void)viewDidMoveToWindow;
- (BOOL)wantsLayer;
- (BOOL)_eventShapeIsEffectivelyUnoccluded;
- (void)_registerForNotifications:(BOOL)a0;
- (void)_cleanUpContext;
- (void)_evaluateOcclusionState;
- (void)viewGeometryDidChangeNotification:(id)a0;
- (void)_handleRemoteContextNotification:(int)a0 forContext:(unsigned int)a1;
- (void)_updateContext;
- (BOOL)validateNoOcclusionSinceToken:(id)a0;

@end
