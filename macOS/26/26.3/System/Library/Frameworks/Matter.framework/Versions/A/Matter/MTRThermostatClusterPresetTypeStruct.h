@class NSNumber;

@interface MTRThermostatClusterPresetTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *presetScenario;
@property (copy, nonatomic) NSNumber *numberOfPresets;
@property (copy, nonatomic) NSNumber *presetTypeFeatures;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
