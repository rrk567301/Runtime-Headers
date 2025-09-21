@interface UISSceneProminentPlacementConfiguration : UISScenePlacementConfiguration

@property (nonatomic) char prefersLargeSize;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;
+ (unsigned long long)placementType;

- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;

@end
