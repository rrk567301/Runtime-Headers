@class NSNumber;

@interface MTRIdentifyClusterIdentifyParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *identifyTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
