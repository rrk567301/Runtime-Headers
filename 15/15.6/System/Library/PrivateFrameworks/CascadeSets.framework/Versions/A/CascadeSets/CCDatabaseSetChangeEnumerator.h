@class CCDatabaseSetStateReader, CCDatabaseSetStateVectorBuilder, CCSet, CCDataResourceReadAccess, CKDistributedTimestampStateVector, CCDatabaseJoinedProvenance, CCDatabaseDeviceMapping, NSObject, CCDatabaseValueRowEnumerator, NSNumber;
@protocol CCDatabaseReadOnlyAccess;

@interface CCDatabaseSetChangeEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSet *_set;
    CCDataResourceReadAccess *_readAccess;
    NSObject<CCDatabaseReadOnlyAccess> *_databaseAccess;
    CCDatabaseSetStateReader *_stateReader;
    CKDistributedTimestampStateVector *_lastContentStateVector;
    CKDistributedTimestampStateVector *_lastMetaContentStateVector;
    CKDistributedTimestampStateVector *_contentContentsVector;
    CKDistributedTimestampStateVector *_contentRemovalsVector;
    CKDistributedTimestampStateVector *_metaContentContentsVector;
    CKDistributedTimestampStateVector *_metaContentRemovalsVector;
    CCDatabaseValueRowEnumerator *_provenanceEnumerator;
    CCDatabaseJoinedProvenance *_nextRow;
    CCDatabaseSetStateVectorBuilder *_seenContentBuilder;
    CCDatabaseSetStateVectorBuilder *_seenMetaContentBuilder;
    NSNumber *_localResourceGeneration;
    NSNumber *_lastDeltaDate;
    CCDatabaseDeviceMapping *_deviceMapping;
}

+ (unsigned long long)localItemInstanceCountFromBookmark:(id)a0;
+ (unsigned long long)sharedItemCountFromBookmark:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)reset:(id *)a0;
- (id)next;
- (id)nextBookmark;
- (id)_contentMessageFromContentData:(id)a0;
- (char)_imputeChanges:(id *)a0;
- (long long)_lastDeltaDate;
- (long long)_localResourceGenerationFromDatabaseDeviceMapping;
- (id)_metaContentMessageFromMetaContentData:(id)a0;
- (char)_obtainDatabaseAccess:(id *)a0;
- (char)_resetDatabaseAccess:(id *)a0;
- (char)beginWithBookmark:(id)a0 error:(id *)a1;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (char)isBookmarkUpToDate:(id)a0;
- (id)itemInstanceCount:(id *)a0;
- (id)sharedItemCount:(id *)a0;

@end
