@class NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RemoteNotificationController : NSObject <SafariNotificationAgentProxy> {
    NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_permissions;
}

@property (class, readonly, nonatomic) RemoteNotificationController *sharedController;

+ (id)iconForIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_ensureConnection;
- (void)_clearConnection;
- (void)performDelayedLaunchOperations;
- (void)centerDidShowUserNotification:(id)a0;
- (void)centerDidActivateUserNotification:(id)a0;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)a0 withResult:(int)a1 websiteName:(id)a2 lowResIcon:(id)a3 highResIcon:(id)a4 errorMessages:(id)a5;
- (void)agentDidRegisterForRemoteNotifications:(unsigned long long)a0 allowedDomains:(id)a1 deviceToken:(id)a2;
- (void)agentDidUnregisterForRemoteNotifications:(unsigned long long)a0 disallowedDomains:(id)a1;
- (unsigned long long)_generateRequestID;
- (id)startVerificationRequestForWebsiteWithIdentifier:(id)a0 apiURL:(id)a1 queryParameters:(id)a2 referrerURL:(id)a3 client:(id)a4;
- (void)registerRemoteNotificationsForWebsiteWithRequestID:(unsigned long long)a0 client:(id)a1;
- (void)unregisterRemoteNotificationsForWebsiteWithRequestID:(unsigned long long)a0 client:(id)a1;
- (void)cancelRequestWithID:(unsigned long long)a0;
- (void)getPendingPersistentNotificationEventsWithCompletionHandler:(id /* block */)a0;
- (void)registerLocalNotificationsAsRemoteNotificationsForWebsite:(id)a0 websiteDomainString:(id)a1 usingDecisionHandler:(id /* block */)a2;
- (void)scheduleLocalNotification:(id)a0 forDomain:(id)a1;
- (void)removeLocalNotifcation:(id)a0 forDomain:(id)a1;
- (id)localNotificationWebsiteIdentifierForDomainName:(id)a0;
- (id)notificationPermissionAlertForWebsiteName:(id)a0;
- (void)permissionsDidChange;
- (void)getNotificationPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)addRemoteNotificationPermissions:(void *)a0;
- (void)setPermissionPolicy:(int)a0 forWebsiteIdentifier:(id)a1;
- (void)removePermissionForWebsiteWithIdentifiers:(id)a0;
- (void)removeLocalNotifcationPermissionForWebsiteNames:(id)a0;
- (void)forgetLocalNotificationPermissionForWebsite:(id)a0;
- (void)removeDeniedOriginPermissionsAddedBetweenDate:(id)a0 andDate:(id)a1;
- (void)getPermissionDataCopyWithCompletionHandler:(id /* block */)a0;
- (void)_loadPermissionsIfNecessary;
- (void)_updatePermissions:(id)a0 remotePermissionData:(id)a1;
- (void)_clearConnectionIfNeeded;
- (id)_safariNotificationAgentProxy;

@end
