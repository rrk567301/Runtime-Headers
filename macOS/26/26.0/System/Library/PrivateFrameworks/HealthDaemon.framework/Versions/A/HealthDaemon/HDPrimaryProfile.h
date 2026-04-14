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

- (id)notificationManager;
- (id)rapportMessenger;
- (id)currentActivitySummaryHelper;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)workoutManager;
- (id)sessionAssertionManager;
- (id)fitnessMachineManager;
- (id)summarySharingEntryIDSManager;
- (id)alarmScheduler;
- (id)workoutCondenser;
- (id)appSubscriptionManager;
- (id)associationManager;
- (id)_newNanoSyncManager;
- (id)_newWorkoutManager;
- (id)serviceManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)sharingEntryManager;
- (id)_newAWDSubmissionManager;
- (id)ageGatingManager;
- (id)_newSummarySharingEntryIDSManager;
- (id)notificationSyncManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)_newRapportMessenger;
- (void)terminationCleanup;
- (id)serviceConnectionManager;
- (id)protectedDataOperationScheduler;
- (id)activityCacheInterface;
- (id)dataCollectionManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)nanoSyncManager;
- (id)attachmentManager;
- (id)awdSubmissionManager;
- (id)periodicCountryMonitor;
- (id)_newDataCollectionManager;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;

@end
