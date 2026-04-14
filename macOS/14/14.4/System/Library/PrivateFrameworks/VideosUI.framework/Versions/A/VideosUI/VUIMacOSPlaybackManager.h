@interface VUIMacOSPlaybackManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_registerNotifications;
- (void)_playbackEngineWillStartPlayback:(id)a0;
- (void)setSmartRoutingEligible:(BOOL)a0;

@end
