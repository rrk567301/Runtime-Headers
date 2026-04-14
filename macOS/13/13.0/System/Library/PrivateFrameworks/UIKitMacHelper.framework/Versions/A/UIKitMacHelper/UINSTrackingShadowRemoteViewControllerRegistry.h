@class UIWindow, CADisplayLink, NSHashTable, UIResponder;

@interface UINSTrackingShadowRemoteViewControllerRegistry : NSObject {
    NSHashTable *_shadowVCs;
    CADisplayLink *_displayLink;
    id _keyWindowNotificationObserver;
    id _firstResponderNotificationObserver;
    UIWindow *_lastKeyWindow;
    UIResponder *_lastFirstResponder;
}

@property (class, readonly, nonatomic) UINSTrackingShadowRemoteViewControllerRegistry *sharedInstance;

@property (nonatomic) BOOL showsDebugOverlay;

- (id)_init;
- (void).cxx_destruct;
- (void)_displayLinkTick:(id)a0;
- (void)_firstResponderDidChange;
- (void)registerShadowRemoteViewController:(id)a0;
- (void)maybeReestablishFirstResponderStateForUIWindow:(id)a0 uiFirstResponder:(id)a1 forceUpdate:(BOOL)a2;
- (void)_stopTracking;
- (void)unregisterShadowRemoteViewController:(id)a0;
- (void)_resampleFirstResponder:(id)a0;

@end
