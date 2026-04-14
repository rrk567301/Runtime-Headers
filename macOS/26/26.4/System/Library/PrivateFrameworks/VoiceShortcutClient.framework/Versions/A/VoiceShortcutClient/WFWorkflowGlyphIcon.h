@class WFIconBackground;

@interface WFWorkflowGlyphIcon : WFIcon

@property (readonly, nonatomic) unsigned short glyph;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithGlyph:(unsigned short)a0;
- (id)initWithGlyph:(unsigned short)a0 background:(id)a1;

@end
