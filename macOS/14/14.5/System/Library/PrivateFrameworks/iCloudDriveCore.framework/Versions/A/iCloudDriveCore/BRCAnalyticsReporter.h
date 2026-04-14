@class BRCItemGlobalID, NSMutableDictionary, BRCMetricEndpoint, BRCSyncHealthReport, NSObject, BRCRTCReporter, BRCAppTelemetryConverter, BRCAccountSessionFPFS;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAnalyticsReporter : NSObject {
    BRCAccountSessionFPFS *_session;
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
+ (void)_loadCachedEnablement;
+ (id)_telemetryEnablementCacheURL;
+ (void)_updateCachedEnabled:(BOOL)a0;
+ (void)_updateCachedEnabled:(BOOL)a0 updateLastFetchDate:(BOOL)a1;
+ (void)cancelSyncConsistencyReportWithMountPath:(id)a0 queue:(id)a1;
+ (BOOL)isTelemetryReportingEnabled;

- (void).cxx_destruct;
- (void)submitEventMetric:(id)a0;
- (id)initWithSession:(id)a0;
- (BOOL)_shouldDeferForExistingSnapshot;
- (void)postReportForDefaultSubCategoryWithCategory:(unsigned long long)a0 telemetryTimeEvent:(id)a1;
- (void)didApplyItemInsideSharedItemID:(id)a0;
- (void)registerBackgroundXPCActivities;
- (void)_checkSyncConsistencyWithActivity:(id)a0;
- (void)_cleanupTimedOutEventMetrics:(id)a0;
- (void)_forgetEventMetrics:(id)a0;
- (void)_gatherAppTelemetryEventsWithActivity:(id)a0;
- (void)_handleApplySchedulerTimeoutWithActivity:(id)a0 telemetryEventType:(int)a1;
- (void)_reportSyncUpBackoffInfo;
- (BOOL)_resumePausedTreeConsistencyCheckOperationWithActivity:(id)a0;
- (void)_setupSyncConsistencyCancellationTimerWithActivity:(id)a0 session:(id)a1;
- (void)_setupSyncConsistencyDeferralTimerWithActivity:(id)a0;
- (void)_waitForApplySchedulerToBeIdleWithCompletion:(id /* block */)a0;
- (void)_withEventMetricsOfKind:(id)a0 accessor:(id /* block */)a1;
- (void)aggregateReportForAppTelemetryIdentifier:(int)a0 error:(id)a1;
- (void)aggregateReportForAppTelemetryIdentifier:(int)a0 itemID:(id)a1 zoneMangledID:(id)a2 advancedDataProtectionEnabled:(id)a3 error:(id)a4;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)a0 genID:(unsigned int)a1;
- (void)createUserDownloadEventForOperationID:(id)a0 isRecursive:(BOOL)a1 isForBackup:(BOOL)a2;
- (void)deleteMissingErrorThrottles;
- (void)dumpToContext:(id)a0;
- (void)forgetEventMetric:(id)a0;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)a0 genID:(unsigned int)a1 accessor:(id /* block */)a2;
- (void)lookupFSEventToSyncUpEventByItemID:(id)a0 accessor:(id /* block */)a1;
- (void)lookupUserDownloadEventByFileObjectID:(id)a0 accessor:(id /* block */)a1;
- (void)lookupUserDownloadEventByOperationID:(id)a0 accessor:(id /* block */)a1;

@end
