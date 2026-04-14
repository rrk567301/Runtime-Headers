@interface DGVideoPosterFrameOperation : DGOperation

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
