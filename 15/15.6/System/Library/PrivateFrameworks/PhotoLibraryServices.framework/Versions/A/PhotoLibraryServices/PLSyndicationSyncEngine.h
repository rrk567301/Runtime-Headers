@class NSSet;
@protocol PLSyndicationSyncEngineDelegate;

@interface PLSyndicationSyncEngine : NSObject {
    NSSet *_suppportedQueryTypes;
    unsigned int _savedAssetTypeMask;
}

@property (readonly, weak, nonatomic) id<PLSyndicationSyncEngineDelegate> delegate;

+ (void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
+ (void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:(id /* block */)a0;
+ (double)maxSpotlightQueryTimeInterval;
+ (double)minSpotlightQueryTimeInterval;

- (void).cxx_destruct;
- (char)_canHandleSearchableItem:(id)a0 forQueryType:(long long)a1;
- (void)_changeSyncRangeDenominatorWithInterrupted:(char)a0 success:(char)a1 library:(id)a2;
- (void)_createOrUpdateObjectFromSearchableItem:(id)a0 library:(id)a1 fullIndexSyncStartDate:(id)a2;
- (char)_deleteConversationWithSyndicationIdentifiers:(id)a0 library:(id)a1;
- (char)_deleteGuestAssetWithSyndicationIdentifiers:(id)a0 library:(id)a1;
- (char)_isQueryTypeSupported:(long long)a0;
- (void)_processSearchableItem:(id)a0 forQueryType:(long long)a1 library:(id)a2 fullIndexSyncStartDate:(id)a3;
- (void)_processZombieItem:(id)a0 library:(id)a1;
- (void)_processZombieItems:(id)a0 library:(id)a1;
- (void)_updateSyncTokenWithDate:(id)a0 queryType:(long long)a1 library:(id)a2 syncTokenIsCurrent:(char)a3;
- (id)initWithQueryTypes:(id)a0 savedAssetTypeMask:(unsigned int)a1 delegate:(id)a2;
- (char)syncSyndicationItemWithUniqueIdentifier:(id)a0 bundleID:(id)a1 queryType:(long long)a2 library:(id)a3 error:(id *)a4;
- (void)syncSyndicationItemsWithStartDate:(id)a0 endDate:(id)a1 queryType:(long long)a2 library:(id)a3 completion:(id /* block */)a4;

@end
