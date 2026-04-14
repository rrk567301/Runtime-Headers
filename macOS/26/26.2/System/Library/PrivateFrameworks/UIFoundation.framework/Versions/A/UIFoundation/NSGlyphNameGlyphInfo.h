@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)glyphName;
- (id)description;
- (void)dealloc;
- (id)initWithGlyphName:(id)a0 glyph:(unsigned int)a1 forFont:(id)a2 baseString:(id)a3;

@end
