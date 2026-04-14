@class NSString;

@interface PLAssetResourceUploadJobConfigurationEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) short state;

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (void).cxx_destruct;
- (id)insertAssetResourceUploadJobConfigurationFromDataInManagedObjectContext:(id)a0;

@end
