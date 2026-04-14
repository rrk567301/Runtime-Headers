@interface NSBlockInvocation : NSInvocation

- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invokeSuper;
- (SEL)selector;
- (void)setSelector:(SEL)a0;

@end
