@class NSTimer, FBKUploadTask;
@protocol FBKSubmissionTimerDelegate;

@interface FBKSubmissionTimer : NSObject

@property (retain) NSTimer *timer;
@property (weak) id<FBKSubmissionTimerDelegate> delegate;
@property (retain) FBKUploadTask *task;
@property double givenInterval;

- (void)dealloc;
- (void).cxx_destruct;
- (double)currentInterval;
- (void)resetTimerWithInterval:(double)a0;
- (void)timerDidTick;
- (id)initWithDelegate:(id)a0 forTask:(id)a1 initialTimeout:(double)a2;

@end
