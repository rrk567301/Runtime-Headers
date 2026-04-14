@interface TSCH3DTextureTiling : NSObject <NSCopying>

+ (id)tiling;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)restoreDefault;

@end
