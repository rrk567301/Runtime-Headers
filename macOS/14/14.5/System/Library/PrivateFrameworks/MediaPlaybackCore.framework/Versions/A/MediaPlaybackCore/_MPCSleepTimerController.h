@interface _MPCSleepTimerController : NSObject <MPCSleepTimerEngineObserverDelegate> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ fadeOutDuration;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ engineObserver;
}

@property (nonatomic, readonly) long long stopMode;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double fireDate;

- (void)didEndPlaybackForCurrentItem;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPlaybackEngine:(id)a0;
- (void)startSleepTimerForItemEnd;
- (void)startSleepTimerWithTimeRemaining:(double)a0;

@end
