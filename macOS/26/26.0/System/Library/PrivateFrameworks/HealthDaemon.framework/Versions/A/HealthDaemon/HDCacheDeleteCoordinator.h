@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

- (id)purgeSpace:(int)a0 info:(id)a1;
- (id)init;
- (id)queryPurgeableSpace:(int)a0 info:(id)a1;
- (void)activate;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void).cxx_destruct;
- (void)registerCacheDeleteProvider:(id)a0;

@end
