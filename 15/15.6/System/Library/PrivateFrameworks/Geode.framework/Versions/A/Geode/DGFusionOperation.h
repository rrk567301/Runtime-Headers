@class NSDictionary;

@interface DGFusionOperation : DGOperation

@property (copy, nonatomic) NSDictionary *alignmentParams;

+ (id)attributes;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (char)isMigratable;
- (char)applySettingsDictionary:(id)a0;

@end
