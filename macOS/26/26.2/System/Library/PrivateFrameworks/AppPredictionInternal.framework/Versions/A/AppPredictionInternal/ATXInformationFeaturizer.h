@class _ATXAppLaunchHistogram, ATXHomeScreenWidgetFeedback;

@interface ATXInformationFeaturizer : NSObject <ATXInformationFeaturizerProtocol> {
    _ATXAppLaunchHistogram *_appLaunchHistory;
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
}

- (double)_fetchFeedbackForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (void)_lazyLoadWidgetFeedbackHistogram;
- (id)featurizeTimelineWithWidgetBundleId:(id)a0 widgetKind:(id)a1 appBundleIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)featurizeInfoSuggestions:(id)a0;
- (double)_fetchAppLaunchPopularityForBundleIdentifier:(id)a0;
- (double)_fetchAppLaunchCountForBundleIdentifier:(id)a0;
- (void)_lazyLoadAppLaunchHistogram;
- (id)populateFeatureSetForWidgetBundleId:(id)a0 widgetKind:(id)a1 appBundleIdentifier:(id)a2;
- (id)_featureSetForSuggestion:(id)a0;

@end
