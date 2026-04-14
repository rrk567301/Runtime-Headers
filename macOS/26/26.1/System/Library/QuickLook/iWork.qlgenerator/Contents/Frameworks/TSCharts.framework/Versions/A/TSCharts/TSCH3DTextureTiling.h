@interface TSCH3DTextureTiling : NSObject <NSCopying>

+ (id)tiling;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)restoreDefault;

@end
