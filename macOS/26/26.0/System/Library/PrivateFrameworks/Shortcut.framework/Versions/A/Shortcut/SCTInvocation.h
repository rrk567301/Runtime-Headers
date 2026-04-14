@interface SCTInvocation : NSObject {
    id mTarget;
    SEL mSelector;
}

- (void)setSelector:(SEL)a0;
- (SEL)selector;
- (void)handleNotification:(id)a0;
- (void)dealloc;
- (id)initWithInvocation:(id)a0;
- (id)target;
- (id)description;
- (void)setTarget:(id)a0;
- (void)perform:(id)a0;
- (id)initWithSelector:(SEL)a0 target:(id)a1;

@end
