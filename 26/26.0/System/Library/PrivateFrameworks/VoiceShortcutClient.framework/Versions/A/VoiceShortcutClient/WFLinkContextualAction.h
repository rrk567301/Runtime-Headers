@class NSString, LNAction;

@interface WFLinkContextualAction : WFContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long authenticationPolicy;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)workflowRunKind;
- (id)_staticDisplayStringForDecoding;
- (id)copyWithParameters:(id)a0;
- (id)initWithAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3;
- (id)initWithAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 contextualParameters:(id)a3 authenticationPolicy:(long long)a4 icon:(id)a5;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)showsUserInterfaceWhenRunning;

@end
