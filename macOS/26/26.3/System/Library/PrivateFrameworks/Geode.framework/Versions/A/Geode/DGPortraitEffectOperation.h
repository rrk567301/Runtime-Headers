@class NSDictionary, NSString, NSNumber;

@interface DGPortraitEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (copy, nonatomic) NSNumber *strength;
@property (nonatomic) BOOL spillMatteAllowed;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)operationIsDefaultForAdjustmentRevert;
- (void)setOperationDefaults;
- (void)setOperationDefaultsForAdjustmentRevert;

@end
