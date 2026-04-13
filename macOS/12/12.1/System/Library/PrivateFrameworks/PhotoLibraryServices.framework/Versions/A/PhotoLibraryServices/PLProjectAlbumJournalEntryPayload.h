@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;

- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;

@end
