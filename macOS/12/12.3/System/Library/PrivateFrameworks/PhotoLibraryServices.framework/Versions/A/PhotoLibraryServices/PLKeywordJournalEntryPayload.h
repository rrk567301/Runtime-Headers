@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *title;

+ (unsigned int)payloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertKeywordFromDataInManagedObjectContext:(id)a0;

@end
