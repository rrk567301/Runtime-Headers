@class CADisplayLink;

@interface PXCADisplayLink : PXDisplayLink {
    CADisplayLink *_displayLink;
    double _updateCycleTimestamp;
    double _updateCycleTargetTimestamp;
    unsigned long long _frameRateRangeType;
}

@property (nonatomic) BOOL isHighFrameRateActive;

+ (BOOL)supportsSpecificScreen;
+ (BOOL)highFramerateRequiresReasonAndRange;

- (void)invalidate;
- (void)setPaused:(BOOL)a0;
- (double)duration;
- (BOOL)paused;
- (unsigned int)highFrameRateReason;
- (double)currentMediaTime;
- (double)targetTimestamp;
- (void).cxx_destruct;
- (id)description;
- (double)timestamp;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (long long)preferredFramesPerSecond;
- (id)queue;
- (void)_tick:(id)a0;
- (void)dealloc;
- (unsigned long long)frameRateRangeType;
- (double)resolvedDuration;
- (void)setFrameRateRangeType:(unsigned long long)a0;
- (void)_addToRunLoop;
- (void)_updateIsHighFrameRateActive;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 screen:(id)a5 queue:(id)a6;

@end
