@class NSNumber, NSData;

@interface MTRApplicationLauncherClusterLauncherResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
