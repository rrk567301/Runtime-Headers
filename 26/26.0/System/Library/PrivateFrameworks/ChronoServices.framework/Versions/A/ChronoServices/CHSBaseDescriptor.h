@class NSString, NSArray, NSData, CHSExtensionIdentity;

@interface CHSBaseDescriptor : NSObject <NSMutableCopying, NSCopying, NSSecureCoding, BSDescriptionProviding, CHSExtensionIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSData *localeToken;
@property (readonly, copy, nonatomic) NSString *eventMachServiceName;
@property (readonly, copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, nonatomic) long long preferredBackgroundStyle;
@property (readonly, nonatomic) BOOL supportsVibrantContent;
@property (readonly, nonatomic) NSArray *requiredFeatureFlags;
@property (nonatomic) unsigned long long enablement;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL wasEnablementExplicitlyDeclared;
@property (readonly, nonatomic) BOOL hasIntents;
@property (readonly, nonatomic) long long requestedDataProtection;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly, nonatomic) BOOL hiddenBySensitiveUI;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, nonatomic) BOOL promptsForUserConfiguration;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extensionBundleIdentifier;
- (id)_initWithDescriptor:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLinkedOnOrAfter:(unsigned long long)a0;
- (BOOL)prefersUserConfiguration;
- (id)sourceDeviceIdentifier;

@end
