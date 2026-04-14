@class HDAWDSubmissionManager, HDNotificationManager, HDAgeGatingManager, HDWorkoutManager, HDSummarySharingEntryIDSManager, HDAttachmentManager, HDSummarySharingEntryManager, HDAssertionManager, HDCurrentActivitySummaryHelper, HDTinkerPrivacyAlertCoordinator, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDDemoDataManager, HDDataCollectionManager, HDWorkoutCondenser, HDHealthServiceManager, HDAppSubscriptionManager, HDFitnessMachineManager, HDPeriodicCountryMonitor, HDNanoSyncManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDAttachmentManager *_attachmentManager;
}

- (void).cxx_destruct;
- (id)notificationManager;
- (id)serviceManager;
- (id)alarmScheduler;
- (id)attachmentManager;
- (id)activityCacheManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (void)terminationCleanup;
- (id)ageGatingManager;
- (id)appSubscriptionManager;
- (id)awdSubmissionManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)workoutManager;
- (id)workoutCondenser;
- (id)fitnessMachineManager;
- (id)nanoSyncManager;
- (id)periodicCountryMonitor;
- (id)serviceConnectionManager;
- (id)sessionAssertionManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)sharingEntryManager;
- (id)summarySharingEntryIDSManager;
- (id)_newAWDSubmissionManager;
- (id)_newNanoSyncManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newWorkoutManager;
- (void)unitTest_setServiceManager:(id)a0;
- (void)unitTest_setNanoSyncManager:(id)a0;

@end
