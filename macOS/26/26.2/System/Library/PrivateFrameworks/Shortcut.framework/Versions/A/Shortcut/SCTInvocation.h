@interface SCTInvocation : NSObject {
    id mTarget;
    SEL mSelector;
}

- (void)perform:(id)a0;
- (void)setTarget:(id)a0;
- (id)initWithInvocation:(id)a0;
- (id)target;
- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (void)handleNotification:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithSelector:(SEL)a0 target:(id)a1;

@end
