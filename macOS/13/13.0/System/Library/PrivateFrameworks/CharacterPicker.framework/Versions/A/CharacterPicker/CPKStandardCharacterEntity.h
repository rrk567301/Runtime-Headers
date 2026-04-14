@class NSString;

@interface CPKStandardCharacterEntity : NSObject <CPKCharacterEntity> {
    id _data;
    unsigned long long _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)characterEntity;
+ (id)characterEntityWithIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (id)identifier;
- (id)initWithIdentifier:(id)a0;
- (id)image;
- (id)fontName;
- (void)setFontName:(id)a0;
- (unsigned int)glyphID;
- (double)baselineAdjustment;
- (id)imageURL;
- (void)setImageURL:(id)a0;
- (id)characterString;
- (void)setGlyph:(unsigned int)a0;
- (id)attributedStringOfSize:(double)a0;
- (id)textEquivalent;
- (id)characterDescription;
- (id)displayFont;
- (void)setCharacterString:(id)a0;
- (void)setCachedGlyph:(unsigned int)a0;
- (unsigned int)cachedGlyphID;
- (void)setCharacterDescription:(id)a0;
- (void)setNumberOfSectionedCharacters:(long long)a0;
- (long long)numberOfSectionedCharacters;
- (void)_updateSpecificFlags:(unsigned long long)a0;

@end
