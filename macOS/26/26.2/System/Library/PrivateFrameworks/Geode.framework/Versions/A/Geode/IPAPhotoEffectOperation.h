@interface IPAPhotoEffectOperation : IPAOperation

@property (nonatomic) long long effectNumber;
@property (nonatomic) long long effectVersion;
@property (nonatomic) double effectIntensity;

+ (void)initialize;
+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (long long)currentEffectVersion;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void)setNilValueForKey:(id)a0;
- (id)init;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
