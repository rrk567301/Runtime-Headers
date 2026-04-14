@class SCNMaterialProperty;

@interface OKSCNDoubleSidedMaterial : SCNMaterial

@property (retain, nonatomic) SCNMaterialProperty *backDiffuse;

+ (id)new;
+ (id)material;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
