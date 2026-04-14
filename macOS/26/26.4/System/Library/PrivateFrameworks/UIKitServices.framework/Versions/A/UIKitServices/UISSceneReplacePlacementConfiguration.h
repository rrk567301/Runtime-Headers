@class NSString;

@interface UISSceneReplacePlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, copy, nonatomic) NSString *targetSceneSessionPersistentIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)placementType;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithTargetSceneSessionPersistentIdentifier:(id)a0;

@end
