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

- (id)initWithPlaybackEngine:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)didChangeItemElapsedTime:(double)a0;
- (void)didEndPlaybackForCurrentItem;
- (void)startSleepTimerForChapterEnd;
- (void)startSleepTimerForItemEnd;
- (void)startSleepTimerWithTimeRemaining:(double)a0;

@end
