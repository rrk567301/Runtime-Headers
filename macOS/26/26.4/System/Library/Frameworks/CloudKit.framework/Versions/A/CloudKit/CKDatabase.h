@class CKContainer, CKDatabaseImplementation, NSOperationQueue;

@interface CKDatabase : NSObject

@property (readonly, nonatomic) CKDatabaseImplementation *implementation;
@property (readonly, weak, nonatomic) CKContainer *container;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) long long databaseScope;

+ (void)initialize;

- (void)saveRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (void)fetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)a0;
- (void)addOperation:(id)a0;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)checkSupportedDeviceCapabilities:(id)a0 inZone:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)CKPropertiesDescription;
- (void)deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearRecordCache;
- (id)initInternalWithImplementation:(id)a0 container:(id)a1;
- (id)init;
- (void)saveSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)description;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)a0;
- (void)deleteSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecordWithID:(id)a0 completionHandler:(id /* block */)a1;

@end
