@interface VUICarPlayConfig : NSObject

@property (nonatomic) BOOL shouldLaunchAppWhenHeadless;
@property (nonatomic) unsigned long long maxHirearchyDepthLimit;

- (id)init;

@end
