@class NSString;

@interface UISSceneOrderedPlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, nonatomic) long long *order;
@property (readonly, nonatomic) NSString *relativeScenePersistenceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (unsigned long long)placementType;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrder:(long long)a0 relativeScenePersistenceIdentifer:(id)a1;

@end
