@class NSObject;
@protocol OS_dispatch_queue;

@interface CRUIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *serialAsyncQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendAnalyticsForRepairHistoryMismatch;
- (void)sendAsyncAnalyticsForEvent:(id)a0 moduleName:(id)a1;
- (void)sendAsyncAnalyticsForEventIfNeeded:(id)a0 moduleName:(id)a1;

@end
