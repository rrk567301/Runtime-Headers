@class INSpeakableString, NSString;

@interface INSearchForTimersIntent : INIntent <INSearchForTimersIntentExport>

@property (readonly, copy) INSpeakableString *label;
@property (readonly) double duration;
@property (readonly) long long state;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setState:(long long)a0;
- (id)domain;
- (void)setDuration:(double)a0;
- (void)setType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (void)setLabel:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithLabel:(id)a0 duration:(double)a1 state:(long long)a2 type:(long long)a3;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
