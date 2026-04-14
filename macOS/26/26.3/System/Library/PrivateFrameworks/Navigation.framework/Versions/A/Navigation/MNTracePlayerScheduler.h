@class MNTracePlayerTimelineStream, NSMutableArray, MNDispatchTimer;
@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject {
    MNDispatchTimer *_timer;
    double _lastTimerScheduleTime;
    NSMutableArray *_timelineStreams;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}

@property (weak, nonatomic) id<MNTracePlayerSchedulerDelegate> delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;

- (void)_timerFired;
- (void)_update;
- (void)pause;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)a0;

@end
