@class CKContainerImplementation, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (id)CKStatusReportArray;
- (void)showAssetCache;
- (void)clearAssetCache;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 wrappingDatabase:(id)a2 convenienceConfiguration:(id)a3 completionHandler:(id /* block */)a4;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (void)saveRecordZone:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchPCSFromCacheForRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkSupportedDeviceCapabilitiesInZone:(id)a0 desiredCapabilities:(id)a1 options:(id)a2 wrappingDatabase:(id)a3 convenienceConfiguration:(id)a4 completionHandler:(id /* block */)a5;
- (void)saveSubscription:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)initInternalWithContainerImplementation:(id)a0 scope:(long long)a1;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 isConvenience:(BOOL)a3;
- (void)fetchPCSFromCacheForShareWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAncestorsInTestingForZoneWithZoneID:(id)a0 fetchPCSOnly:(BOOL)a1 unitTestOverrides:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 localCacheOnly:(BOOL)a1 unitTestOverrides:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveRecord:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearRecordCache;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)fetchRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)deleteRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (unsigned long long)countAssetCacheItems;
- (void)addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;

@end
