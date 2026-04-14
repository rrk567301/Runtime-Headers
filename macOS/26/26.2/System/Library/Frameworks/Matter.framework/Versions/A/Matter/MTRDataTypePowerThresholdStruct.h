@class NSNumber;

@interface MTRDataTypePowerThresholdStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *powerThreshold;
@property (copy, nonatomic) NSNumber *apparentPowerThreshold;
@property (copy, nonatomic) NSNumber *powerThresholdSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
