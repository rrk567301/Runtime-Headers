@class NSMutableDictionary, CKEntitlements, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAuthorizationChangeNotice;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_registeredContainers;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedManager;

- (void)handleSignificantIssue:(id)a0 actions:(unsigned long long)a1;
- (void)clearFakeEntitlementForKey:(id)a0;
- (void)connectionBecameInvalid:(id)a0;
- (void)__registerForAccountChangeNotifications;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (id)untrustedEntitlements;
- (void)noteSystemIsAvailable;
- (void).cxx_destruct;
- (void)__registerForAuthorizationChangeNotifications;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (void)__refreshAccountAccessAuthorization;

@end
