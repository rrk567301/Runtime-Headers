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
- (id)workoutManager;
- (id)_newAWDSubmissionManager;
- (id)attachmentManager;
- (id)_newDataCollectionManager;
- (id)periodicCountryMonitor;
- (id)alarmScheduler;
- (id)nanoSyncManager;
- (id)protectedDataOperationScheduler;
- (id)appSubscriptionManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newSummarySharingEntryIDSManager;
- (id)_newRapportMessenger;
- (id)ageGatingManager;
- (id)serviceConnectionManager;
- (id)awdSubmissionManager;
- (id)sharingEntryManager;
- (id)currentActivitySummaryHelper;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)serviceManager;
- (void).cxx_destruct;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)_newWorkoutManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)associationManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)rapportMessenger;
- (id)activityCacheInterface;
- (id)notificationSyncManager;
- (id)summarySharingEntryIDSManager;
- (id)workoutCondenser;
- (id)_newNanoSyncManager;
- (id)dataCollectionManager;
- (id)fitnessMachineManager;
- (id)sessionAssertionManager;
- (void)terminationCleanup;

@end
