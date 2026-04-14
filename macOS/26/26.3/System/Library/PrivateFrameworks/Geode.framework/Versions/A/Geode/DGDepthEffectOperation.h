@class NSDictionary;

@interface DGDepthEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSDictionary *focusRect;
@property (nonatomic) BOOL glassesMatteAllowed;
@property (readonly, nonatomic) double defaultAperture;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;
- (BOOL)valueIsDefaultForInputKey:(id)a0;

@end
