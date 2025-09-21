@class ATXNotificationManagementMAConstants;

@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants *_mobileAssetConstants;
}

- (BOOL)migrate;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (long long)latestVersion;
- (void)updateNotificationFromEvent:(id)a0;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)updateSuggestionFromEvent:(id)a0;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)telemetryDataForNotificationWithBundleId:(id)a0 notificationId:(id)a1 recordTimestamp:(double)a2;
- (BOOL)_runMigrationSteps:(id)a0;
- (struct ATXNotificationAndSuggestionDatastorePerfMetrics { long long x0; long long x1; })notificationAndSuggestionDatastorePerfMetrics;
- (id)_countNotificationsPerAppWithFilters:(id)a0 stmtBinder:(id /* block */)a1;
- (id)numProminentActiveNotificationsByGroupingColumn:(id)a0;
- (id)allBundleIdsOfNotificationsOnLockscreen;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (void)updateNotificationsWithNextAppLaunchDate:(id)a0 receivedDateAfter:(id)a1 forBundleId:(id)a2;
- (id)vacuumDatabase;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1 positiveEngagementEnums:(id)a2;
- (void)setAllNotificationsToClearedExceptProminent;
- (id)init;
- (BOOL)_anyColumnWithNameFromColumnNames:(id)a0 existsOnTable:(id)a1;
- (void)updateNotificationUIForNotifications:(id)a0 nextUI:(unsigned long long)a1;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (void)setAllNotificationsToModified;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (BOOL)_hasColumnOnTable:(id)a0 named:(id)a1;
- (void)insertNotificationFromEvent:(id)a0 deliveryMethod:(long long)a1 modeIdentifier:(id)a2 deliveryReason:(id)a3;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)currentActiveSuggestions;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)prepAndRunQuery:(id)a0 batchSize:(long long)a1 XPCActivity:(id)a2 onPrep:(id /* block */)a3 onRow:(id /* block */)a4 onError:(id /* block */)a5;
- (id)mostRecentActiveNotifications;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (void)insertSuggestion:(id)a0;
- (double)receiveTimeStampOfFirstNotification;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)deleteAllData;
- (id)getBookmarkDataFromName:(id)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)analyze;
- (void)setBookmarkData:(id)a0 forName:(id)a1;
- (id)_makeNotificationTelemetryQueryResultFromDatabaseResult:(id)a0;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)resolutionsForNotifications:(id)a0;
- (void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)a0 XPCActivity:(id)a1;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (void).cxx_destruct;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (BOOL)_hasIndexNamed:(id)a0;

@end
