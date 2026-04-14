@class NSData;

@interface MTRThermostatClusterActivePresetChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousPresetHandle;
@property (copy, nonatomic) NSData *currentPresetHandle;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
