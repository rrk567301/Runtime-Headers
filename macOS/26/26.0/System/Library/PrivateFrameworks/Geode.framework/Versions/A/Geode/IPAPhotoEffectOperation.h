@interface IPAPhotoEffectOperation : IPAOperation

@property (nonatomic) long long effectNumber;
@property (nonatomic) long long effectVersion;
@property (nonatomic) double effectIntensity;

+ (void)initialize;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)attributes;
+ (long long)currentEffectVersion;

- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)init;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
