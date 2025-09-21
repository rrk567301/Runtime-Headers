@class ISDRecordStore, NSString, NSDictionary, NSMutableDictionary, NSMutableSet, ISDEntity, NSMutableArray;

@interface ISDChangeBuilder : NSObject {
    NSDictionary *_supportedPropertyNames;
    id _delegate;
    NSString *_recordId;
    NSString *_clientId;
    unsigned int _fromGeneration;
    unsigned int _toGeneration;
    char _produceDeletesForMissingNewValues;
    char _hasOldRecord;
    char _hasNewRecord;
    char _newRelationshipValuesAreTuples;
    char _takeMissingCodependentValuesFromOldValues;
    ISDEntity *_entity;
    NSMutableDictionary *_oldValues;
    NSDictionary *_oldUnformattedRelationships;
    NSMutableDictionary *_newValues;
    NSMutableSet *_deletedPropertyNames;
    NSMutableSet *_missingCodependentPropertyNames;
    NSMutableArray *_deltas;
    id _change;
    char _clientIsTrusted;
    char _isPushingTruth;
    ISDRecordStore *_clientRecordStore;
    NSMutableDictionary *_relationshipNewReferences;
    NSMutableArray *_defaultPropertyNames;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)entity;
- (id)change;
- (void)setHasOldValue:(char)a0;
- (id)recordId;
- (char)_isDefaultValue:(id)a0;
- (char)_isTargetIdFiltered:(id)a0;
- (id)_newUndeletedRecordIdsFromTuples:(id)a0;
- (void)_removeNullValuesAndDefaultPropertyNamesFromDictionary:(id)a0;
- (int)actionFromDeltaDictionary:(id)a0 inChange:(id)a1;
- (void)buildDeltas;
- (void)buildDeltasForExistingProperties;
- (void)buildDeltasForMissingCodependentProperties;
- (void)buildDeltasForNewProperties;
- (void)computeActualChangesNewValues:(id)a0 oldValues:(id)a1 forProperty:(id)a2;
- (id)initWithClientId:(id)a0 recordId:(id)a1 entity:(id)a2 propertyNamesSynchronizedByClient:(id)a3 lastModifiedGeneration:(unsigned int)a4 currentGeneration:(unsigned int)a5 clientIsTrusted:(char)a6 clientState:(id)a7;
- (char)isOldValue:(id)a0 equalToNewValue:(id)a1 propertyDescription:(id)a2;
- (char)isPushingTruth;
- (char)isSpecialGlobalProperty:(id)a0 propertyDescription:(id *)a1;
- (void)makeSureToPushCodependentPropertiesForPropertyName:(id)a0;
- (id)relationshipNewReferences;
- (void)setIsPushingTruth:(char)a0;
- (void)setProduceDeletesForMissingNewValues:(char)a0;
- (void)setShouldTakeMissingCodependentValuesFromOldValues:(char)a0;
- (char)shouldCreateDeltaBetweenOldValue:(id)a0 newValue:(id)a1 propertyDescription:(id)a2;
- (char)shouldCreateDeltaForProperty:(id)a0;
- (void)takeNewValuesFromChange:(id)a0;
- (void)takeNewValuesFromDictionary:(id)a0;
- (void)takeNewValuesFromRecord:(id)a0;
- (void)takeOldValuesFromRecord:(id)a0;
- (id)unformattedTuplesForRelationshipName:(id)a0;
- (void)validateValue:(id)a0 forPropertyDescription:(id)a1;

@end
