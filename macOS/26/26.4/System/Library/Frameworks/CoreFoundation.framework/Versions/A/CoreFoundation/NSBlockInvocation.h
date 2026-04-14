@interface NSBlockInvocation : NSInvocation

- (SEL)selector;
- (void)invoke;
- (void)setSelector:(SEL)a0;
- (void)invokeSuper;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
