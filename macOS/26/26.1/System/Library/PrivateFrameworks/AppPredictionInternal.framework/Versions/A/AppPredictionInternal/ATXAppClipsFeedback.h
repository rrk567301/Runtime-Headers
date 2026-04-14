@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (double)_overallAppClipsengagement;
- (double)_overallRejectsNoDecay;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (BOOL)shouldShowAppClips;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallRejects;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (void).cxx_destruct;
- (double)_overallConfirms;
- (double)_overallConfirmsNoDecay;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (id)init;

@end
