@class HDHealthServiceManager, HDNotificationSyncManager, HDNanoSyncManager, HDFitnessMachineManager, HDRestorableAlarmScheduler, HDWorkoutCondenser, HDWorkoutManager, HDAWDSubmissionManager, HDProtectedDataOperationScheduler, HDTinkerPrivacyAlertCoordinator, HDNotificationManager, HDSummarySharingEntryManager, HDAssociationManager, HDDemoDataManager, HDAssertionManager, HDDataCollectionManager, HDAppSubscriptionManager, HDCurrentActivitySummaryHelper, HDAgeGatingManager, HDServiceConnectionManager, HDPeriodicCountryMonitor, HDAttachmentManager, HDRapportMessenger, HDSummarySharingEntryIDSManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDNotificationSyncManager *_notificationSyncManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDProtectedDataOperationScheduler *_protectedDataOperationScheduler;
    HDRapportMessenger *_rapportMessenger;
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
    HDAssociationManager *_associationManager;
}

- (id)serviceManager;
- (id)activityCacheInterface;
- (id)_newWorkoutManager;
- (id)notificationSyncManager;
- (id)notificationManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)ageGatingManager;
- (id)sharingEntryManager;
- (id)_newSummarySharingEntryIDSManager;
- (id)currentActivitySummaryHelper;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)workoutManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)dataCollectionManager;
- (id)_newRapportMessenger;
- (id)fitnessMachineManager;
- (id)attachmentManager;
- (void)terminationCleanup;
- (id)summarySharingEntryIDSManager;
- (void).cxx_destruct;
- (id)serviceConnectionManager;
- (id)awdSubmissionManager;
- (id)_newDataCollectionManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)protectedDataOperationScheduler;
- (id)associationManager;
- (id)appSubscriptionManager;
- (id)_newNanoSyncManager;
- (id)rapportMessenger;
- (id)alarmScheduler;
- (id)nanoSyncManager;
- (id)_newAWDSubmissionManager;
- (id)sessionAssertionManager;
- (id)periodicCountryMonitor;
- (id)tinkerPrivacyAlertCoordinator;
- (id)workoutCondenser;

@end
