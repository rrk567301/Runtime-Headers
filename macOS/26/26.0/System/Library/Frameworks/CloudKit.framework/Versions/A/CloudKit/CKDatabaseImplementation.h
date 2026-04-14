@class CKContainerImplementation, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CKDatabaseImplementation : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (unsigned long long)countAssetCacheItems;
- (void)showAssetCache;
- (void)clearRecordCache;
- (void)clearAssetCache;
- (id)CKStatusReportArray;
- (id)initInternalWithContainerImplementation:(id)a0 scope:(long long)a1;
- (void)deleteSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchPCSFromCacheForRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchAllSubscriptionsWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 isConvenience:(BOOL)a3;
- (void)fetchPCSFromCacheForZoneWithID:(id)a0 localCacheOnly:(BOOL)a1 unitTestOverrides:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKPropertiesDescription;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 wrappingDatabase:(id)a2 convenienceConfiguration:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchAllRecordZonesWithWrappingDatabase:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveSubscription:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)checkSupportedDeviceCapabilitiesInZone:(id)a0 desiredCapabilities:(id)a1 options:(id)a2 wrappingDatabase:(id)a3 convenienceConfiguration:(id)a4 completionHandler:(id /* block */)a5;
- (id)description;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)a0;
- (void)clearCacheEntriesForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSFromCacheForShareWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)deleteRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveRecordZone:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void)clearCacheEntriesForRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordZoneWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)clearCachesWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)saveRecord:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)addOperation:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)fetchSubscriptionWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchRecordWithID:(id)a0 wrappingDatabase:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;

@end
