@class SGTCoreSpotlightFileCollectorReserved;

@interface SGTCoreSpotlightFileCollector : SGTBaseCollector {
    SGTCoreSpotlightFileCollectorReserved *_reserved2;
}

+ (id)dispatchQueueName;

- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (id)_currentQuery;
- (void)_setCurrentQuery:(id)a0;
- (BOOL)isQuerying;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (void)searchWithContext:(id)a0;

@end
