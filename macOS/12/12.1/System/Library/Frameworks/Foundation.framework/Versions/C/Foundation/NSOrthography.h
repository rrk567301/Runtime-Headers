@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)_orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)_scriptNameForScriptIndex:(unsigned long long)a0;
+ (id)defaultOrthographyForLanguage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)dominantLanguage;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (unsigned int)orthographyFlags;
- (id)allScripts;
- (id)languagesForScript:(id)a0;
- (id)dominantLanguageForScript:(id)a0;
- (id)allLanguages;

@end
