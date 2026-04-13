@class NSArray, NSNumber, NSString;

@interface INFindDeviceAndPlaySoundIntent : INIntent <INFindDeviceAndPlaySoundIntentExport>

@property (readonly, copy) NSArray *devices;
@property (readonly, copy) NSNumber *isStopRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setDevices:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setIsStopRequest:(id)a0;
- (id)initWithDevices:(id)a0 isStopRequest:(id)a1;

@end
