@class NSArray, NSString, NSData;

@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>

@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (copy, nonatomic) NSArray *deserializedLastRemoteShortcutOrdering;
@property (copy, nonatomic) NSArray *deserializedLastRemoteCollectionOrdering;
@property (copy, nonatomic) NSArray *deserializedLastRemoteCollectionOrderingSubset;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (retain, nonatomic) NSData *cloudKitOrderingRecordMetadata;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingData;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingSubsetData;
@property (retain, nonatomic) NSData *lastRemoteShortcutOrderingData;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (nonatomic) long long temporarySyncFolderIcon;
@property (copy, nonatomic) NSString *temporarySyncFolderName;
@property (nonatomic) BOOL tombstoned;
@property (nonatomic) long long wantedEncryptedSchemaVersion;

+ (id)fetchRequest;

- (id)descriptor;

@end
