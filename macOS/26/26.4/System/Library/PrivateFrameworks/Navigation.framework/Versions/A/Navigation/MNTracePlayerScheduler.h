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

- (void)resume;
- (void)pause;
- (void)_timerFired;
- (void)_update;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)a0;

@end
