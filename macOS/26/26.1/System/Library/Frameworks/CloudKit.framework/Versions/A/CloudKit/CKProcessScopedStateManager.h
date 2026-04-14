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

- (void)noteSystemIsAvailable;
- (void)handleSignificantIssue:(id)a0 actions:(unsigned long long)a1;
- (void)__registerForAccountChangeNotifications;
- (void)__refreshAccountAccessAuthorization;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (id)untrustedEntitlements;
- (void).cxx_destruct;
- (void)__registerForAuthorizationChangeNotifications;
- (void)connectionBecameInvalid:(id)a0;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (void)clearFakeEntitlementForKey:(id)a0;

@end
