@class NSTimer;

@interface SCRSimpleTimer : NSObject

@property (retain, nonatomic) NSTimer *_timer;
@property (weak, nonatomic) id _target;
@property (nonatomic) SEL _selector;

- (void)cancel;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)_fire;
- (void).cxx_destruct;
- (void)dispatchAfterDelay:(double)a0;

@end
