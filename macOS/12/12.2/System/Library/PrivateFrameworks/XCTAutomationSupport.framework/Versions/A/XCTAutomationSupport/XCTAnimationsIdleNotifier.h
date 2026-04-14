@class NSString;

@interface XCTAnimationsIdleNotifier : NSObject <XCTCapabilitiesProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
