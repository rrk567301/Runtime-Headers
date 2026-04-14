@class ATXNotificationManagementMAConstants;

@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants *_mobileAssetConstants;
}

- (long long)latestVersion;
- (BOOL)migrate;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)updateNotificationFromEvent:(id)a0;
- (id)vacuumDatabase;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)analyze;
- (void)setAllNotificationsToModified;
- (id)_countNotificationsPerAppWithFilters:(id)a0 stmtBinder:(id /* block */)a1;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (void)prepAndRunQuery:(id)a0 batchSize:(long long)a1 XPCActivity:(id)a2 onPrep:(id /* block */)a3 onRow:(id /* block */)a4 onError:(id /* block */)a5;
- (id)numProminentActiveNotificationsByGroupingColumn:(id)a0;
- (void)updateSuggestionFromEvent:(id)a0;
- (id)getBookmarkDataFromName:(id)a0;
- (void)updateNotificationUIForNotifications:(id)a0 nextUI:(unsigned long long)a1;
- (void)updateNotificationsWithNextAppLaunchDate:(id)a0 receivedDateAfter:(id)a1 forBundleId:(id)a2;
- (void)insertSuggestion:(id)a0;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)currentActiveSuggestions;
- (void)setAllNotificationsToClearedExceptProminent;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1 positiveEngagementEnums:(id)a2;
- (double)receiveTimeStampOfFirstNotification;
- (BOOL)_hasIndexNamed:(id)a0;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (BOOL)_anyColumnWithNameFromColumnNames:(id)a0 existsOnTable:(id)a1;
- (void)setBookmarkData:(id)a0 forName:(id)a1;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)telemetryDataForNotificationWithBundleId:(id)a0 notificationId:(id)a1 recordTimestamp:(double)a2;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (BOOL)_hasColumnOnTable:(id)a0 named:(id)a1;
- (id)_makeNotificationTelemetryQueryResultFromDatabaseResult:(id)a0 queryTimeInterval:(double)a1;
- (void).cxx_destruct;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)init;
- (id)resolutionsForNotifications:(id)a0;
- (id)allBundleIdsOfNotificationsOnLockscreen;
- (id)mostRecentActiveNotifications;
- (struct ATXNotificationAndSuggestionDatastorePerfMetrics { long long x0; long long x1; })notificationAndSuggestionDatastorePerfMetrics;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)a0 XPCActivity:(id)a1;
- (id)deleteAllData;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)_makeNotificationTelemetryQueryResultFromDatabaseResult:(id)a0;
- (void)insertNotificationFromEvent:(id)a0 deliveryMethod:(long long)a1 modeIdentifier:(id)a2 deliveryReason:(id)a3;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;

@end
