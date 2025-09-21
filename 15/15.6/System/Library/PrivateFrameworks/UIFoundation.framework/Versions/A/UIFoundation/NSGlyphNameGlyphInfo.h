@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {
    NSString *_name;
}

@property (class, readonly) char supportsSecureCoding;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)glyphName;
- (id)initWithGlyphName:(id)a0 glyph:(unsigned int)a1 forFont:(id)a2 baseString:(id)a3;

@end
