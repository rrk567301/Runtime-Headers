@class NSXPCConnection, NSString, SafariNotificationAgentDelegate;

@interface SafariNotificationAgentPrivate : NSObject <SafariNotificationAgent, RemoteNotificationVerificationRequestProxyDelegate> {
    struct HashMap<unsigned long long, RemoteNotificationVerificationRequestProxy *, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::GenericHashTraits<RemoteNotificationVerificationRequestProxy *>, WTF::HashTableTraits> { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, RemoteNotificationVerificationRequestProxy *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, RemoteNotificationVerificationRequestProxy *>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, RemoteNotificationVerificationRequestProxy *, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::GenericHashTraits<RemoteNotificationVerificationRequestProxy *>>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _pendingRequests;
}

@property (weak, nonatomic) SafariNotificationAgentDelegate *delegate;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)centerDidShowUserNotification:(id)a0;
- (void)centerDidActivateUserNotification:(id)a0;
- (void)startVerificationForRemoteNotificationProviderWithApiURL:(id)a0 websiteIdentifier:(id)a1 queryParameters:(id)a2 referrerURL:(id)a3 requestID:(unsigned long long)a4;
- (void)grantRemoteNotificationPermissionForRequestID:(unsigned long long)a0;
- (void)denyRemoteNotificationPermissionForRequestID:(unsigned long long)a0;
- (void)grantRemoteNotificationPermissionForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)denyRemoteNotificationPermissionForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)forgetNotificationPermissionForWebsite:(id)a0;
- (void)fetchIdentifiersAddedAfterDate:(id)a0 beforeDate:(id)a1 withAllowedPermissions:(BOOL)a2 withDeniedPermissions:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)fetchPendingPersistentNotificationEvents:(id /* block */)a0;
- (void)grantLocalNotificationPermissionAsRemoteNotificationForWebsite:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleLocalNotification:(id)a0 forWebsite:(id)a1;
- (void)removeLocalNotification:(id)a0 forWebsite:(id)a1;
- (void)verificationRequest:(id)a0 centerDidRegisterForRemoteNotifications:(unsigned long long)a1 withDeviceToken:(id)a2;
- (void)verificationRequest:(id)a0 didFinishHandshake:(int)a1 websiteName:(id)a2 lowResIcon:(id)a3 highResIcon:(id)a4 errorMessages:(id)a5;
- (void)centerDidUnregisterForRemoteNotifications:(unsigned long long)a0;

@end
