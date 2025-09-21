@class PFCloudKitArchivingUtilities, PFCloudKitStoreComparisonCache;

@interface PFCloudKitStoreComparer : NSObject

@property (readonly, nonatomic) PFCloudKitStoreComparisonCache *cache;
@property (readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities;
@property (nonatomic) char onlyCompareSharedZones;

+ (id)trimExcessiveValuesForLog:(id)a0;

- (void)dealloc;
- (char)compareAttributesOnObject:(id)a0 toObject:(id)a1 error:(id *)a2;
- (char)compareCloudKitMetadataOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (char)compareContentOfStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (char)compareDatabaseScopeAndIdentityInStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (char)compareObjectsInStore:(id)a0 toStore:(id)a1 error:(id *)a2;
- (char)compareRelationshipsOfRecordID:(id)a0 withStoreObject:(id)a1 andOtherObject:(id)a2 error:(id *)a3;
- (char)ensureContentsMatch:(id *)a0;
- (char)ensureContentsOfRecordStorageMatchForStorage:(id)a0 andOtherStore:(id)a1 error:(id *)a2;
- (char)ensureContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
- (char)ensureMirroredRelationshipsMatchForStore:(id)a0 otherStore:(id)a1 error:(id *)a2;
- (char)ensureMoveReceiptsMatchForStore:(id)a0 otherStore:(id)a1 error:(id *)a2;
- (char)ensureRecordMetadataMatchesForRecordID:(id)a0 inStore:(id)a1 andOtherStore:(id)a2 error:(id *)a3;
- (char)ensureStoresAgreeOnCloudKitTables:(id)a0 error:(id *)a1;
- (id)getObjectMatchingRecordID:(id)a0 fromStore:(id)a1 withManagedObjectContext:(id)a2;
- (id)getRecordIDsForRelationship:(id)a0 onObject:(id)a1;
- (id)initWithStore:(id)a0 otherStore:(id)a1;
- (char)isValue:(id)a0 equalToValue:(id)a1 forAttribute:(id)a2;
- (char)validateValue:(id)a0 againstOtherValue:(id)a1 forIgnoredAttribute:(id)a2;

@end
