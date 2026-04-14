@interface NSBlockInvocation : NSInvocation

- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
