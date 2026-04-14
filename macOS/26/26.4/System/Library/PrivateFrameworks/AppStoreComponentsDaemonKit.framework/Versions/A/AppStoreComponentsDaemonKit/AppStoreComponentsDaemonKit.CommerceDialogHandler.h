@interface AppStoreComponentsDaemonKit.CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver>

- (id)init;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
