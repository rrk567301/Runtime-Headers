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
    NSNumber *_lastTransactionNumber;
    long long _transactionCount;
    long long _changeCount;
}

@property (nonatomic, getter=isCoalescedEvent) char coalescedEvent;
@property (nonatomic, getter=isSyncChange) char syncChange;
@property (nonatomic, getter=isUnknownMergeEvent) char unknownMergeEvent;
@property (copy, nonatomic) id /* block */ transactionFilter;
@property (copy, nonatomic) id /* block */ updatedPropertyFilter;
@property (readonly, nonatomic, getter=isEmpty) char empty;

+ (id)localEventFromTransaction:(id)a0;
+ (id)localEventWithBuilderBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)recordChange:(id)a0;
- (void)recordTransaction:(id)a0;
- (void)recordDeletedCloudGUID:(id)a0 forType:(long long)a1;
- (id)buildLocalEvent;
- (Class)_cloudDeletableEntityFromChange:(id)a0;
- (id)_filteredUpdatedPropertiesFromChange:(id)a0;
- (char)_isCloudStateDeletedOnTombstone:(id)a0;
- (void)_recordCloudDeleteForChange:(id)a0;
- (void)_recordDeleteChange:(id)a0;
- (void)_recordInsertChange:(id)a0;
- (void)_recordUpdateChange:(id)a0;
- (char)_shouldRecordTransaction:(id)a0;
- (void)recordAllTransactionsFromIterator:(id)a0;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)a0;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)a0;
- (void)recordDeletedObjectID:(id)a0;
- (void)recordInsertedObjectID:(id)a0;
- (void)recordTransactionsFromIterator:(id)a0 untilTest:(id /* block */)a1;
- (void)recordUpdatedAttributes:(unsigned long long)a0 andRelationships:(unsigned long long)a1 forObjectID:(id)a2;
- (void)recordUpdatedObjectID:(id)a0;

@end
