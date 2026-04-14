@class SCNMaterialProperty;

@interface OKSCNDoubleSidedMaterial : SCNMaterial

@property (retain, nonatomic) SCNMaterialProperty *backDiffuse;

+ (id)new;
+ (id)material;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
