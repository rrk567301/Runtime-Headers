@class NSString, NSNumber, INIntent;

@interface WFConfiguredSystemControlAction : WFConfiguredSystemAction

@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSNumber *controlType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 named:(id)a1 extensionBundleIdentifier:(id)a2 containerBundleIdentifier:(id)a3 kind:(id)a4;
- (id)initWithIntent:(id)a0 named:(id)a1 extensionBundleIdentifier:(id)a2 containerBundleIdentifier:(id)a3 kind:(id)a4 controlType:(id)a5;
- (id)initWithIntent:(id)a0 named:(id)a1 extensionBundleIdentifier:(id)a2 containerBundleIdentifier:(id)a3 widgetKind:(id)a4;

@end
