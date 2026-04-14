@class NSNumber;

@interface MTRThermostatClusterPresetTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *presetScenario;
@property (copy, nonatomic) NSNumber *numberOfPresets;
@property (copy, nonatomic) NSNumber *presetTypeFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
