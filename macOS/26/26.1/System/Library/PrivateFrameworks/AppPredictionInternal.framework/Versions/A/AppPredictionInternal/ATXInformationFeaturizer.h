@class _ATXAppLaunchHistogram, ATXHomeScreenWidgetFeedback;

@interface ATXInformationFeaturizer : NSObject <ATXInformationFeaturizerProtocol> {
    _ATXAppLaunchHistogram *_appLaunchHistory;
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
}

- (double)_fetchAppLaunchCountForBundleIdentifier:(id)a0;
- (id)_featureSetForSuggestion:(id)a0;
- (void)_lazyLoadAppLaunchHistogram;
- (double)_fetchAppLaunchPopularityForBundleIdentifier:(id)a0;
- (id)populateFeatureSetForWidgetBundleId:(id)a0 widgetKind:(id)a1 appBundleIdentifier:(id)a2;
- (id)featurizeInfoSuggestions:(id)a0;
- (double)_fetchFeedbackForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (void)_lazyLoadWidgetFeedbackHistogram;
- (id)featurizeTimelineWithWidgetBundleId:(id)a0 widgetKind:(id)a1 appBundleIdentifier:(id)a2;
- (void).cxx_destruct;

@end
