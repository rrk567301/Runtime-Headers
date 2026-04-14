@class NSNumber;

@interface MTRWaterHeaterManagementClusterWaterHeaterBoostInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *oneShot;
@property (copy, nonatomic) NSNumber *emergencyBoost;
@property (copy, nonatomic) NSNumber *temporarySetpoint;
@property (copy, nonatomic) NSNumber *targetPercentage;
@property (copy, nonatomic) NSNumber *targetReheat;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
