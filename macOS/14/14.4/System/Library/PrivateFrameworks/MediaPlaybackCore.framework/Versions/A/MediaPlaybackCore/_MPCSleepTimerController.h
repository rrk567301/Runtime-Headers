@interface _MPCSleepTimerController : NSObject <_MPCPlaybackEngineEventObserving> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ fadeOutDuration;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ mode;
}

@property (nonatomic, readonly) long long stopMode;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double fireDate;

- (void)engine:(id)a0 didEndPlaybackOfItem:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPlaybackEngine:(id)a0;
- (void)startSleepTimerForItemEnd;
- (void)startSleepTimerWithTimeRemaining:(double)a0;

@end
