@class NSData, NSString, CHSExtensionIdentity;

@interface CHSMutableSessionPlatterDescriptor : CHSSessionPlatterDescriptor

@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic) BOOL supportsVibrantContent;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) long long requestedDataProtection;
@property (copy, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSData *activityAttributesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActivityAttributesType:(id)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setExtensionIdentity:(id)a0;
- (void)setPreferredBackgroundStyle:(long long)a0;
- (void)setSdkVersion:(id)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setLocaleToken:(id)a0;
- (void)setRequestedDataProtection:(long long)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setSupportsVibrantContent:(BOOL)a0;
- (void)setWidgetDescription:(id)a0;
- (void)setContainerBundleIdentifier:(id)a0;

@end
