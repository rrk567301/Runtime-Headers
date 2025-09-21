@class NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreSpace : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *spaceQueue;

+ (void)mobileAssetEstimateEvictable:(unsigned long long)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)mobileAssetSuspend:(unsigned long long)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)_issueSpaceCheckCompletion:(id /* block */)a0 withCompletionQueue:(id)a1 haveEnoughSpace:(char)a2 haveTotalRequired:(char)a3 freeSpaceAvailable:(unsigned long long)a4 error:(id)a5 releasingTransaction:(id)a6;
+ (void)_spaceCheckPhaseError:(id)a0 checkingFromBase:(id)a1 withIdentier:(id)a2 completion:(id /* block */)a3;
+ (void)_checkMinimumRequiredSpace:(unsigned long long)a0 purgingFromBase:(id)a1 userInitiated:(char)a2 totalRequiredFreeSpace:(unsigned long long)a3 freeSpaceAvailable:(unsigned long long)a4 checkAvailableSpaceTransaction:(id)a5 withCompletionQueue:(id)a6 completion:(id /* block */)a7;
+ (char)_isUserVolume:(id)a0;
+ (void)_issuePurgeCompletion:(id /* block */)a0 withCompletionQueue:(id)a1 haveEnoughSpace:(char)a2 amountPurged:(unsigned long long)a3 error:(id)a4 transaction:(id)a5 transactionName:(id)a6;
+ (void)_issuePurgeableCompletion:(id /* block */)a0 withCompletionQueue:(id)a1 haveEnoughSpace:(char)a2 amountPurgeable:(unsigned long long)a3 error:(id)a4 transaction:(id)a5 transactionName:(id)a6;
+ (void)_trackSpaceBegin:(id)a0;
+ (void)_trackSpaceBegin:(id)a0 withIdentifier:(id)a1;
+ (void)_trackSpaceEnd:(id)a0 withIdentifier:(id)a1 withResult:(long long)a2 withError:(id)a3;
+ (void)_trackSpaceEnd:(id)a0 withResult:(long long)a1 withError:(id)a2;
+ (void)cacheDeletePurge:(unsigned long long)a0 cacheDeleteUrgency:(int)a1 withCompletionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)cacheDeletePurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 completion:(id /* block */)a3;
+ (void)cacheDeletePurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 timeout:(int)a3 withCompletionQueue:(id)a4 completion:(id /* block */)a5;
+ (void)cacheDeletePurge:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (id)cacheDeleteUrgencyName:(int)a0;
+ (void)checkAvailableFreeSpace:(unsigned long long)a0 checkingFromBase:(id)a1 withIdentifier:(id)a2 userInitiated:(char)a3 completion:(id /* block */)a4;
+ (void)checkAvailableSpace:(unsigned long long)a0 allowPurgeWithUrgency:(int)a1 purgingFromBase:(id)a2 minimalRequiredFreeSpace:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)checkAvailableSpace:(unsigned long long)a0 allowPurgeWithUrgency:(int)a1 purgingFromBase:(id)a2 minimalRequiredFreeSpace:(unsigned long long)a3 withCompletionQueue:(id)a4 completion:(id /* block */)a5;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)a0 cacheDeleteUrgency:(int)a1 withCompletionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 timeout:(int)a3 additionalOptions:(id)a4 withCompletionQueue:(id)a5 completion:(id /* block */)a6;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)a0 fromBasePath:(id)a1 cacheDeleteUrgency:(int)a2 withCompletionQueue:(id)a3 completion:(id /* block */)a4;
+ (void)mobileAssetResumeWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
+ (id)sharedSpaceManager;

- (id)init;
- (void).cxx_destruct;

@end
