@class NSData, NSString, NSURL, PLMemory, NSDate, NSSet, NSOrderedSet, NSDictionary, NSArray;

@interface PLPersistedMemoryMetadata : NSObject

@property (retain, nonatomic) PLMemory *memory;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isRejected) char rejected;
@property (nonatomic, getter=isFavorite) char favorite;
@property (nonatomic) short pendingState;
@property (nonatomic) short creationType;
@property (nonatomic) short userActionOptions;
@property (nonatomic) short category;
@property (nonatomic) short subcategory;
@property (retain, nonatomic) NSString *keyAssetUUID;
@property (retain, nonatomic) NSSet *representativeAssetUUIDs;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *userCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *userRemovedAssetUUIDs;
@property (retain, nonatomic) NSOrderedSet *customUserAssetUUIDs;
@property (retain, nonatomic) NSData *movieData;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSData *photosGraphData;
@property (retain, nonatomic) NSData *assetListPredicate;
@property (nonatomic) double score;
@property (nonatomic) short notificationState;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic) short featuredState;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (retain, nonatomic) NSArray *userFeedbacksDictionaryArray;

+ (char)isValidPath:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isObsolete;
- (id)_metadataData;
- (char)_readMetadata;
- (void)_saveMetadata;
- (char)_updateAssetsInMemory:(id)a0 relationshipName:(id)a1 persistedAssetUUIDs:(id)a2 includePendingChanges:(char)a3;
- (char)_updateAssetsInMemory:(id)a0 relationshipName:(id)a1 persistedOrderedAssetUUIDs:(id)a2 includePendingChanges:(char)a3;
- (char)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(char)a1;
- (id)initWithPLMemory:(id)a0 metadataURL:(id)a1;
- (id)initWithPLMemory:(id)a0 pathManager:(id)a1;
- (id)initWithPersistedDataAtURL:(id)a0;
- (id)insertMemoryFromDataInManagedObjectContext:(id)a0;
- (void)removePersistedData;
- (char)updateAssetsInMemory:(id)a0 includePendingAssetChanges:(char)a1;
- (void)writePersistedData;

@end
