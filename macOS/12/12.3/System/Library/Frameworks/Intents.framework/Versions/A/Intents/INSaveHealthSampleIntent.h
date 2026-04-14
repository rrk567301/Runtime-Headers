@class NSArray, NSString, HKUnit, INDateComponentsRange;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (readonly, copy) INDateComponentsRange *recordDate;
@property (readonly) long long objectType;
@property (readonly, copy) NSArray *values;
@property (readonly, copy) HKUnit *unit;
@property (readonly, copy) NSArray *sampleMetadatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setUnit:(id)a0;
- (void)setValues:(id)a0;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setObjectType:(long long)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setRecordDate:(id)a0;
- (void)setSampleMetadatas:(id)a0;
- (id)initWithRecordDate:(id)a0 objectType:(long long)a1 values:(id)a2 unit:(id)a3 sampleMetadatas:(id)a4;

@end
