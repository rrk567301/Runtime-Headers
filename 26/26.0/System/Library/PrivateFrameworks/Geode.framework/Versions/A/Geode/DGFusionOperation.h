@class NSDictionary;

@interface DGFusionOperation : DGOperation

@property (copy, nonatomic) NSDictionary *alignmentParams;

+ (id)attributes;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
