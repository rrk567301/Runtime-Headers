@class HMFTimer, NSMutableDictionary, NSString, HMDHAPAccessoryServerIPStore, NSObject;
@protocol OS_dispatch_queue, HMFTimerProvider;

@interface HMDHAPAccessoryServerIPCache : NSObject <NSObject, HMFTimerDelegate, HAPAccessoryServerIPCache>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDHAPAccessoryServerIPStore *store;
@property (retain, nonatomic) NSMutableDictionary *dirtyCache;
@property (retain) HMFTimer *flushTimer;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_startFlushTimer;
- (void)deleteDataForDevice:(id)a0;
- (void)retrieveCachedData:(id /* block */)a0;
- (void)saveData:(id)a0 forDevice:(id)a1;
- (void)_deleteDataForDevice:(id)a0;
- (void)_flushDirtyCache;
- (id)_readCache;
- (void)_retrieveCachedData:(id /* block */)a0;
- (void)_saveData:(id)a0 forDevice:(id)a1;
- (void)_writeCache:(id)a0;
- (id)initWithQueue:(id)a0 store:(id)a1 timerProvider:(id)a2;

@end
