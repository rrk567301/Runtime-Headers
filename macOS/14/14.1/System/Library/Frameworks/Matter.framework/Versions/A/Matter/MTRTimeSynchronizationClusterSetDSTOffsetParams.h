@class NSArray, NSNumber;

@interface MTRTimeSynchronizationClusterSetDSTOffsetParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *dstOffset;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
