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

- (id)sharingEntryManager;
- (id)attachmentManager;
- (void)terminationCleanup;
- (id)tinkerPrivacyAlertCoordinator;
- (id)serviceConnectionManager;
- (id)nanoSyncManager;
- (id)workoutManager;
- (id)_newAWDSubmissionManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)serviceManager;
- (id)workoutCondenser;
- (id)protectedDataOperationScheduler;
- (id)ageGatingManager;
- (id)alarmScheduler;
- (id)_newRapportMessenger;
- (id)associationManager;
- (id)rapportMessenger;
- (id)notificationManager;
- (id)_newWorkoutManager;
- (id)summarySharingEntryIDSManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)_newNanoSyncManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)awdSubmissionManager;
- (id)fitnessMachineManager;
- (id)notificationSyncManager;
- (void).cxx_destruct;
- (id)sessionAssertionManager;
- (id)dataCollectionManager;
- (id)currentActivitySummaryHelper;
- (id)appSubscriptionManager;
- (id)_newSummarySharingEntryIDSManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newDataCollectionManager;
- (id)periodicCountryMonitor;
- (id)activityCacheInterface;

@end
