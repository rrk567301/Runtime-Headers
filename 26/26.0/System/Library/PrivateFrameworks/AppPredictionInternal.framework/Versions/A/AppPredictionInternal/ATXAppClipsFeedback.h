@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallRejects;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (id)init;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallConfirmsNoDecay;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallRejectsNoDecay;
- (BOOL)shouldShowAppClips;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallConfirms;
- (double)_overallAppClipsengagement;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (void).cxx_destruct;

@end
