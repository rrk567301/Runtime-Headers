@class NSArray, NSString;

@interface INStopShareETAIntent : INIntent <INStopShareETAIntentExport>

@property (readonly, copy) NSArray *recipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)setRecipients:(id)a0;
- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithRecipients:(id)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
