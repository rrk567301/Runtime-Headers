@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    NSFont *_font;
    unsigned int _glyph;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

- (unsigned short)glyph;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_font;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned int)_glyph;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

@end
