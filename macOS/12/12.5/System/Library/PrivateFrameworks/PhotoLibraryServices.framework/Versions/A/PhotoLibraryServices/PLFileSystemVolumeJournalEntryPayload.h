@interface PLFileSystemVolumeJournalEntryPayload : PLJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)a0;

@end
