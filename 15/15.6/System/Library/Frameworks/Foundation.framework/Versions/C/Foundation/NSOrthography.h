@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)_orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)_scriptNameForScriptIndex:(unsigned long long)a0;
+ (id)defaultOrthographyForLanguage:(id)a0;
+ (id)orthographyWithDominantScript:(id)a0 languageMap:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allLanguages;
- (id)allScripts;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)a0;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)languagesForScript:(id)a0;
- (unsigned int)orthographyFlags;
- (id)replacementObjectForPortCoder:(id)a0;

@end
