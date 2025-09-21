@class NSDate, PLPerson, NSString, NSArray, NSURL, NSSet, NSDictionary, NSNumber;

@interface PLPersistedPersonMetadata : NSObject {
    char _cplEnabled;
}

@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *personUUID;
@property (nonatomic) NSNumber *detectionType;
@property (retain, nonatomic) NSString *mergeTargetPersonUUID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) unsigned int manualOrder;
@property (nonatomic) int type;
@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSArray *rejectedFaces;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short keyFacePickSource;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (retain, nonatomic) NSArray *userFeedbacksDictionaryArray;
@property (nonatomic) short assetSortOrder;
@property (nonatomic) long long fromVersion;
@property (readonly, nonatomic) NSString *userFeedbackUUID;
@property (readonly, nonatomic) short userFeedbackType;
@property (readonly, nonatomic) short userFeedbackFeature;
@property (readonly, nonatomic) NSString *userFeedbackContext;
@property (readonly, nonatomic) NSDate *userFeedbackLastModifiedDate;

+ (id)_fetchFacesWithPredicate:(id)a0 resultType:(unsigned long long)a1 managedObjectContext:(id)a2 error:(id *)a3;
+ (id)_persistedFaceMetadataWithFaces:(id)a0 keyFace:(id)a1 clusterRejectedFaceIDs:(id)a2;
+ (id)_clusterRejectedFaceIDsWithPerson:(id)a0;
+ (char)_deleteMetadataFileWithMetadataURL:(id)a0;
+ (id)_detectedFacesToArchiveWithPerson:(id)a0;
+ (id)_metadataFileURLForPersonUUID:(id)a0 pathManager:(id)a1;
+ (id)_rejectedFacesToArchiveWithPerson:(id)a0;
+ (char)deleteMetadataFileForPersonUUID:(id)a0 pathManager:(id)a1;
+ (char)isValidPath:(id)a0;
+ (char)isValidPath:(id)a0 outPersonUUID:(id *)a1;
+ (void)performPostImportMigrationFromVersion:(unsigned long long)a0 fromDataInManagedObjectContext:(id)a1;
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)a0 cplEnabled:(char)a1;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)a0 fromDataInManagedObjectContext:(id)a1;
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)a0;
+ (id)urlsForPersistedPersonsInMetadataDirectoryWithPathManager:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (char)readMetadata;
- (void)_addAssetUUIDsFromFaces:(id)a0 toMutableSet:(id)a1;
- (char)_insertDetectedFacesOnPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(char)a2;
- (char)_insertRejectedFacesOnPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(char)a2;
- (id)_metadataData;
- (char)_readUUID;
- (void)_saveMetadata;
- (id)detectedFaceIdentifiers;
- (char)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(char)a1;
- (id)initWithPLPerson:(id)a0 metadataURL:(id)a1;
- (id)initWithPLPerson:(id)a0 pathManager:(id)a1;
- (id)initWithPersistedDataAtURL:(id)a0 cplEnabled:(char)a1;
- (id)initWithPersistedDataAtURL:(id)a0 deferUnarchiving:(char)a1 cplEnabled:(char)a2;
- (id)insertPersonFromDataInManagedObjectContext:(id)a0;
- (char)matchesEntityInLibraryBackedByManagedObjectContext:(id)a0 diff:(id *)a1;
- (char)readDetectedFaces;
- (char)readDetectedFacesFromKeyedUnarchiver:(id)a0;
- (void)removePersistedData;
- (char)updateFacesInPerson:(id)a0 fromDataInManagedObjectContext:(id)a1 deferUnmatched:(char)a2;
- (void)writePersistedData;

@end
