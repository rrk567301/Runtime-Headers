@interface IPAPhotoEffectOperation : IPAOperation

@property (nonatomic) long long effectNumber;
@property (nonatomic) long long effectVersion;
@property (nonatomic) double effectIntensity;

+ (void)initialize;
+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;
+ (long long)currentEffectVersion;

- (id)initWithOperation:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (id)settingsDictionary;
- (id)init;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
