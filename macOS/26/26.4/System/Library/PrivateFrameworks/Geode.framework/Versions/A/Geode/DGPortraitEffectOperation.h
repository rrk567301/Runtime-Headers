@class NSDictionary, NSString, NSNumber;

@interface DGPortraitEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (copy, nonatomic) NSNumber *strength;
@property (nonatomic) BOOL spillMatteAllowed;

+ (id)outputKeys;
+ (id)attributes;
+ (id)inputKeys;
+ (id)_stringsTableName;

- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)operationIsDefaultForAdjustmentRevert;
- (void)setOperationDefaults;
- (void)setOperationDefaultsForAdjustmentRevert;

@end
