@class NSNumber;

@interface MTRColorControlClusterEnhancedMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *enhancedHue;
@property (copy, nonatomic) NSNumber *saturation;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
