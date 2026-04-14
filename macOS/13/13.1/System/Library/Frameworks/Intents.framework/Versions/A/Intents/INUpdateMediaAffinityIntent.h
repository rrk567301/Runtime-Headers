@class NSArray, NSString, INMediaSearch, INPrivateUpdateMediaAffinityIntentData;

@interface INUpdateMediaAffinityIntent : INIntent <INUpdateMediaAffinityIntentExport>

@property (readonly, copy) NSArray *mediaItems;
@property (readonly, copy) INMediaSearch *mediaSearch;
@property (readonly) long long affinityType;
@property (copy) INPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setMediaItems:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setMediaSearch:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (void)setAffinityType:(long long)a0;
- (id)initWithMediaItems:(id)a0 mediaSearch:(id)a1 affinityType:(long long)a2;

@end
