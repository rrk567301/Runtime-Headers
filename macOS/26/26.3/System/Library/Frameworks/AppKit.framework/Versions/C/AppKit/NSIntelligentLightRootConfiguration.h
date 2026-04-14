@interface NSIntelligentLightRootConfiguration : NSObject <NSCopying>

@property (readonly) unsigned long long colorPalette;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithColorPalette:(unsigned long long)a0;

@end
