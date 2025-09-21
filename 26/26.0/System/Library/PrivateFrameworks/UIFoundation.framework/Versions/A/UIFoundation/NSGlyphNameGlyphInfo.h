@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)glyphName;
- (id)initWithCoder:(id)a0;
- (id)initWithGlyphName:(id)a0 glyph:(unsigned int)a1 forFont:(id)a2 baseString:(id)a3;

@end
