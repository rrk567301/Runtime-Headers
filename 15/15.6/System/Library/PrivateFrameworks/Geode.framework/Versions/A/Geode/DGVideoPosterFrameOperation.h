@interface DGVideoPosterFrameOperation : DGOperation

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (char)isMigratable;
- (char)applySettingsDictionary:(id)a0;

@end
