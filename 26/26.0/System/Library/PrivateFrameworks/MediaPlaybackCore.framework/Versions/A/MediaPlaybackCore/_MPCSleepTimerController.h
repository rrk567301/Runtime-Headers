@interface _MPCSleepTimerController : NSObject <MPCSleepTimerEngineObserverDelegate> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ fadeOutDuration;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ engineObserver;
    void /* unknown type, empty encoding */ observedChapter;
}

@property (nonatomic, readonly) long long stopMode;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double fireDate;

- (void)reset;
- (id)initWithPlaybackEngine:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeItemElapsedTime:(double)a0;
- (void)didEndPlaybackForCurrentItem;
- (void)startSleepTimerForChapterEnd;
- (void)startSleepTimerForItemEnd;
- (void)startSleepTimerWithTimeRemaining:(double)a0;

@end
