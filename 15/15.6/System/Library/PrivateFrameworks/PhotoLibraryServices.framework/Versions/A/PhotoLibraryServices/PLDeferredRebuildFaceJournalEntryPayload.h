@interface PLDeferredRebuildFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)a0;

@end
