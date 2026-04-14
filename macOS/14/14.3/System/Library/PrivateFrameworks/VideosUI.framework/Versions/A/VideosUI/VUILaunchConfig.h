@interface VUILaunchConfig : NSObject

@property (nonatomic) BOOL useConfigCacheIgnoreExpiry;
@property (nonatomic) double extendedCacheExpireDuration;
@property (nonatomic) long long layoutReuseIdleTimeToLive;

- (id)init;

@end
