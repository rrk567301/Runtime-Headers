@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    NSFont *_font;
    unsigned int _glyph;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

- (unsigned short)glyph;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)_font;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

@end
