@interface SiriAppLaunchIntents.DeepLaunchIntentHandler : NSObject <DeepLaunchIntentHandling>

- (id)init;
- (void)handleDeepLaunch:(id)a0 completion:(id /* block */)a1;
- (void)confirmDeepLaunch:(id)a0 completion:(id /* block */)a1;

@end
