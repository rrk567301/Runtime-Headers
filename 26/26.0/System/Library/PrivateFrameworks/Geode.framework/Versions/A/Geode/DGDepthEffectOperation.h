@class NSDictionary;

@interface DGDepthEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSDictionary *focusRect;
@property (nonatomic) BOOL glassesMatteAllowed;
@property (readonly, nonatomic) double defaultAperture;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;
- (BOOL)valueIsDefaultForInputKey:(id)a0;

@end
