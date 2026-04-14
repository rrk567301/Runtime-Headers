@class _ATXAppLaunchCategoricalHistogram;

@interface ATXHeroAppFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_heroAppHistogram;
}

- (BOOL)shouldShowHeroAppPrediction:(id)a0;
- (void)addConfirmForHeroAppPredictionWithBundleId:(id)a0 weight:(float)a1;
- (double)_confirmsForHeroAppPrediction:(id)a0;
- (id)initWithHistogram:(id)a0;
- (void).cxx_destruct;
- (double)_rejectsForHeroAppPrediction:(id)a0;
- (id)init;
- (double)_engagementForHeroAppPrediction:(id)a0;
- (void)addRejectForHeroAppPredictionWithBundleId:(id)a0 weight:(float)a1;

@end
