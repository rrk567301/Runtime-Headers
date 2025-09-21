@interface QTHUDTimerNonRetainedTarget : NSObject {
    id _target;
    SEL _selector;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)invoke:(id)a0;

@end
