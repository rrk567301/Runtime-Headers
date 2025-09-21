@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject

@property (readonly, nonatomic) CMSedentaryTimer_Internal *_internal;

+ (char)isAvailable;

- (void)dealloc;
- (id)init;
- (char)isActive;
- (void)queryAlarmDataSince:(id)a0 withHandler:(id /* block */)a1;
- (void)registerForAlarmsWithHandler:(id /* block */)a0;
- (void)startTimerWithStartTime:(id)a0 periodInterval:(double)a1 reminderInterval:(double)a2 autoReschedule:(char)a3 handler:(id /* block */)a4;
- (void)stopTimerWithHandler:(id /* block */)a0;

@end
