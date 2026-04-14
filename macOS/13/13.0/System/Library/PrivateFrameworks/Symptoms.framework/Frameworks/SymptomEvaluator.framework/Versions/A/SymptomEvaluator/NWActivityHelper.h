@class AnalyticsWorkspace, NSObject;
@protocol OS_dispatch_queue;

@interface NWActivityHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsWorkspace *_workspace;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)analyticsWorkspace;
- (void)startNWActivitySuperMetricProcessing;
- (void)cleanOutNWActivityMetrics;
- (void)purgeOldNWActivityMetrics;
- (void)retrieveNWActivityMetricsForActivity:(id)a0 completion:(id /* block */)a1;
- (id)_createDictionarySupermetricForActivity:(id)a0 withContext:(id)a1;
- (void)_fetchMetricsForActivity:(id)a0 maxChildDepth:(unsigned char)a1 destinationArray:(id)a2;
- (id)_fetchMetricsForUUID:(id)a0;
- (void)_deleteAllMetrics;
- (void)_deleteOldMetrics;
- (void)_deleteAllFragmentsMatchingPredicate:(id)a0;
- (void)_deleteNWActivityFragment:(id)a0 fromContext:(id)a1;
- (void)_garbageCollectNWActivityMetrics;
- (id)_fetchActivitiesWithPredicate:(id)a0 batch:(BOOL)a1;
- (id)_findNWActivityMetricsForUploading;
- (id)_fetchFragmentsForUUID:(id)a0 fromContext:(id)a1 withError:(id *)a2;
- (id)_fetchChildrenForUUID:(id)a0 fromContext:(id)a1 withError:(id *)a2;
- (id)_createSupermetricFromFragments:(id)a0 forMetricUUID:(id)a1;
- (void)_uploadCompleteNWActivityMetrics;
- (void)sendReportToMetricStream:(id)a0;
- (BOOL)shouldSendMetricStream;

@end
