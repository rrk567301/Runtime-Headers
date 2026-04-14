@class NSNumber;

@interface MTRColorControlClusterMoveColorParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *rateX;
@property (copy, nonatomic) NSNumber *rateY;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
