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
- (id)_newSummarySharingEntryIDSManager;
- (id)periodicCountryMonitor;
- (id)serviceManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)nanoSyncManager;
- (id)rapportMessenger;
- (id)workoutCondenser;
- (id)_newRapportMessenger;
- (id)protectedDataOperationScheduler;
- (id)_newAWDSubmissionManager;
- (id)sharingEntryManager;
- (id)dataCollectionManager;
- (void)terminationCleanup;
- (id)_newDataCollectionManager;
- (id)fitnessMachineManager;
- (id)currentActivitySummaryHelper;
- (void).cxx_destruct;
- (id)associationManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)appSubscriptionManager;
- (id)workoutManager;
- (id)summarySharingEntryIDSManager;
- (id)ageGatingManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)notificationSyncManager;
- (id)activityCacheInterface;
- (id)tinkerPrivacyAlertCoordinator;
- (id)_newWorkoutManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)serviceConnectionManager;
- (id)_newNanoSyncManager;
- (id)sessionAssertionManager;
- (id)attachmentManager;
- (id)awdSubmissionManager;
- (id)alarmScheduler;

@end
