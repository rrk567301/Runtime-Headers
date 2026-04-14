@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDRecordCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbsByURL;
@property (retain, nonatomic) NSMutableDictionary *expiringDbsByURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue;

+ (id)sharedPool;
+ (id)performWithContainer:(id)a0 scope:(long long)a1 block:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)acquireCacheWithContainer:(id)a0 scope:(long long)a1 error:(id *)a2;
- (void)releaseCache:(id)a0;
- (void)_purgeRecordCachesForApplicationContainerURLs:(id)a0 expiryDate:(id)a1;
- (void)_schedulePurge;
- (id)_dbForContainer:(id)a0 error:(id *)a1;

@end
