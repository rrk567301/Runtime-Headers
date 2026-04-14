@class PLEntryNotificationOperatorComposition, NSMutableSet, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLMonotonicTimer : NSObject

@property double interval;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ block;
@property (retain) NSMutableSet *canceledFireDates;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain, nonatomic) NSDate *monotonicFireDate;

+ (id)scheduledTimerWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
+ (id)debugScheduledTimerWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
+ (BOOL)debugInstance;

- (void)dealloc;
- (id)description;
- (void)fire;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)schedule;
- (void)reschedule;
- (id)initWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
- (void)_setMonotonicFireDate:(id)a0;
- (void)timerFiredForMonotonicFireDate:(id)a0;

@end
