@class NSData, NSNumber, MTRApplicationLauncherClusterApplication;

@interface MTRApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplication *application;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
