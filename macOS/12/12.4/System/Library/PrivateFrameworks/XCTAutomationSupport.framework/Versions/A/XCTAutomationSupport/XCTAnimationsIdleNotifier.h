@interface XCTAnimationsIdleNotifier : NSObject <XCTCapabilitiesProviding>

+ (void)initialize;
+ (void)animationDidStart;
+ (void)animationDidStop;
+ (void)provideCapabilitiesToBuilder:(id)a0;
+ (BOOL)supportsAnimationsIdleNotification;
+ (BOOL)swizzleUIViewAnimationStateMethodsWithError:(id *)a0;
+ (void)handleAnimationsIdle;
+ (void)addAnimationIdleHandler:(id /* block */)a0;
+ (BOOL)isAnimationInProgress;

- (void)notifyWhenIdle:(id /* block */)a0;

@end
