@interface XCTAnimationsIdleNotifier : NSObject <XCTCapabilitiesProviding>

+ (void)initialize;
+ (void)animationDidStart;
+ (void)animationDidStop;
+ (void)addAnimationIdleHandler:(id /* block */)a0;
+ (void)handleAnimationsIdle;
+ (char)isAnimationInProgress;
+ (void)provideCapabilitiesToBuilder:(id)a0;
+ (char)supportsAnimationsIdleNotification;
+ (char)swizzleUIViewAnimationStateMethodsWithError:(id *)a0;

- (void)notifyWhenIdle:(id /* block */)a0;

@end
