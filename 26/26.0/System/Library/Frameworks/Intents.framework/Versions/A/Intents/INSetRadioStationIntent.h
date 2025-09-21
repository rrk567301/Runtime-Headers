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

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setChannel:(id)a0;
- (void)setRadioType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setDomain:(id)a0;
- (void)setFrequency:(id)a0;
- (id)verb;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (void)setStationName:(id)a0;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithRadioType:(long long)a0 frequency:(id)a1 stationName:(id)a2 channel:(id)a3 presetNumber:(id)a4;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setPresetNumber:(id)a0;

@end
