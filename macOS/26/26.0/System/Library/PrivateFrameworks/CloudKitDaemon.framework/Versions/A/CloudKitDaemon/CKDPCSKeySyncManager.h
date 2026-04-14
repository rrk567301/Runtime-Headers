@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceNameByAccount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue;

+ (id)sharedManager;
+ (void)sendCoreAnalyticsEventForKeySync:(id)a0;

- (id)init;
- (void)getKeySyncEligibilityForService:(id)a0 isManatee:(BOOL)a1 accountDSID:(id)a2 lastModifiedDate:(id)a3 testOverrideProvider:(id)a4 completionHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)_on_queue_createSyncTrackerForAccountDSID:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 testOverrideProvider:(id)a4;
- (id)_on_queue_getKeySyncTrackerByServicenameForAccountDSID:(id)a0;
- (void)_on_queue_performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 requestorOperationID:(id)a4 completionHandler:(id /* block */)a5;
- (id)_on_queue_syncTrackerForAccountDSID:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 testOverrideProvider:(id)a4;
- (id)createSyncTrackerForAccountDSID:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 testOverrideProvider:(id)a4;
- (id)lastUserKeySyncCompletionDateForAccountDSID:(id)a0 service:(id)a1;
- (void)performKeySyncWithSyncTracker:(id)a0 testableSyncConfig:(unsigned long long)a1 shouldThrottle:(BOOL)a2 testOverrideProvider:(id)a3 requestorOperationID:(id)a4 completionHandler:(id /* block */)a5;
- (void)setRacedWithGuitarfishRepairCallbackOnAllOutstandingHandlersWithCompletion:(id /* block */)a0;
- (id)syncTrackerForAccountDSID:(id)a0 requestorOperationID:(id)a1 service:(id)a2 manatee:(BOOL)a3 testOverrideProvider:(id)a4;
- (void)syncUserKeysForService:(id)a0 context:(id)a1 bundleID:(id)a2 serviceIsManatee:(BOOL)a3 accountDSID:(id)a4 accountType:(long long)a5 shouldThrottle:(BOOL)a6 testOverrideProvider:(id)a7 requestorOperationID:(id)a8 completionHandler:(id /* block */)a9;
- (void)syncUserKeysForSessionAcquisitionWithService:(id)a0 bundleID:(id)a1 accountDSID:(id)a2 accountType:(long long)a3 testOverrideProvider:(id)a4 completionHandler:(id /* block */)a5;

@end
