@class PLEntryNotificationOperatorComposition, NSMutableSet, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLMonotonicTimer : NSObject

@property double interval;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ block;
@property (retain) NSMutableSet *canceledFireDates;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain, nonatomic) NSDate *monotonicFireDate;

+ (id)debugScheduledTimerWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
+ (id)scheduledTimerWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
+ (BOOL)debugInstance;

- (void)fire;
- (id)initWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
- (void)schedule;
- (void)_cancel;
- (void)_setMonotonicFireDate:(id)a0;
- (void)timerFiredForMonotonicFireDate:(id)a0;
- (void)reschedule;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
