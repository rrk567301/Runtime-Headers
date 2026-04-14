@class NSString;

@interface CPKStandardCharacterEntity : NSObject <CPKCharacterEntity> {
    id _data;
    unsigned long long _flags;
    struct CGImage { } *_inlineAttachmentImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)characterEntity;
+ (id)characterEntityWithIdentifier:(id)a0;

- (id)fontName;
- (void)setFontName:(id)a0;
- (id)identifier;
- (void)dealloc;
- (void)setImageURL:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)imageURL;
- (id)image;
- (void)setGlyph:(unsigned int)a0;
- (unsigned int)glyphID;
- (double)baselineAdjustment;
- (BOOL)isSticker;
- (id)characterString;
- (void)setCachedGlyph:(unsigned int)a0;
- (void)setNumberOfSectionedCharacters:(long long)a0;
- (void)_updateSpecificFlags:(unsigned long long)a0;
- (id)attributedStringOfSize:(double)a0;
- (unsigned int)cachedGlyphID;
- (id)characterDescription;
- (id)displayFont;
- (struct CGImage { } *)inlineTextAttachment;
- (BOOL)isInlineTextAttachment;
- (long long)numberOfSectionedCharacters;
- (void)setCharacterDescription:(id)a0;
- (void)setCharacterString:(id)a0;
- (void)setInlineAttachmentImage:(struct CGImage { } *)a0;
- (id)stickerUUID;
- (id)textEquivalent;

@end
