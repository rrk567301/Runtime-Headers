@class INSpeakableString, NSString, INSettingMetadata;

@interface INOpenSettingIntent : INIntent <INOpenSettingIntentExport>

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly, copy) INSpeakableString *searchQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setSearchQuery:(id)a0;
- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithSettingMetadata:(id)a0 searchQuery:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;

@end
