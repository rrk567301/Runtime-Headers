@interface SCTInvocation : NSObject {
    id mTarget;
    SEL mSelector;
}

- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (id)initWithInvocation:(id)a0;
- (void)handleNotification:(id)a0;
- (void)setTarget:(id)a0;
- (id)description;
- (void)perform:(id)a0;
- (void)dealloc;
- (id)target;
- (id)initWithSelector:(SEL)a0 target:(id)a1;

@end
