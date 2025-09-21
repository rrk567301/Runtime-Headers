@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSNumber;

@interface PLLocalChangeEventBuilder : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    NSMutableArray *_deletedAssetCloudGUIDs;
    NSMutableArray *_deletedAlbumCloudGUIDs;
    NSMutableArray *_deletedMemoryCloudGUIDs;
    NSMutableArray *_deletedPersonCloudGUIDs;
    NSMutableArray *_deletedFaceCropCloudGUIDs;
    NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSuggestionCloudGUIDs;
    NSMutableArray *_deletedUserFeedbackCloudGUIDs;
    NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
    NSMutableArray *_deletedOwnedLibraryScopeCloudGUIDs;
    NSMutableArray *_deletedSubscribedLibraryScopeCloudGUIDs;
    NSMutableArray *_deletedSocialGroupCloudGUIDs;
    NSMutableArray *_deletedOwnedCollectionShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedCollectionShareCloudGUIDs;
    NSMutableArray *_deletedReactCloudGUIDs;
    NSMutableArray *_deletedTextCommentCloudGUIDs;
    NSNumber *_lastTransactionNumber;
    long long _transactionCount;
    long long _changeCount;
}

@property (nonatomic, getter=isCoalescedEvent) BOOL coalescedEvent;
@property (nonatomic, getter=isSyncChange) BOOL syncChange;
@property (nonatomic, getter=isUnknownMergeEvent) BOOL unknownMergeEvent;
@property (copy, nonatomic) id /* block */ transactionFilter;
@property (copy, nonatomic) id /* block */ updatedPropertyFilter;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)localEventFromTransaction:(id)a0;
+ (id)localEventWithBuilderBlock:(id /* block */)a0;

- (void)recordUpdatedObjectID:(id)a0;
- (void)_recordUpdateChange:(id)a0;
- (void)recordDeletedCloudGUID:(id)a0 forType:(long long)a1;
- (void)recordTransactionsFromIterator:(id)a0 untilTest:(id /* block */)a1;
- (id)_filteredUpdatedPropertiesFromChange:(id)a0;
- (void)_recordInsertChange:(id)a0;
- (BOOL)_isCloudStateDeletedOnTombstone:(id)a0;
- (BOOL)_shouldRecordTransaction:(id)a0;
- (void)recordChange:(id)a0;
- (void)recordAllTransactionsFromIterator:(id)a0;
- (void)_recordCloudDeleteForChange:(id)a0;
- (id)init;
- (void)recordTransaction:(id)a0;
- (void)recordUpdatedAttributes:(unsigned long long)a0 andRelationships:(unsigned long long)a1 forObjectID:(id)a2;
- (void)recordInsertedObjectID:(id)a0;
- (id)buildLocalEvent;
- (void)_recordDeleteChange:(id)a0;
- (Class)_cloudDeletableEntityFromChange:(id)a0;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)a0;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)a0;
- (void)recordDeletedObjectID:(id)a0;
- (void).cxx_destruct;

@end
