@interface AppStoreComponentsDaemonKit.UtilityClient : NSObject <ASCUtilityService>

- (id)init;
- (void)openURL:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)restoreAppStoreWithReplyHandler:(id /* block */)a0;

@end
