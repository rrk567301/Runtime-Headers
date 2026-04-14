@class NSArray, NSXPCConnection, ATXUniversalBiomeUIStream, ATXProactiveSuggestionClient, NSObject, ATXEngagementRecordManager;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

@interface ATXAppDirectoryClient : NSObject <ATXAppDirectoryInterface> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    ATXProactiveSuggestionClient *_blendingClient;
    id<ATXPETEventTracker2Protocol> _tracker;
    ATXUniversalBiomeUIStream *_uiStream;
    ATXEngagementRecordManager *_engagementRecordManager;
}

@property (retain) NSArray *topAppsVisible;
@property (retain) NSArray *recentAppsVisible;
@property (nonatomic) BOOL didSendFeedbackDuringSession;

+ (id)sharedInstance;
+ (id)hardcodedAppCategoryMappings;
+ (id)_sortedAllOtherBundleIDsFromAllBundleIDs:(id)a0 allPlaceholderBundleIDs:(id)a1 hardcodedAppCategoryMappings:(id)a2;
+ (id)_sortedBundleIDsByCategoryWithHardcodedAppCategoryMappings:(id)a0;
+ (id)_sortedDefaultCategories;

- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)categoriesWithReply:(id /* block */)a0;
- (id)_removeRemoteAppsFromCategories:(id)a0;
- (id)_suggestionsPodDedupableBundleIds;
- (void)logDidLeaveAppDirectoryWithDate:(id)a0 appDirectoryResponse:(id)a1;
- (void)_logToBiome:(unsigned long long)a0 metadata:(id)a1;
- (void)logLaunchFromCategoryPreviewWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2 bundleID:(id)a3 bundleIndex:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (BOOL)appCurrentlyInstalled:(id)a0;
- (void)logCategoryExitWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;
- (void)logLaunchFromSearchWithDate:(id)a0 bundleID:(id)a1 bundleIndex:(unsigned long long)a2 searchQueryLength:(unsigned long long)a3 searchTab:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (void)logLaunchFromExpandedCategoryWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2 bundleID:(id)a3 bundleIndex:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (void)logDidEnterAppDirectoryWithDate:(id)a0;
- (id)_removeTrashedAppsFromCategories:(id)a0;
- (void)logOpenSearchWithDate:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)_logCaptureRateDiversionWithType:(int)a0;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)a0 shouldUseDefaultCategories:(BOOL)a1 reply:(id /* block */)a2;
- (id)getDirectoryResponseFromCacheWithMaxNumberOfAppsToPredict:(unsigned long long)a0;
- (void)_logCaptureRateCapture;
- (void)_logToBiomeWithEventType:(unsigned long long)a0 date:(id)a1 blendingCacheUUID:(id)a2 shownSuggestionIds:(id)a3 engagedSuggestionIds:(id)a4 categoryID:(id)a5 categoryIndex:(id)a6 bundleId:(id)a7 bundleIndex:(id)a8 searchQueryLength:(id)a9 searchTab:(id)a10 bundleIdInTopAppsVisible:(id)a11 userLaunchedAppBeforeLeaving:(id)a12;
- (void)predictedAppsAndRecentAppsWithShouldUseDefaultCategories:(BOOL)a0 reply:(id /* block */)a1;
- (void)logCloseSearchWithDate:(id)a0;
- (id)_updateCategories:(id)a0 byConsideringSuggestedApps:(id)a1;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)_addEngagedSuggestionToERM:(id)a0;
- (void)_updateTopAppsVisibilityWithCategories:(id)a0;
- (void)categoriesWithShouldUseDefault:(BOOL)a0 reply:(id /* block */)a1;
- (void)_resetSessionState;
- (void)notifyBookmarksDidChange;
- (id)_hiddenAppsFromCache;
- (void)logCategoryExpansionWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;
- (void)dealloc;

@end
