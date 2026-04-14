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

- (void)schedule;
- (void)fire;
- (void)timerFiredForMonotonicFireDate:(id)a0;
- (void)dealloc;
- (void)_cancel;
- (void)cancel;
- (void)reschedule;
- (id)description;
- (id)initWithMonotonicFireDate:(id)a0 withInterval:(double)a1 withQueue:(id)a2 withBlock:(id /* block */)a3;
- (void)_setMonotonicFireDate:(id)a0;
- (void).cxx_destruct;

@end
