@interface GamePolicy.GamePolicyDaemonPrivilegedProxyBridge : NSObject

+ (void)launchGamesApp;
+ (void)requestLaunchGameOverlayWithConditional:(BOOL)a0 fallbackToApp:(BOOL)a1 withReply:(id /* block */)a2;

- (id)init;

@end
