@class NSView, NSValue, NSObject;
@protocol FI_TEphemeralPathBarDisplayControllerDelegate;

@interface FI_TEphemeralPathBarDisplayController : NSObject {
    struct TEventMonitor { NSObject *fEventMonitorToken; } _pathBarModifierEventMonitor;
    struct TEventMonitor { NSObject *fEventMonitorToken; } _pathBarMouseEventMonitor;
    struct TNSWeakPtr<FI_TRunAfterHelper, void> { NSValue *fWeakObject; } _pathBarDelayToken;
    struct TNSWeakPtr<FI_TRunAfterHelper, void> { NSValue *fWeakObject; } _pathBarDismissDelayToken;
    struct TNSWeakPtr<NSObject<FI_TEphemeralPathBarDisplayControllerDelegate>, void> { NSValue *fWeakObject; } _delegate;
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
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)handleEvent:(id)a0;
- (id)handleMouseEvent:(id)a0;
- (void)setMouseInside:(BOOL)a0 event:(id)a1;
- (void)dismissWithoutDelay;
- (void)stopMouseMonitoring;
- (void)startMouseMonitoring;
- (void)cancelDisplay;
- (void)dismissImmediately;

@end
