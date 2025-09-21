@class NSString, NSArray, NSData, CHSExtensionIdentity, CHSIntentReference, CHSControlActionMetadata;

@interface CHSMutableControlDescriptor : CHSControlDescriptor <CHSMutableConfigurableDescriptor>

@property (nonatomic) unsigned long long controlVersion;
@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) char hiddenControl;
@property (nonatomic) char disablesControlStateCaching;
@property (nonatomic) unsigned long long enablement;
@property (retain, nonatomic) NSArray *requiredFeatureFlags;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) NSString *actionIntentType;
@property (copy, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long controlType;
@property (nonatomic) unsigned long long preferredControlSize;
@property (nonatomic) char supportsPush;
@property (nonatomic) char showsContextualMenu;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) CHSIntentReference *defaultIntentReference;
@property (nonatomic) char hiddenBySensitiveUI;
@property (nonatomic) char promptsForUserConfiguration;
@property (retain, nonatomic) CHSControlActionMetadata *actionMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setKind:(id)a0;
- (void)setVisibility:(long long)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setIntentType:(id)a0;
- (void)setSupportsPush:(char)a0;
- (void)setDisablesControlStateCaching:(char)a0;
- (void)setLocaleToken:(id)a0;
- (void)setPromptsForUserConfiguration:(char)a0;
- (void)setActionMetadata:(id)a0;
- (void)setEnablement:(unsigned long long)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setExtensionIdentity:(id)a0;
- (void)setHiddenBySensitiveUI:(char)a0;
- (void)setHiddenControl:(char)a0;
- (void)setNativeContainerBundleIdentifier:(id)a0;
- (void)setPreferredControlSize:(unsigned long long)a0;
- (void)setRequiredFeatureFlags:(id)a0;
- (void)setSdkVersion:(id)a0;
- (void)setShowsContextualMenu:(char)a0;
- (void)setWidgetDescription:(id)a0;
- (void)setControlType:(unsigned long long)a0;
- (void)setActionIntentType:(id)a0;
- (void)setControlVersion:(unsigned long long)a0;
- (void)setDefaultIntentReference:(id)a0;

@end
