@class MTRGroupKeyManagementClusterGroupKeySetStruct, NSNumber;

@interface MTRGroupKeyManagementClusterKeySetReadResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
