@class CCSet, CKDistributedTimestampStateVector, NSSet, NSMutableDictionary, NSDictionary, CCMutableSetChange, CCReplicatedStateEnumerator, NSObject, CCDatabaseValueRowEnumerator;
@protocol CCDatabaseReadOnlyAccess;

@interface CCReplicatedEntityEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSet *_set;
    NSObject<CCDatabaseReadOnlyAccess> *_databaseAccess;
    CCReplicatedStateEnumerator *_stateEnumerator;
    NSDictionary *_rowIdToDeviceRecordMap;
    CKDistributedTimestampStateVector *_lastContentStateVector;
    CKDistributedTimestampStateVector *_lastMetaContentStateVector;
    BOOL _hasEmptyContentBookmark;
    NSSet *_newlyAddedContentHashes;
    NSSet *_globallyRemovedContentHashes;
    CKDistributedTimestampStateVector *_contentContentsVector;
    CKDistributedTimestampStateVector *_contentRemovalsVector;
    CKDistributedTimestampStateVector *_metaContentContentsVector;
    CKDistributedTimestampStateVector *_metaContentRemovalsVector;
    NSMutableDictionary *_deviceSiteIdentifierCache;
    CCDatabaseValueRowEnumerator *_provenanceEnumerator;
    CCMutableSetChange *_currentMutableSetChange;
    CKDistributedTimestampStateVector *_seenContentStateVector;
    CKDistributedTimestampStateVector *_seenMetaContentStateVector;
}

- (id)init;
- (void).cxx_destruct;
- (id)next;
- (unsigned long long)sharedItemCount;
- (unsigned char)_deviceOptionsFromDeviceIdentifier:(id)a0;
- (id)_siteIdentifierForDevice:(id)a0;
- (BOOL)beginReadTransaction:(id *)a0;
- (id)contentMessageFromContentData:(id)a0;
- (BOOL)endReadTransaction:(id *)a0;
- (BOOL)imputeChangesSinceLastBookmarkWithError:(id *)a0;
- (BOOL)imputeChangesSinceLastContentVector:(id)a0 lastMetaContentVector:(id)a1 error:(id *)a2;
- (id)initWithSet:(id)a0 readAccess:(id)a1 lastBookmark:(id)a2;
- (unsigned long long)itemInstanceCount;
- (id)metaContentMessageFromMetaContentData:(id)a0;
- (id)nextBookmark;

@end
