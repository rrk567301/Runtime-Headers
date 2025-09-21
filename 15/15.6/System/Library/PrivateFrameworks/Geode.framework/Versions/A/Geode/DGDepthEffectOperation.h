@class NSDictionary;

@interface DGDepthEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSDictionary *focusRect;
@property (nonatomic) char glassesMatteAllowed;
@property (readonly, nonatomic) double defaultAperture;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (char)isMigratable;
- (char)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;
- (char)valueIsDefaultForInputKey:(id)a0;

@end
