@class UNUserNotificationCenter, NSString, WFSuggestionsWorkflowRunnerClient, PETScalarEventTracker, ATXEngagementRecordManager;

@interface ATXActionNotificationServer : NSObject <WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_notificationCenter;
    WFSuggestionsWorkflowRunnerClient *_currentWorkflowRunnerClient;
    PETScalarEventTracker *_removeTracker;
    PETScalarEventTracker *_notifyInitTracker;
    PETScalarEventTracker *_notifyErrorTracker;
    PETScalarEventTracker *_notifySuccessTracker;
    ATXEngagementRecordManager *_engagementRecordManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_requestIdentifierForBundleId:(id)a0;
+ (id)bundleIdFromRequestIdentifier:(id)a0;
+ (id)localizedContentBodyStringWithString:(id)a0 forAction:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (char)_isRTL;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(char)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)_setupNotifications;
- (void)postNotificationForProactiveSuggestion:(id)a0 blendingCacheUpdateUUID:(id)a1;
- (id)_actionKeyFromNotification:(id)a0;
- (id)_blendingCacheUpdateUUIDFromNotification:(id)a0;
- (id)_localizedStringForKey:(id)a0 defaultValue:(id)a1 languageCode:(id)a2;
- (void)_postNotificationForProactiveSuggestion:(id)a0 blendingCacheUpdateUUID:(id)a1;
- (void)_postTestNotification;
- (void)_postTestNotificationWithPredictionCount:(long long)a0;
- (void)_removeNotificationWithIdentifier:(id)a0 trackEvent:(char)a1;
- (void)_sendLockscreenEventToBiomeWithDate:(id)a0 eventType:(int)a1 blendingCacheId:(id)a2 suggestionIds:(id)a3;
- (id)_unarchiveProactiveSuggestionFromNotification:(id)a0;
- (unsigned long long)deliveredNotificationCount;
- (char)hasLockscreenPrediction;
- (void)postDemoOrDebugNotificationForATXAction:(id)a0;
- (void)postNotificationForATXAction:(id)a0;
- (id)proactiveSuggestionsCurrentlyOnLockscreen;
- (void)removeActionPredictionNotificationsMatchingAction:(id)a0;
- (void)removeAllActionPredictionNotificationsAndTrackEvent:(char)a0 recordFeedback:(char)a1;

@end
