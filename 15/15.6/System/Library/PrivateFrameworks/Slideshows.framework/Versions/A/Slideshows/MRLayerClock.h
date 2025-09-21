@interface MRLayerClock : NSObject <MCPlugTiming> {
    double _internalTimeOffset;
    double _externalTimeForPauseInversion;
    unsigned long long _flags;
}

@property (nonatomic) double externalTime;
@property (nonatomic) double fullDuration;
@property (nonatomic) double containerTime;
@property (readonly, nonatomic) double containerDuration;
@property (readonly, nonatomic) long long currentLoopIndex;
@property (readonly) char _isPaused;
@property (readonly, nonatomic) char isPaused;
@property (readonly, nonatomic) char jumpedBackInTime;
@property (readonly, nonatomic) char isInPhaseIn;
@property (readonly, nonatomic) char isInPhaseOut;
@property (nonatomic) char parentIsPaused;
@property (readonly) char selfIsPaused;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double loopDuration;
@property (nonatomic) double phaseOutDuration;
@property (nonatomic) double numberOfLoops;

- (void)deactivate;
- (id)initWithPlug:(id)a0;
- (void)pauseAfter:(double)a0;
- (void)pauseOnNextUpdate;
- (void)reactivateWithPlug:(id)a0;
- (void)resumeAfter:(double)a0;
- (void)resumeOnNextUpdate;
- (void)syncToPlug:(id)a0;
- (void)updateForExternalTime:(double)a0;

@end
