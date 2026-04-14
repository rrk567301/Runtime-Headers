@class NSString;

@interface IPAPhotoEffect : NSObject {
    BOOL _template;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long number;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) BOOL isIdentity;
@property (readonly, nonatomic) BOOL is3D;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, nonatomic) NSString *portraitGlyphPrefix;
@property (readonly, nonatomic) NSString *portraitV1Name;
@property (readonly, nonatomic) NSString *portraitV2Name;

+ (void)initialize;
+ (id)effectWithName:(id)a0;
+ (id)allEffects;
+ (id)_createEffectWithName:(id)a0;
+ (id)_createPortraitWithName:(id)a0;
+ (id)supportedEffects;
+ (id)portraitEffects;
+ (BOOL)isValidEffectNumber:(unsigned long long)a0;
+ (id)_templateEffectWithNumber:(long long)a0;
+ (id)_templateEffectWithName:(id)a0;
+ (long long)currentVersionForEffectNumber:(long long)a0;
+ (long long)currentVersionForEffectName:(id)a0;
+ (id)noneEffect;
+ (id)effectWithName:(id)a0 version:(long long)a1;
+ (id)effectWithNumber:(long long)a0;
+ (id)effectWithNumber:(long long)a0 version:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (long long)currentVersion;
- (BOOL)_isValidVersion:(long long)a0;
- (long long)legacyVersion_iOS7;
- (id)_effectWithVersion:(long long)a0;
- (BOOL)isEqualToEffect:(id)a0;

@end
