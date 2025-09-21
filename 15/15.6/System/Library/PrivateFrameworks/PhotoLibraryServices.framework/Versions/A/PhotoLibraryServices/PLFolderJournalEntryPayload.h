@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) char isRootFolder;
@property (readonly, nonatomic) char isProjectAlbumRootFolder;
@property (readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;

+ (unsigned int)payloadVersion;
+ (char)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (void)updateChildrenOrderingInFolder:(id)a0 usingChildCollectionUUIDs:(id)a1 includePendingChanges:(char)a2;

- (char)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)updateAlbum:(id)a0 includePendingChanges:(char)a1;
- (char)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
