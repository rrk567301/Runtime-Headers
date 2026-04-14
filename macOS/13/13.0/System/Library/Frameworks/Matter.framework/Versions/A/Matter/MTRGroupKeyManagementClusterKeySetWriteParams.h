@class MTRGroupKeyManagementClusterGroupKeySetStruct, NSNumber;

@interface MTRGroupKeyManagementClusterKeySetWriteParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
