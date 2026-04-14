@class NSString, INSettingMetadata;

@interface INGetSettingIntent : INIntent <INGetSettingIntentExport>

@property (readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) long long confirmationValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setConfirmationValue:(long long)a0;
- (id)initWithSettingMetadata:(id)a0 confirmationValue:(long long)a1;

@end
