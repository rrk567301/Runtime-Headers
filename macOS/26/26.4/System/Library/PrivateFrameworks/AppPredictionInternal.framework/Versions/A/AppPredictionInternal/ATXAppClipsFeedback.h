@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (BOOL)shouldShowAppClips;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (double)_overallRejectsNoDecay;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallAppClipsengagement;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (void).cxx_destruct;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (id)init;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallRejects;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)_overallConfirms;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallConfirmsNoDecay;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;

@end
