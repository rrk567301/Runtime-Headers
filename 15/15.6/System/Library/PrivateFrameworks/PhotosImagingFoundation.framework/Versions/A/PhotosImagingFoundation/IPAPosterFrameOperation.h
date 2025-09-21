@interface IPAPosterFrameOperation : IPAVideoOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;

- (id)debugDescription;
- (id)identifier;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithSettingsDictionary:(id)a0;
- (char)isEqualToOperation:(id)a0;
- (char)isMigratable;

@end
