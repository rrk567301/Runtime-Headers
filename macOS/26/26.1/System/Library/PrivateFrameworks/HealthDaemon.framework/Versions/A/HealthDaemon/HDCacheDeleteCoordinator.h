@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

- (void)activate;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void).cxx_destruct;
- (id)purgeSpace:(int)a0 info:(id)a1;
- (id)queryPurgeableSpace:(int)a0 info:(id)a1;
- (void)registerCacheDeleteProvider:(id)a0;
- (id)init;

@end
