@class SCNMaterialProperty;

@interface OKSCNDoubleSidedMaterial : SCNMaterial

@property (retain, nonatomic) SCNMaterialProperty *backDiffuse;

+ (id)new;
+ (id)material;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)dealloc;

@end
