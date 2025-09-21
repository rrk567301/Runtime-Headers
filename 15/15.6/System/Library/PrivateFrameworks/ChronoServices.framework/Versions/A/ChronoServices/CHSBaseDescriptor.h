@class NSString, NSArray, NSData, CHSExtensionIdentity;

@interface CHSBaseDescriptor : NSObject <NSMutableCopying, NSCopying, NSSecureCoding, BSDescriptionProviding, CHSExtensionIdentifiable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSData *localeToken;
@property (readonly, copy, nonatomic) NSString *eventMachServiceName;
@property (readonly, copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, nonatomic) long long preferredBackgroundStyle;
@property (readonly, nonatomic) char supportsVibrantContent;
@property (readonly, nonatomic) NSArray *requiredFeatureFlags;
@property (nonatomic) unsigned long long enablement;
@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char wasEnablementExplicitlyDeclared;
@property (readonly, nonatomic) char hasIntents;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly, nonatomic) char hiddenBySensitiveUI;
@property (readonly, nonatomic, getter=isInternal) char internal;
@property (readonly, nonatomic) char promptsForUserConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)extensionBundleIdentifier;
- (id)initWithExtensionIdentity:(id)a0;
- (id)_initWithDescriptor:(id)a0;
- (id)containerBundleIdentifier;
- (char)isLinkedOnOrAfter:(unsigned long long)a0;
- (char)prefersUserConfiguration;
- (id)sourceDeviceIdentifier;

@end
