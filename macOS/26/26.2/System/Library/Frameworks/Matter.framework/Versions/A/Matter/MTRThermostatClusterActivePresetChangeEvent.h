@class NSData;

@interface MTRThermostatClusterActivePresetChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousPresetHandle;
@property (copy, nonatomic) NSData *currentPresetHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
