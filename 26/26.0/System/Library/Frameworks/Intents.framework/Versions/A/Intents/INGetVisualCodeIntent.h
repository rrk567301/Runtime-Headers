@class NSString;

@interface INGetVisualCodeIntent : INIntent <INGetVisualCodeIntentExport>

@property (readonly) long long visualCodeType;
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
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithVisualCodeType:(long long)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setVisualCodeType:(long long)a0;

@end
