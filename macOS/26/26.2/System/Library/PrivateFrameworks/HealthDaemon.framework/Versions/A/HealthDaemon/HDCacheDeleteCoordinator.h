@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

- (void)registerCacheDeleteProvider:(id)a0;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)queryPurgeableSpace:(int)a0 info:(id)a1;
- (id)init;
- (id)purgeSpace:(int)a0 info:(id)a1;

@end
