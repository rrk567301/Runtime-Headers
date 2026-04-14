@interface SCTInvocation : NSObject {
    id mTarget;
    SEL mSelector;
}

- (SEL)selector;
- (void)dealloc;
- (id)description;
- (id)target;
- (void)setTarget:(id)a0;
- (void)setSelector:(SEL)a0;
- (id)initWithInvocation:(id)a0;
- (void)perform:(id)a0;
- (void)handleNotification:(id)a0;
- (id)initWithSelector:(SEL)a0 target:(id)a1;

@end
