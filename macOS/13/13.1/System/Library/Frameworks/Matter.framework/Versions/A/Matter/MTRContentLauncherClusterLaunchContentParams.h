@class NSNumber, MTRContentLauncherClusterContentSearch, NSString;

@interface MTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRContentLauncherClusterContentSearch *search;
@property (copy, nonatomic) NSNumber *autoPlay;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
