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

- (void)pause;
- (void)_timerFired;
- (void)_update;
- (void)dealloc;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)addTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)a0;

@end
