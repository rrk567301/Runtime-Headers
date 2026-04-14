@class NSNumber;

@interface MTRDataTypePowerThresholdStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *powerThreshold;
@property (copy, nonatomic) NSNumber *apparentPowerThreshold;
@property (copy, nonatomic) NSNumber *powerThresholdSource;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
