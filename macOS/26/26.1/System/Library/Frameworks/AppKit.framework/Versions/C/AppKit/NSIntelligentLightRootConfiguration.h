@interface NSIntelligentLightRootConfiguration : NSObject <NSCopying>

@property (readonly) unsigned long long colorPalette;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithColorPalette:(unsigned long long)a0;

@end
