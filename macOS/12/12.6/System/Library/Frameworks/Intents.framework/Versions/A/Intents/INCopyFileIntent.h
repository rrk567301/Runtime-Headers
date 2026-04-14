@class NSString, NSArray;

@interface INCopyFileIntent : INIntent <INCopyFileIntent>

@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSString *sourceType;
@property (readonly, copy) NSString *sourceName;
@property (readonly, copy) NSString *destinationType;
@property (readonly, copy) NSString *destinationName;
@property (readonly, copy) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setEntityName:(id)a0;
- (void)setProperties:(id)a0;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setDestinationName:(id)a0;
- (void)setDestinationType:(id)a0;
- (void)setSourceName:(id)a0;
- (void)setSourceType:(id)a0;
- (void)setVerb:(id)a0;
- (void)setEntityType:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithEntityType:(id)a0 entityName:(id)a1 sourceType:(id)a2 sourceName:(id)a3 destinationType:(id)a4 destinationName:(id)a5 properties:(id)a6;

@end
