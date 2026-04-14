@class SGTSpotlightCollectorReserved, SGTSpotlightCollectorWarmingQueryReserved;

@interface SGTSpotlightCollector : SGTBaseCollector {
    SGTSpotlightCollectorReserved *_reserved2;
    SGTSpotlightCollectorWarmingQueryReserved *_reservedWarming;
}

+ (id)dispatchQueueName;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)searchWithContext:(id)a0;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (void)_setCurrentQuery:(struct __MDQuery { } *)a0;
- (BOOL)isQuerying;
- (void)_queryDidFinish:(id)a0;
- (void)_obtainQueryResultsAndProcessFromQuery:(struct __MDQuery { } *)a0 intermediateResults:(BOOL)a1;
- (void)_forceQueryResults:(struct __MDQuery { } *)a0;
- (id)searchItemsFromQuery:(struct __MDQuery { } *)a0 context:(id)a1;
- (void)_warmingQueryDidFinish:(id)a0;
- (void)_discardWarmingQuery;
- (void)_launchWarmingQuery;
- (void)_reallyScheduleWarmingQuery;
- (void)_dispatchWarmingQuery;

@end
