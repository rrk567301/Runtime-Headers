@class WFIconBackground;

@interface WFWorkflowGlyphIcon : WFIcon

@property (readonly, nonatomic) unsigned short glyph;
@property (readonly, nonatomic) WFIconBackground *background;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasClearBackground;
- (char)hasTransparentBackground;
- (id)initWithGlyph:(unsigned short)a0;
- (id)initWithGlyph:(unsigned short)a0 background:(id)a1;

@end
