@interface IPAPhotoEffectOperation : IPAOperation

@property (nonatomic) long long effectNumber;
@property (nonatomic) long long effectVersion;
@property (nonatomic) double effectIntensity;

+ (id)inputKeys;
+ (void)initialize;
+ (id)attributes;
+ (id)outputKeys;
+ (long long)currentEffectVersion;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (id)init;
- (void)setNilValueForKey:(id)a0;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
