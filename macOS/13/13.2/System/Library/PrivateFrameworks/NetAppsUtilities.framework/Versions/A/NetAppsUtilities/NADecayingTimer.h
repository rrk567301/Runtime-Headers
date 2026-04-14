@class NSTimer, NSDate;

@interface NADecayingTimer : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) unsigned long long minimumUnit;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSTimer *timer;

+ (id)scheduledTimerWithReferenceDate:(id)a0 minimumUnit:(unsigned long long)a1 block:(id /* block */)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_nextFireDate;
- (id)initWithReferenceDate:(id)a0 minimumUnit:(unsigned long long)a1 block:(id /* block */)a2;
- (void)_scheduleNextTimer;
- (void)_timerEvent;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)a0;

@end
