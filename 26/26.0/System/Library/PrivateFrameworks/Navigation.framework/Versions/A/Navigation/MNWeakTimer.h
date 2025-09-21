@class NSTimer;

@interface MNWeakTimer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly, nonatomic) NSTimer *timer;

+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_timerDidFire;
- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2;

@end
