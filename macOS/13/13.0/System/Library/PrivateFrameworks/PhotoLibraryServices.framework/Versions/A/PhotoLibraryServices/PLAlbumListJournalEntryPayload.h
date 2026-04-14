@class NSOrderedSet;

@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSOrderedSet *albumUUIDs;
@property (readonly, nonatomic) short albumListType;

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;

- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)insertAlbumListFromDataInManagedObjectContext:(id)a0;
- (void)updateAlbumList:(id)a0;

@end
