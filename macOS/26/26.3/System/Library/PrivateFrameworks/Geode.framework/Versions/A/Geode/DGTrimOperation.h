@interface DGTrimOperation : DGOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
