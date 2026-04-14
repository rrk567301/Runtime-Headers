@class NSArray, ATXGenericFileBasedCache, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXPosterConfigurationCache : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_outputQueue;
}

@property (readonly, copy, nonatomic) NSArray *configurations;

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)_updateLastActiveDatesWithConfigurations:(id)a0;
- (void)updateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)_fetchConfigurationsReadingFromCacheIfNecessaryWithGuardedData:(id)a0;
- (id)initWithPath:(id)a0;
- (id)init;

@end
