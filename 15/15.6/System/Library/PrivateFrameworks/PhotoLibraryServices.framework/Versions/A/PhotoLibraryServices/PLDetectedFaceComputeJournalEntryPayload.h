@interface PLDetectedFaceComputeJournalEntryPayload : PLDetectedFaceJournalEntryPayload

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (char)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (char)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;

@end
