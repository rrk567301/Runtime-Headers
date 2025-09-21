@class NSString, INFocusStatus;

@interface INShareFocusStatusIntent : INIntent <INShareFocusStatusIntentExport>

@property (readonly, copy) INFocusStatus *focusStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (void)setFocusStatus:(id)a0;
- (id)_categoryVerb;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithFocusStatus:(id)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
