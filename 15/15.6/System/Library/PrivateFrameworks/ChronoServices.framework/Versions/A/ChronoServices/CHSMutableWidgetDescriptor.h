@class NSData, NSString, NSArray, CHSIntentReference, NSDictionary, CHSIntentRecommendationsContainer, INIntent, CHSExtensionIdentity;

@interface CHSMutableWidgetDescriptor : CHSWidgetDescriptor <CHSMutableConfigurableDescriptor>

@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic) char supportsVibrantContent;
@property (nonatomic) char supportsAccentedContent;
@property (nonatomic) char supportsInteraction;
@property (copy, nonatomic) NSDictionary *disfavoredLocations;
@property (nonatomic) char enablesMultipleTapTargets;
@property (nonatomic, getter=isBackgroundRemovable) char backgroundRemovable;
@property (retain, nonatomic) CHSIntentRecommendationsContainer *intentRecommendationsContainer;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) unsigned long long enablement;
@property (retain, nonatomic) NSArray *requiredFeatureFlags;
@property (copy, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long supportedFamilies;
@property (nonatomic) long long widgetVisibility;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (nonatomic, getter=isTransparent) char transparent;
@property (copy, nonatomic) INIntent *defaultIntent;
@property (copy, nonatomic) CHSIntentReference *defaultIntentReference;
@property (nonatomic) char hiddenBySensitiveUI;
@property (nonatomic) char promptsForUserConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setKind:(id)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setTransparent:(char)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (void)setIntentType:(id)a0;
- (void)setLocaleToken:(id)a0;
- (void)setPromptsForUserConfiguration:(char)a0;
- (void)setBackgroundRemovable:(char)a0;
- (void)setEnablement:(unsigned long long)a0;
- (void)setEnablesMultipleTapTargets:(char)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setExtensionIdentity:(id)a0;
- (void)setHiddenBySensitiveUI:(char)a0;
- (void)setIntentRecommendationsContainer:(id)a0;
- (void)setNativeContainerBundleIdentifier:(id)a0;
- (void)setPreferredBackgroundStyle:(long long)a0;
- (void)setRequiredFeatureFlags:(id)a0;
- (void)setSdkVersion:(id)a0;
- (void)setSupportsAccentedContent:(char)a0;
- (void)setSupportsInteraction:(char)a0;
- (void)setSupportsVibrantContent:(char)a0;
- (void)setWidgetDescription:(id)a0;
- (void)setWidgetVisibility:(long long)a0;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setDisfavoredLocations:(id)a0;
- (void)setDisfavoredLocations:(unsigned long long)a0 on:(long long)a1;
- (void)setSupportedFamilies:(unsigned long long)a0;

@end
