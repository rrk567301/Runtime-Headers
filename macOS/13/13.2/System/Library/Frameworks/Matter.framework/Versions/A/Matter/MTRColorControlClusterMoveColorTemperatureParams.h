@class NSNumber;

@interface MTRColorControlClusterMoveColorTemperatureParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *moveMode;
@property (copy, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSNumber *colorTemperatureMinimumMireds;
@property (copy, nonatomic) NSNumber *colorTemperatureMaximumMireds;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
