@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (readonly) long long radioType;
@property (readonly, copy) NSNumber *frequency;
@property (readonly, copy) NSString *stationName;
@property (readonly, copy) NSString *channel;
@property (readonly, copy) NSNumber *presetNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setChannel:(id)a0;
- (void)setFrequency:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setRadioType:(long long)a0;
- (void)setStationName:(id)a0;
- (void)setPresetNumber:(id)a0;
- (id)initWithRadioType:(long long)a0 frequency:(id)a1 stationName:(id)a2 channel:(id)a3 presetNumber:(id)a4;

@end
