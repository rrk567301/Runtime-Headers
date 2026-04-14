@class NSString;

@interface UISScenePlacementConfiguration : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSXPCSecureCoding>

@property (class, readonly, nonatomic) unsigned long long placementType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
