@interface NSBlockInvocation : NSInvocation

- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invokeSuper;

@end
