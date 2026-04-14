@class NSTimer;

@interface SCRSimpleTimer : NSObject

@property (retain, nonatomic) NSTimer *_timer;
@property (weak, nonatomic) id _target;
@property (nonatomic) SEL _selector;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)_fire;
- (void)dispatchAfterDelay:(double)a0;

@end
