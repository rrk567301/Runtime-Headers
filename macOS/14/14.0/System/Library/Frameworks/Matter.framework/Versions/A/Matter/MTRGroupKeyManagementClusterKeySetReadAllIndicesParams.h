@class NSArray, NSNumber;

@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *groupKeySetIDs;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
