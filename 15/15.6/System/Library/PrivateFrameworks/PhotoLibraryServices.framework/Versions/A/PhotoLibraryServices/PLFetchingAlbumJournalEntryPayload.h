@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (void)_fixHasLocationSmartAlbum;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;

@end
