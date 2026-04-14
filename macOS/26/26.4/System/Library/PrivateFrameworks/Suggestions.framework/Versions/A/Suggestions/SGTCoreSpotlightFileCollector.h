@class SGTCoreSpotlightFileCollectorReserved;

@interface SGTCoreSpotlightFileCollector : SGTBaseCollector {
    SGTCoreSpotlightFileCollectorReserved *_reserved2;
}

+ (id)dispatchQueueName;

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_currentQuery;
- (void)_setCurrentQuery:(id)a0;
- (BOOL)isQuerying;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (void)searchWithContext:(id)a0;

@end
