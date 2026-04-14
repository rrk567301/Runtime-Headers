@class NSString, ATXNotificationAndSuggestionDatabase, BPSPublisher;
@protocol BMBookmark;

@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol> {
    ATXNotificationAndSuggestionDatabase *_db;
    id<BMBookmark> _insertionBookmark;
    id<BMBookmark> _updateBookmark;
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

+ (void)setNeedsUpdateDatabaseForReason:(id)a0;

- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (void)updateDatabase;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (id)vacuumDatabase;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)analyze;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)_notificationDeliveryEventPublisher;
- (void)pruneDatabaseWithXPCActivity:(id)a0;
- (id)_notificationEventPublisher;
- (void)updateNotificationsWithNextAppLaunchDate:(id)a0 receivedDateAfter:(id)a1 forBundleId:(id)a2;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)currentActiveSuggestions;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (double)receiveTimeStampOfFirstNotification;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 createBookmark:(id)a1 updateBookmark:(id)a2 notificationEventPublisher:(id)a3 suggestionPublisher:(id)a4 suggestionInteractionEventPublisher:(id)a5 notificationGroupEventPublisher:(id)a6 notificationDeliveryEventPublisher:(id)a7;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)updateDatabaseForNotificationEvent:(id)a0;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)telemetryDataForNotificationWithBundleId:(id)a0 notificationId:(id)a1 recordTimestamp:(double)a2;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)_notificationGroupEventPublisher;
- (void)notificationAndSuggestionDatastorePerfMetricsLogging;
- (id)mergedInputEventStreamForInsert;
- (void).cxx_destruct;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)updateDatabaseForEvent:(id)a0;
- (id)_suggestionInteractionEventPublisher;
- (id)init;
- (id)resolutionsForNotifications:(id)a0;
- (id)allBundleIdsOfNotificationsOnLockscreen;
- (id)_serializeBookmark:(id)a0 withVersion:(unsigned long long)a1;
- (BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)mergedInputEventStreamForUpdates;
- (id)_fetchBookmarkFromDbWithName:(id)a0 version:(unsigned long long)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1;
- (id)numProminentActiveNotificationsPerThreadId;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1;
- (id)mostRecentActiveNotifications;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)deleteAllData;
- (void)updateDatabaseIfNeeded;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)numProminentActiveNotificationsPerBundleId;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (id)_suggestionPublisher;

@end
