@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (BOOL)shouldShowAppClips;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallAppClipsengagement;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallRejects;
- (void).cxx_destruct;
- (double)_overallConfirms;
- (double)_overallRejectsNoDecay;
- (double)_overallConfirmsNoDecay;
- (id)init;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;

@end
