@class NSMutableDictionary, BRCDataOrDocsScopeGatherer, NSObject, BRFileObjectID, BRCNotificationManager, NSString, NSSet, NSHashTable, BRCListDirectoryContentsOperation, BRCItemGlobalID, NSMutableSet, BRCXPCClient, BRNotificationQueue;
@protocol OS_dispatch_group, BRCNotificationPipeDelegate, OS_dispatch_queue, BRItemNotificationReceiving;

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending, BRCListOperationDelegate> {
    id<BRItemNotificationReceiving> _receiver;
    BRNotificationQueue *_notifs;
    id /* block */ _boostReply;
    BRCXPCClient *_client;
    BRCDataOrDocsScopeGatherer *_gatherer;
    NSObject<OS_dispatch_group> *_gatherGroup;
    BOOL _hasUpdatesInFlight;
    BOOL _volumeIsCaseSensitive;
    NSMutableDictionary *_pendingProgressUpdatesByID;
    BOOL _hasProgressUpdatesInFlight;
    unsigned long long _initialGatherMaxRank;
    unsigned long long _secondaryGatherMaxRank;
    BRCListDirectoryContentsOperation *_listOp;
    int _watchKind;
    unsigned short _watchItemOptions;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalAppLibraries;
    NSSet *_watchedAppLibraries;
    NSHashTable *_recursiveScopeListOps;
    NSSet *_watchedAppLibraryIDs;
    unsigned long long _watchedAppLibrariesFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID;
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (readonly, nonatomic) BRCNotificationManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<BRCNotificationPipeDelegate> delegate;

- (void)dealloc;
- (oneway void)invalidate;
- (void)close;
- (void).cxx_destruct;
- (void)boostPriority:(id /* block */)a0;
- (void)watchScopes:(unsigned short)a0 appLibraryIDs:(id)a1 gatherReply:(id /* block */)a2;
- (void)watchScopes:(unsigned short)a0 gatherReply:(id /* block */)a1;
- (void)watchItemsNamesPrefixedBy:(id)a0 inScopes:(unsigned short)a1 appLibraryIDs:(id)a2 gatherReply:(id /* block */)a3;
- (void)watchItemWithFileObjectID:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;
- (void)watchItemAtURL:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;
- (void)addNotification:(id)a0 asDead:(BOOL)a1;
- (void)addDequeueCallback:(id /* block */)a0;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)_registerAsWatcherIfNeeded;
- (id)_initWithManager:(id)a0 startingRank:(unsigned long long)a1;
- (id)initWithXPCReceiver:(id)a0 client:(id)a1 manager:(id)a2 startingRank:(unsigned long long)a3;
- (id)initWithReceiver:(id)a0 manager:(id)a1 startingRank:(unsigned long long)a2;
- (int)_isInterestingUpdate:(id)a0;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)a0 toArray:(id)a1;
- (void)_prepareForSecondGatherWithRank:(unsigned long long)a0;
- (void)processUpdates:(id)a0 withRank:(unsigned long long)a1;
- (void)_flushProgressUpdates;
- (void)_processProgressUpdates:(id)a0;
- (void)processProgressUpdates:(id)a0;
- (void)__flush;
- (void)_gatherIfNeededAndFlushAsync;
- (void)_stopWatchingItems;
- (void)watchScopes:(unsigned short)a0 trustedAppLibraryIDs:(id)a1 gatherReply:(id /* block */)a2;
- (void)_watchItem:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;
- (void)invalidateIfWatchingAppLibraryIDs:(id)a0;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)a0;
- (BOOL)isWatchingGlobalItemID:(id)a0;
- (void)_triggerImmediateReadOfDocumentIfNeeded;
- (void)watchItemAtURL:(id)a0 lookup:(id)a1 options:(unsigned short)a2 gatherReply:(id /* block */)a3;
- (void)watchItemInProcessAtURL:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;

@end
