@class ATXWatchFaceConfigurationCollector, ATXComplicationSuggestionParameters, BMStream, ATXHomeScreenConfigCache;

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}

- (id)_scoredComplicationBundleIdsForModularSet:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4 complicationBundleIdCountsOnWatch:(id)a5;
- (id)init;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)scoredComplicationBundleIdsForModularSet:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (void).cxx_destruct;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4;
- (id)inputDescriptionForSignal:(id)a0 complicationAppBundleIds:(id)a1;

@end
