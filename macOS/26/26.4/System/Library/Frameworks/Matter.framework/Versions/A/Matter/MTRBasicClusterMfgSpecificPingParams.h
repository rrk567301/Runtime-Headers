@class NSNumber;

@interface MTRBasicClusterMfgSpecificPingParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)_encodeAsDataValue:(id *)a0;

@end
