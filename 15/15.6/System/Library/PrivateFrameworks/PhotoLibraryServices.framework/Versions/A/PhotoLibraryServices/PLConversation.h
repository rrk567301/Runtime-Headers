@class NSSet, NSString;

@interface PLConversation : PLGenericAlbum <PLCreateFromSearchableItem>

@property (nonatomic) char needsPersistenceUpdate;
@property (nonatomic) char albumShouldBeAutomaticallyDeleted;
@property (nonatomic) unsigned short syndicate;
@property (retain, nonatomic) NSSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)albumWithConversationID:(id)a0 inLibrary:(id)a1;
+ (id)albumsWithConversationIDs:(id)a0 inLibrary:(id)a1;
+ (id)createOrUpdateObjectFromSearchableItem:(id)a0 library:(id)a1 fullIndexSyncStartDate:(id)a2 createIfNeeded:(char)a3 didCreate:(char *)a4 isSyndicatable:(char *)a5 error:(id *)a6;
+ (id)insertNewConversationAlbumWithConversationID:(id)a0 inManagedObjectContext:(id)a1;

- (char)isEmpty;
- (unsigned long long)count;
- (void)willSave;
- (char)canPerformEditOperation:(unsigned long long)a0;
- (id)mutableAssets;
- (void)_updateEndDate:(id)a0;
- (char)_isAssetIncludedInConversationDates:(id)a0;
- (char)_isDateAfterEndDate:(id)a0;
- (char)_isDateBeforeStartDate:(id)a0;
- (id)_orderedBatchedAssets;
- (void)_updateAssetSyndicationState:(unsigned short)a0;
- (void)_updateStartDate:(id)a0;
- (void)updateConversationDatesFromAddedAsset:(id)a0;

@end
