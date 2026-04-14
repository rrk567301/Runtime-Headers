@interface LACSDKHelper : NSObject

@property (class, readonly, nonatomic) LACSDKHelper *sharedInstance;

- (struct { unsigned int x0; unsigned int x1; })_buildVersionForSDKVersion:(long long)a0;
- (BOOL)applicationIsRunningWithSDKVersionAtLeast:(long long)a0;

@end
