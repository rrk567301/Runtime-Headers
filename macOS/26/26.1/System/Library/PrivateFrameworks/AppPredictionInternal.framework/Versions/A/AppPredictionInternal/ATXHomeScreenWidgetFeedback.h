@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_histogram;
}

- (double)tapEngagementRateForWidgetBundleId:(id)a0;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (id)initWithWidgetFeedbackHistogram:(id)a0;
- (void).cxx_destruct;
- (double)pseudoTapEngagementRateForWidgetBundleId:(id)a0;
- (id)categoryStringForFeedbackType:(unsigned long long)a0;
- (double)eventCountForWidgetBundleId:(id)a0 type:(unsigned long long)a1;
- (void)addEventForWidgetBundleId:(id)a0 type:(unsigned long long)a1 weight:(float)a2;
- (id)init;

@end
