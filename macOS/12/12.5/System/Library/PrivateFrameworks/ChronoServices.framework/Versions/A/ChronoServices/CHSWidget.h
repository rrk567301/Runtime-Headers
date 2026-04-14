@class NSString, INIntent;

@interface CHSWidget : NSObject <BSXPCCoding, BSDescriptionProviding, CHSWidgetPersonality, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)matchesPersonality:(id)a0;
- (id)widgetByReplacingIntent:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4;
- (id)_loggingIdentifierWithMetrics:(id)a0;
- (id)_loggingIdentifierWithMetrics:(id)a0 prefix:(id)a1;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (id)initWithPersonality:(id)a0 family:(long long)a1 intent:(id)a2;
- (id)_loggingIdentifierWithoutMetrics;

@end
