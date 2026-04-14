@class NSMutableDictionary, CKEntitlements, NSHashTable, NSObject;
@protocol OS_dispatch_queue, CKTestDevice;

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_containersRegisteredForAccountChangeNotifications;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    id<CKTestDevice> _testDevice;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)untrustedEntitlements;
- (void)connectionBecameInvalid:(id)a0;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (void)noteSystemIsAvailable;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (void)clearFakeEntitlementForKey:(id)a0;

@end
