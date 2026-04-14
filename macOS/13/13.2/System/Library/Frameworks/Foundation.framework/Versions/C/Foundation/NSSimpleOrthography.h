@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)orthographyWithFlags:(unsigned int)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)dominantScript;
- (id)languageMap;
- (unsigned int)orthographyFlags;
- (id)languagesForScript:(id)a0;
- (id)dominantLanguageForScript:(id)a0;
- (id)dominantLanguage;
- (id)allScripts;
- (id)allLanguages;
- (id)initWithFlags:(unsigned int)a0;

@end
