@interface NSIntelligentLightRootConfiguration : NSObject <NSCopying>

@property (readonly) unsigned long long colorPalette;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithColorPalette:(unsigned long long)a0;

@end
