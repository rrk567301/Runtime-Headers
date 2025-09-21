@class NSString;

@interface UISSceneReplacePlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, copy, nonatomic) NSString *targetSceneSessionPersistentIdentifier;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;
+ (unsigned long long)placementType;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithTargetSceneSessionPersistentIdentifier:(id)a0;

@end
