@protocol FBProcessWatchdogProviding;

@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) char runIndependently;
@property (nonatomic) long long watchdogBehavior;
@property (retain, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
