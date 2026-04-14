@class NSHashTable, CADisplayLink;

@interface UINSTrackingShadowRemoteViewControllerRegistry : NSObject {
    NSHashTable *_shadowVCs;
    CADisplayLink *_displayLink;
}

@property (class, readonly, nonatomic) UINSTrackingShadowRemoteViewControllerRegistry *sharedInstance;

@property (nonatomic) BOOL showsDebugOverlay;

- (id)_init;
- (void)_displayLinkTick:(id)a0;
- (void)_stopTracking;
- (void).cxx_destruct;
- (void)_makeApplicableShadowRemoteViewFirstResponderIfNecessary;
- (void)_resampleFirstResponder:(id)a0;
- (void)registerShadowRemoteViewController:(id)a0;
- (void)unregisterShadowRemoteViewController:(id)a0;

@end
