@class NSView, NSValue, NSObject;
@protocol FI_TEphemeralPathBarDisplayControllerDelegate;

@interface FI_TEphemeralPathBarDisplayController : NSObject {
    struct TEventMonitor { NSObject *fEventMonitorToken; } _pathBarModifierEventMonitor;
    struct TEventMonitor { NSObject *fEventMonitorToken; } _pathBarMouseEventMonitor;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _pathBarDelayToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _pathBarDismissDelayToken;
    struct TNSWeakPtr<NSObject<FI_TEphemeralPathBarDisplayControllerDelegate>> { NSValue *fWeakObject; } _delegate;
    BOOL _peerMenuEnabled;
    BOOL _mouseInside;
    BOOL _keyWindowOnly;
    BOOL _displayExtendedByMouseOver;
}

@property (nonatomic) BOOL skipAnimation;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (weak, nonatomic) NSObject<FI_TEphemeralPathBarDisplayControllerDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long modifierMask;
@property (weak, nonatomic) NSView *trackingView;
@property (nonatomic, getter=isShowingMenu) BOOL showingMenu;

+ (BOOL)shouldBeMonitoring;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDelegate:(id)a0;
- (id)handleEvent:(id)a0;
- (id)handleMouseEvent:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)startMouseMonitoring;
- (void)stopMouseMonitoring;
- (void)cancelDisplay;
- (void)dismissImmediately;
- (void)dismissWithoutDelay;
- (void)setMouseInside:(BOOL)a0 event:(id)a1;

@end
