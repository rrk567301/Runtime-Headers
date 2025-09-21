@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (void)updateAlbum:(id)a0 includePendingChanges:(char)a1;

@end
