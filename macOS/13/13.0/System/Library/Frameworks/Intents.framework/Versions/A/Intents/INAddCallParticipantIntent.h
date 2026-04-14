@class NSArray, NSString;

@interface INAddCallParticipantIntent : INIntent <INAddCallParticipantIntentExport>

@property (readonly, copy) NSArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setParticipants:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithParticipants:(id)a0;

@end
