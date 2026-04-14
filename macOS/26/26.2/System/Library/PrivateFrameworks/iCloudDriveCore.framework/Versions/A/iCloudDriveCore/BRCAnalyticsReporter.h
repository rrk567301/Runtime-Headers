@class BRCItemGlobalID, NSMutableDictionary, BRCAccountSession, BRCMetricEndpoint, NSObject, BRCRTCReporter, BRCSyncHealthReport, BRCAppTelemetryConverter;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAnalyticsReporter : NSObject {
    BRCAccountSession *_session;
    long long _telemetryEventCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_waitOnIdleQueue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
    BRCItemGlobalID *_currentTelemetryItemGlobalID;
    NSObject<OS_dispatch_source> *_syncConsistencyDeferralTimer;
    NSObject<OS_dispatch_source> *_syncConsistencyCancellationTimer;
    BRCRTCReporter *_rtcReporter;
    BRCAppTelemetryConverter *_appTelemetryConvertor;
}

+ (void)_fetchIsTelemetryReportingEnabled;
+ (void)_updateCachedEnabled:(BOOL)a0;
+ (id)_telemetryEnablementCacheURL;
+ (void)_enumerateAggregatedTelemetryForSession:(id)a0 withBlock:(id /* block */)a1;
+ (void)cancelSyncConsistencyReportWithMountPath:(id)a0 queue:(id)a1;
+ (void)_loadCachedEnablement;
+ (void)_updateCachedEnabled:(BOOL)a0 updateLastFetchDate:(BOOL)a1;
+ (BOOL)isTelemetryReportingEnabled;
+ (id)_aggregatedTelemetryDescription:(id)a0;

- (void)dumpToContext:(id)a0;
- (void)submitEventMetric:(id)a0;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)a0 genID:(unsigned int)a1;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)a0 genID:(unsigned int)a1 accessor:(id /* block */)a2;
- (void)_cleanupTimedOutEventMetrics:(id)a0;
- (void)_setupSyncConsistencyDeferralTimerWithSystemTask:(id)a0;
- (id)initWithSession:(id)a0;
- (void)_gatherAppTelemetryEventsWithSystemTask:(id)a0;
- (void)postReportForDefaultSubCategoryWithCategory:(unsigned long long)a0 telemetryTimeEvent:(id)a1;
- (void)dumpDatabaseInfoToContext:(id)a0;
- (void)close;
- (void)lookupUserDownloadEventByFileObjectID:(id)a0 accessor:(id /* block */)a1;
- (void)aggregateReportForAppTelemetryIdentifier:(int)a0 itemID:(id)a1 zoneMangledID:(id)a2 enhancedDrivePrivacyEnabled:(id)a3 error:(id)a4;
- (void)lookupFSEventToSyncUpEventByItemID:(id)a0 accessor:(id /* block */)a1;
- (void)deleteMissingErrorThrottles;
- (void)_reportSyncUpBackoffInfo;
- (void).cxx_destruct;
- (void)didApplyItemInsideSharedItemID:(id)a0;
- (void)aggregateReportForAppTelemetryIdentifier:(int)a0 error:(id)a1;
- (void)forgetEventMetric:(id)a0;
- (BOOL)_shouldDeferForExistingSnapshot;
- (void)registerBackgroundXPCActivities;
- (void)lookupUserDownloadEventByOperationID:(id)a0 accessor:(id /* block */)a1;
- (void)_setupSyncConsistencyCancellationTimerWithSession:(id)a0;
- (void)_checkSyncConsistencyWithSystemTask:(id)a0;
- (BOOL)_resumePausedTreeConsistencyCheckOperationWithSystemTask:(id)a0;
- (void)_waitForApplySchedulerToBeIdleWithCompletion:(id /* block */)a0;
- (void)createUserDownloadEventForOperationID:(id)a0 isRecursive:(BOOL)a1 isForBackup:(BOOL)a2;
- (void)_handleApplySchedulerTimeoutWithSystemTask:(id)a0 telemetryEventType:(int)a1;
- (void)_forgetEventMetrics:(id)a0;
- (void)_withEventMetricsOfKind:(id)a0 accessor:(id /* block */)a1;

@end
