@class NSDictionary;

@interface DGFusionOperation : DGOperation

@property (copy, nonatomic) NSDictionary *alignmentParams;

+ (id)attributes;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
