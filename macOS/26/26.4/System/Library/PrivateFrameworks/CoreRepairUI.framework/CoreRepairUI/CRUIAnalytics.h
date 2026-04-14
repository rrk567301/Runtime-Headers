@class NSObject;
@protocol OS_dispatch_queue;

@interface CRUIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *serialAsyncQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendAnalyticsForRepairHistoryMismatch;
- (void)sendAsyncAnalyticsForEvent:(id)a0 moduleName:(id)a1;
- (void)sendAsyncAnalyticsForEventIfNeeded:(id)a0 moduleName:(id)a1;

@end
