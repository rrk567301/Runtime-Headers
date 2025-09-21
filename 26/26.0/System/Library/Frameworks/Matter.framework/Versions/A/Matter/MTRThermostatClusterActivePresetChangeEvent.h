@class NSData;

@interface MTRThermostatClusterActivePresetChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousPresetHandle;
@property (copy, nonatomic) NSData *currentPresetHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
