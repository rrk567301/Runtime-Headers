@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial

@property (nonatomic) BOOL decalMode;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)defaultShaderVariables;

@end
