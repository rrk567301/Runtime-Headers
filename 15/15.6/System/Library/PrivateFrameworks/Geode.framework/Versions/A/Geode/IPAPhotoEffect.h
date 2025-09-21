@class NSString;

@interface IPAPhotoEffect : NSObject {
    char _template;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long number;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) char isIdentity;
@property (readonly, nonatomic) char is3D;
@property (readonly, nonatomic) char isPortrait;
@property (readonly, nonatomic) char isLegacy;
@property (readonly, nonatomic) NSString *portraitGlyphPrefix;
@property (readonly, nonatomic) NSString *portraitV1Name;
@property (readonly, nonatomic) NSString *portraitV2Name;

+ (void)initialize;
+ (id)effectWithName:(id)a0;
+ (id)allEffects;
+ (id)portraitEffects;
+ (id)_createEffectWithName:(id)a0;
+ (id)_createPortraitWithName:(id)a0;
+ (id)_templateEffectWithName:(id)a0;
+ (id)_templateEffectWithNumber:(long long)a0;
+ (long long)currentVersionForEffectName:(id)a0;
+ (long long)currentVersionForEffectNumber:(long long)a0;
+ (id)effectWithName:(id)a0 version:(long long)a1;
+ (id)effectWithNumber:(long long)a0;
+ (id)effectWithNumber:(long long)a0 version:(long long)a1;
+ (char)isValidEffectNumber:(unsigned long long)a0;
+ (id)noneEffect;
+ (id)supportedEffects;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)currentVersion;
- (id)_effectWithVersion:(long long)a0;
- (char)_isValidVersion:(long long)a0;
- (char)isEqualToEffect:(id)a0;
- (long long)legacyVersion_iOS7;

@end
