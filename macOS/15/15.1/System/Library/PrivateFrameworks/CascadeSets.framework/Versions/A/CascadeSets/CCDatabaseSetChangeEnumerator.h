@class CCDatabaseSetStateVectorBuilder, CCDatabaseSetStateReader, CCSet, CKDistributedTimestampStateVector, NSMutableDictionary, CCDatabaseDeviceMapping, CCMutableSetChange, NSObject, CCDatabaseValueRowEnumerator, NSNumber;
@protocol CCDatabaseReadOnlyAccess;

@interface CCDatabaseSetChangeEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSet *_set;
    NSObject<CCDatabaseReadOnlyAccess> *_databaseAccess;
    CCDatabaseSetStateReader *_stateReader;
    CKDistributedTimestampStateVector *_lastContentStateVector;
    CKDistributedTimestampStateVector *_lastMetaContentStateVector;
    CKDistributedTimestampStateVector *_contentContentsVector;
    CKDistributedTimestampStateVector *_contentRemovalsVector;
    CKDistributedTimestampStateVector *_metaContentContentsVector;
    CKDistributedTimestampStateVector *_metaContentRemovalsVector;
    CCDatabaseValueRowEnumerator *_provenanceEnumerator;
    CCMutableSetChange *_currentMutableSetChange;
    CCDatabaseSetStateVectorBuilder *_seenContentBuilder;
    CCDatabaseSetStateVectorBuilder *_seenMetaContentBuilder;
    NSNumber *_resourceVersion;
    NSNumber *_lastDeltaDate;
    CCDatabaseDeviceMapping *_deviceMapping;
    NSMutableDictionary *_deviceCache;
}

+ (unsigned long long)localItemInstanceCountFromBookmark:(id)a0;
+ (unsigned long long)sharedItemCountFromBookmark:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)next;
- (BOOL)reset:(id *)a0;
- (long long)resourceVersion;
- (id)nextBookmark;
- (id)_cachedDeviceWithRowId:(id)a0;
- (BOOL)_resetDatabaseAccess:(id *)a0;
- (BOOL)beginWithBookmark:(id)a0 error:(id *)a1;
- (id)contentMessageFromContentData:(id)a0;
- (BOOL)imputeChangesSinceLastContentVector:(id)a0 lastMetaContentVector:(id)a1 error:(id *)a2;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (BOOL)isBookmarkUpToDate:(id)a0;
- (id)itemInstanceCount:(id *)a0;
- (long long)lastDeltaDate;
- (id)metaContentMessageFromMetaContentData:(id)a0;
- (id)sharedItemCount:(id *)a0;

@end
