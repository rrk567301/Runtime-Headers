@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

- (void)registerCacheDeleteProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)queryPurgeableSpace:(int)a0 info:(id)a1;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void)activate;
- (id)purgeSpace:(int)a0 info:(id)a1;

@end
