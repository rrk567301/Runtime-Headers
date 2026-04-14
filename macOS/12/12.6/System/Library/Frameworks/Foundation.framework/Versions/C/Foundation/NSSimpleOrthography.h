@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)orthographyWithFlags:(unsigned int)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dominantLanguage;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (unsigned int)orthographyFlags;
- (id)dominantScript;
- (id)languageMap;
- (id)allScripts;
- (id)languagesForScript:(id)a0;
- (id)dominantLanguageForScript:(id)a0;
- (id)allLanguages;
- (id)initWithFlags:(unsigned int)a0;

@end
