@class NSHashTable, NSString, EMQuery, NSOrderedSet, NSMutableSet, NSObject, NSMutableOrderedSet, EFFuture, EFPromise;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMQueryingCollection : EMRepositoryObject <EFLoggable, EFSignpostable, EMCollection> {
    NSMutableOrderedSet *_itemIDs;
    NSMutableSet *_itemIDsAnticipatingDelete;
    NSOrderedSet *_recoveringItemIDs;
    EFPromise *_allItemIDsPromise;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemIDsLock;
    char _foundAllItemIDs;
    char _foundFirstBatch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeObserversLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) id<EFCancelable> cancelationToken;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (readonly, nonatomic) id<EFScheduler> queryScheduler;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;
@property (readonly, nonatomic) EFFuture *allItemIDs;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)stopObserving:(id)a0;
- (void)refresh;
- (void)beginObserving:(id)a0;
- (char)containsItemID:(id)a0 includeRecovery:(char)a1;
- (id)firstExistingItemIDAfterItemID:(id)a0;
- (char)containsItemID:(id)a0;
- (void)insertItemIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)_cancelQuery;
- (void)_cancelQueryIfNeeded;
- (void)_commonInitWithQuery:(id)a0;
- (void)_filterAndTransformObjectIDs:(id)a0 before:(char)a1 existingObjectID:(id)a2 batchBlock:(id /* block */)a3;
- (id)_firstExistingItemIDForItemID:(id)a0 inReverse:(char)a1;
- (id)_itemIDsForObjectIDs:(id)a0;
- (id)_iterateItemIDsStartingAtItemID:(id)a0 inReverse:(char)a1 includeStartingItem:(char)a2 withBlock:(id /* block */)a3;
- (void)_notifyNewChangeObserverAboutExistingState:(id)a0;
- (void)_performQuery;
- (void)_performQueryIfNeeded;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)finishRecovery;
- (id)firstExistingItemIDBeforeItemID:(id)a0;
- (id)initWithObjectID:(id)a0 query:(id)a1;
- (id)initWithQuery:(id)a0 repository:(id)a1;
- (void)insertItemIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (char)isRecovering;
- (id)itemIDForObjectID:(id)a0;
- (id)iterateItemIDsStartingAtItemID:(id)a0 inReverse:(char)a1 withBlock:(id /* block */)a2;
- (void)notifyChangeObserver:(id)a0 stockedItemIDs:(id)a1;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)notifyChangeObserversAboutChangedItemIDs:(id)a0 extraInfo:(id)a1;
- (void)notifyChangeObserversAboutMovedItemIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)notifyChangeObserversAboutMovedItemIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)notifyNewChangeObserverAboutExistingState:(id)a0;
- (char)objectIDBelongsToCollection:(id)a0;
- (id)objectIDForItemID:(id)a0;
- (char)observerContainsObjectID:(id)a0;
- (void)queryAnticipatesDeletedObjectIDs:(id)a0;
- (void)queryDidFinishInitialLoad;
- (void)queryDidFinishRemoteSearch;
- (void)queryDidStartRecovery;
- (void)queryMatchedAddedObjectIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)queryMatchedAddedObjectIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)queryMatchedChangedObjectIDs:(id)a0 extraInfo:(id)a1;
- (void)queryMatchedDeletedObjectIDs:(id)a0;
- (void)queryMatchedMovedObjectIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)queryMatchedMovedObjectIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)queryReplacedObjectID:(id)a0 withNewObjectID:(id)a1;
- (id)removeItemIDs:(id)a0;

@end
