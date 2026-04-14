@interface NSBlockInvocation : NSInvocation

- (void)setSelector:(SEL)a0;
- (SEL)selector;
- (void)invokeSuper;
- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
