@class NSString, NSMutableDictionary;

@interface SafariNotificationAgentDelegate : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_centers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)tryToRegisterRemoteNotificationPermission:(id)a0;
- (void)unregisterRemoteNotificationPermission:(id)a0;
- (void)forgetRemoteNotificationPermissionForWebsite:(id)a0;
- (id)_ensureCenterDelegate:(id)a0;

@end
