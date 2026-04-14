@class NSSet;

@interface PLImportSessionJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) NSSet *assetUUIDs;

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;

@end
