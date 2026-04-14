@class NSTimer;

@interface SOPowerSavvyTimer : NSTimer

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL repeats;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;

+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (void)requestTarget:(id)a0 performSelector:(SEL)a1 withObject:(id)a2 afterDelay:(double)a3;

- (void)setFireDate:(id)a0;
- (id)fireDate;
- (void)fire;
- (BOOL)isValid;
- (void)invalidate;
- (id)userInfo;
- (double)timeInterval;
- (void)dealloc;
- (void)_target:(id)a0;

@end
