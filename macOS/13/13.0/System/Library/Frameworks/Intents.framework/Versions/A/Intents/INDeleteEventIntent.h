@class NSString, NSNumber;

@interface INDeleteEventIntent : INIntent <INDeleteEventIntentExport>

@property (readonly, copy) NSString *targetEventIdentifier;
@property (readonly, copy) NSNumber *deleteAllOccurrences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTargetEventIdentifier:(id)a0;
- (void)setDeleteAllOccurrences:(id)a0;
- (id)initWithTargetEventIdentifier:(id)a0 deleteAllOccurrences:(id)a1;

@end
