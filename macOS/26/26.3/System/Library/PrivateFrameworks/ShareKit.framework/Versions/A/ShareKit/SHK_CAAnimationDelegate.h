@class NSString;

@interface SHK_CAAnimationDelegate : NSObject <CAAnimationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDelegate;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;

@end
