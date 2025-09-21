@class KNBuildRenderer, NSString, TSDTextureSet;

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer> {
    double _startTime;
    char _needsVideoAtStartTime;
    char _animationsPaused;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    id _ambientBuildStartCallbackTarget;
    SEL _ambientBuildCallbackSelector;
    char _needsToSendAmbientBuildStartCallback;
    char _needsToSendBuildEndCallback;
    TSDTextureSet *_posterImageTextureSet;
}

@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, nonatomic) char hasAmbientBuildStarted;
@property (readonly, nonatomic) char shouldActionBuildsStopAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopAnimations;
- (void)animate;
- (void)p_didStartVideo;
- (void)pauseAnimations;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (char)addAnimationsAtLayerTime:(double)a0;
- (void)forceRemoveAnimations;
- (void)interruptAndReset;
- (void)p_cancelVideoAtStartTime;
- (void)p_didFailWithError:(id)a0;
- (void)p_didStopVideo;
- (void)p_scheduleVideoAtStartTime;
- (void)p_showVideoAtStartTime;
- (void)p_startVideo;
- (void)p_stopVideo;
- (void)p_unscheduleVideoAtStartTime;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)registerForAmbientBuildStartCallback:(SEL)a0 target:(id)a1;
- (void)removeAnimationsAndFinish:(char)a0;
- (void)resumeAnimationsIfPaused;
- (void)updateAnimationsForLayerTime:(double)a0;

@end
