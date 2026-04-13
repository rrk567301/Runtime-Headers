@interface SCTInvocation : NSObject {
    id mTarget;
    SEL mSelector;
}

- (void)dealloc;
- (id)description;
- (SEL)selector;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setSelector:(SEL)a0;
- (id)initWithInvocation:(id)a0;
- (void)perform:(id)a0;
- (void)handleNotification:(id)a0;
- (id)initWithSelector:(SEL)a0 target:(id)a1;

@end
