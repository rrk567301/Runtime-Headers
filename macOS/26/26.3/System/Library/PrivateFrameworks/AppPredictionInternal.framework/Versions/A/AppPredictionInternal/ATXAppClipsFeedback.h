@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallRejectsNoDecay;
- (BOOL)shouldShowAppClips;
- (double)_overallAppClipsengagement;
- (double)_overallConfirmsNoDecay;
- (id)init;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallConfirms;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallRejects;

@end
