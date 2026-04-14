@class NSDictionary, NSString, NSNumber;

@interface DGPortraitEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (copy, nonatomic) NSNumber *strength;
@property (nonatomic) BOOL spillMatteAllowed;

+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)operationIsDefaultForAdjustmentRevert;
- (void)setOperationDefaults;
- (void)setOperationDefaultsForAdjustmentRevert;

@end
