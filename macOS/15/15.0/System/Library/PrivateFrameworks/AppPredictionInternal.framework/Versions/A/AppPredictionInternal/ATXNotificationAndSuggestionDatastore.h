@class NSString, ATXNotificationAndSuggestionDatabase, BPSPublisher;
@protocol BMBookmark;

@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol> {
    ATXNotificationAndSuggestionDatabase *_db;
    id<BMBookmark> _bookmark;
    BPSPublisher *_notificationEventPublisher;
    BPSPublisher *_suggestionPublisher;
    BPSPublisher *_suggestionInteractionEventPublisher;
    BPSPublisher *_notificationGroupEventPublisher;
    BPSPublisher *_notificationDeliveryEventPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)analyze;
- (id)_notificationEventPublisher;
- (id)deleteAllData;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)_fetchBookmarkFromDb;
- (id)_notificationDeliveryEventPublisher;
- (id)_notificationGroupEventPublisher;
- (id)_serializeBookmark:(id)a0;
- (id)_suggestionInteractionEventPublisher;
- (id)_suggestionPublisher;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)allBundleIdsOfNotificationsOnLockscreen;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)currentActiveSuggestions;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4 notificationGroupEventPublisher:(id)a5;
- (id)mergedInputEventStream;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)mostRecentActiveNotifications;
- (void)notificationAndSuggestionDatastorePerfMetricsLogging;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)numProminentActiveNotificationsPerBundleId;
- (id)numProminentActiveNotificationsPerThreadId;
- (void)pruneDatabaseWithXPCActivity:(id)a0;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (double)receiveTimeStampOfFirstNotification;
- (id)resolutionsForNotifications:(id)a0;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)telemetryDataForNotificationWithBundleId:(id)a0 notificationId:(id)a1 recordTimestamp:(double)a2;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)updateDatabase;
- (void)updateDatabaseForEvent:(id)a0;
- (void)updateDatabaseForNotificationEvent:(id)a0;
- (id)vacuumDatabase;

@end
