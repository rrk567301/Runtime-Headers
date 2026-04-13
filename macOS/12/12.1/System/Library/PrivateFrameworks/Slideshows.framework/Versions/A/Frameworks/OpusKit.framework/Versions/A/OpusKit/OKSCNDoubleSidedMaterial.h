@class SCNMaterialProperty;

@interface OKSCNDoubleSidedMaterial : SCNMaterial

@property (retain, nonatomic) SCNMaterialProperty *backDiffuse;

+ (id)material;

- (void)dealloc;

@end
