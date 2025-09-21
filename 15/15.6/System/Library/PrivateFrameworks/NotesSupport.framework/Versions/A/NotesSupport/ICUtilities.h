@interface ICUtilities : NSObject

@property (class, readonly, nonatomic) char isInternalInstall;
@property (class, readonly, nonatomic) char isInternetReachable;
@property (class, readonly, nonatomic) char isSeedInstall;
@property (class, readonly, nonatomic) char isSeedOrInternalInstall;

@end
