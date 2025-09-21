@class FBSSceneIdentityToken;

@interface UISSceneOverlayPlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, nonatomic) FBSSceneIdentityToken *targetSceneIdentity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (unsigned long long)placementType;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetSceneIdentity:(id)a0;

@end
