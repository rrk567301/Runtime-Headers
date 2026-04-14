@class ATXWatchFaceConfigurationCollector, ATXComplicationSuggestionParameters, BMStream, ATXHomeScreenConfigCache;

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}

- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4;
- (id)init;
- (id)inputDescriptionForSignal:(id)a0 complicationAppBundleIds:(id)a1;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (void).cxx_destruct;
- (id)scoredComplicationBundleIdsForModularSet:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)_scoredComplicationBundleIdsForModularSet:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 bundleIdToPriors:(id)a3 widgetAppBundleIdsOnHomeScreen:(id)a4 complicationBundleIdCountsOnWatch:(id)a5;

@end
