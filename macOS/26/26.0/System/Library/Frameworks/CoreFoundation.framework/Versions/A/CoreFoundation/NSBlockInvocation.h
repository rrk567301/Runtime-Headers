@interface NSBlockInvocation : NSInvocation

- (void)invoke;
- (void)setSelector:(SEL)a0;
- (SEL)selector;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invokeSuper;

@end
