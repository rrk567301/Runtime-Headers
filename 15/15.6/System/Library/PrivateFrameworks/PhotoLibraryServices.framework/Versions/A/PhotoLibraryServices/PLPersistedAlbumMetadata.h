@class NSData, NSString, NSDate, NSURL, NSMutableOrderedSet, NSNumber, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject

@property (retain, nonatomic) PLGenericAlbum *genericAlbum;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *kind;
@property (nonatomic, getter=isPinned) char pinned;
@property (nonatomic, getter=isPrototype) char prototype;
@property (nonatomic, getter=isInTrash) char inTrash;
@property (nonatomic) char customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSString *customKeyAssetUUID;
@property (retain, nonatomic) NSMutableOrderedSet *assetUUIDs;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSData *userQueryData;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSString *projectDocumentType;
@property (readonly, nonatomic) char isFolder;
@property (nonatomic) char allowsOverwrite;

+ (char)isValidPath:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_fetchChildUUIDs;
- (char)_readMetadata;
- (void)_saveMetadata;
- (id)initWithPLGenericAlbum:(id)a0 pathManager:(id)a1;
- (id)initWithPersistedDataAtURL:(id)a0;
- (id)initWithTitle:(id)a0 uuid:(id)a1 cloudGUID:(id)a2 kind:(id)a3 assetUUIDs:(id)a4 persistedAlbumDataDirectory:(id)a5;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)updateChildrenOrderingInAlbum:(id)a0 includePendingAssetChanges:(char)a1;

@end
