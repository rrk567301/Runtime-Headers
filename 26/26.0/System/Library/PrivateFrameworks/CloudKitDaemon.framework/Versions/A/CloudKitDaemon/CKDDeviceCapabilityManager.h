@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceCapabilityManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *updateOperationsPerContainer;
@property (nonatomic) double lastTrackedFailureTime;
@property (nonatomic) double failureBackoffDelay;
@property (retain, nonatomic) NSMutableDictionary *capabilitiesAndUsagesCachePerContainer;

+ (id)sharedManager;
+ (id)managerForTesting;

- (id)init;
- (id)initInternal;
- (void).cxx_destruct;
- (BOOL)_deleteLastSentCapabilitiesAndUsageDataForContainer:(id)a0 withError:(id *)a1;
- (BOOL)_deleteRecordWithUnknownShareUsage:(id)a0 inContainer:(id)a1 withError:(id *)a2;
- (BOOL)_deleteShareUsageForShareID:(id)a0 inContainer:(id)a1 withError:(id *)a2;
- (BOOL)_deleteZoneUsageForZoneID:(id)a0 inContainer:(id)a1 withError:(id *)a2;
- (id)_deviceAndCapabilityCacheForContainer:(id)a0;
- (void)_handleCacheErrorBeforeServerRequest:(id)a0 skipErrorMitigation:(BOOL)a1;
- (void)_handleCacheUpdateErrorAfterServerRequest:(id)a0 skipErrorMitigation:(BOOL)a1;
- (void)_handleDeviceCapabilitiesResultForContainer:(id)a0 savedCapabilities:(id)a1 skipErrorMitigation:(BOOL)a2 withCapabilitiesError:(id)a3 operationError:(id)a4;
- (void)_handleOperationCompletedForContainerLookupName:(id)a0 containerID:(id)a1;
- (void)_handleShareUsageResultForContainer:(id)a0 shareID:(id)a1 date:(id)a2 skipErrorMitigation:(BOOL)a3 withUsageError:(id)a4 operationError:(id)a5;
- (void)_handleZoneUsageResultForContainer:(id)a0 zoneID:(id)a1 date:(id)a2 skipErrorMitigation:(BOOL)a3 withUsageError:(id)a4 operationError:(id)a5;
- (void)_incrementBackoffForError:(id)a0;
- (BOOL)_isThrottledError:(id)a0;
- (BOOL)_isThrottledOperationType:(int)a0 forContainer:(id)a1 databaseScope:(long long)a2 throttleManager:(id)a3;
- (id)_lastSentCapabilityAndUsageForContainer:(id)a0 withError:(id *)a1;
- (BOOL)_noteRecordWithUnknownShareUsageForRecordID:(id)a0 container:(id)a1 date:(id)a2 withError:(id *)a3;
- (BOOL)_noteShareUsageForShareID:(id)a0 container:(id)a1 date:(id)a2 withError:(id *)a3;
- (id)_prepareShareUsageSendForContainer:(id)a0 maxCount:(unsigned long long)a1 triggerOperation:(id)a2 withCacheError:(id *)a3;
- (id)_prepareZoneUsageSendForContainer:(id)a0 maxCount:(unsigned long long)a1 triggerOperation:(id)a2 withCacheError:(id *)a3;
- (id)_recordWithUnknownShareUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;
- (void)_sendToServerForContainer:(id)a0 operation:(id)a1;
- (BOOL)_setRecordWithUnknownShareUsage:(id)a0 forRecordID:(id)a1 inContainer:(id)a2 withError:(id *)a3;
- (BOOL)_setShareUsage:(id)a0 forShareID:(id)a1 inContainer:(id)a2 withError:(id *)a3;
- (BOOL)_setZoneUsage:(id)a0 forZoneID:(id)a1 inContainer:(id)a2 withError:(id *)a3;
- (id)_shareUsageForShareID:(id)a0 inContainer:(id)a1 withError:(id *)a2;
- (id)_shareUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)_updateLastSentCapabilities:(id)a0 capabilitySetSavedDate:(id)a1 forContainer:(id)a2 withError:(id *)a3;
- (BOOL)_updateUsageSavedDate:(id)a0 forContainer:(id)a1 withError:(id *)a2;
- (id)_zoneUsageForZoneID:(id)a0 inContainer:(id)a1 withError:(id *)a2;
- (id)_zoneUsagesInContainer:(id)a0 maxCount:(unsigned long long)a1 withError:(id *)a2;
- (void)dropCacheConnectionForContainer:(id)a0;
- (BOOL)isObsoleteCapabilities:(id)a0 operation:(id)a1;
- (BOOL)isObsoleteUsage:(id)a0 operation:(id)a1;
- (id)lookupStringForContainer:(id)a0;
- (void)noteShareUsageForDeletedRecordID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)noteShareUsageForRecordID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)noteShareUsageForRequest:(id)a0 container:(id)a1;
- (void)noteShareUsageForShareID:(id)a0 at:(id)a1 container:(id)a2 operation:(id)a3;
- (void)noteZoneUsageForOperation:(id)a0 container:(id)a1;

@end
