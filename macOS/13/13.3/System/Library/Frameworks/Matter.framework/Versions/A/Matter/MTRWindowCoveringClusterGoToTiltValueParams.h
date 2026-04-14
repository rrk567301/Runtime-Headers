@class NSNumber;

@interface MTRWindowCoveringClusterGoToTiltValueParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *tiltValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
