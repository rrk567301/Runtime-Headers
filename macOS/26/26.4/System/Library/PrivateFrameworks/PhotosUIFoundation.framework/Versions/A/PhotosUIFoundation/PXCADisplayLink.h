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

- (BOOL)paused;
- (void)setPaused:(BOOL)a0;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (unsigned int)highFrameRateReason;
- (double)timestamp;
- (double)currentMediaTime;
- (double)duration;
- (id)queue;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (long long)preferredFramesPerSecond;
- (void)_tick:(id)a0;
- (double)targetTimestamp;
- (void)dealloc;
- (unsigned long long)frameRateRangeType;
- (double)resolvedDuration;
- (void)setFrameRateRangeType:(unsigned long long)a0;
- (void)_addToRunLoop;
- (void)_updateIsHighFrameRateActive;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 screen:(id)a5 queue:(id)a6;

@end
