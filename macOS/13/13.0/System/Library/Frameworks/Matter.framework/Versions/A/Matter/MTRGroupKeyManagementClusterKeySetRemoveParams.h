@class NSNumber;

@interface MTRGroupKeyManagementClusterKeySetRemoveParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
