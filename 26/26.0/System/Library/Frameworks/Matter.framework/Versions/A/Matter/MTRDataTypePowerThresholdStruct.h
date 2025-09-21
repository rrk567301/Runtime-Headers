@class NSNumber;

@interface MTRDataTypePowerThresholdStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *powerThreshold;
@property (copy, nonatomic) NSNumber *apparentPowerThreshold;
@property (copy, nonatomic) NSNumber *powerThresholdSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
