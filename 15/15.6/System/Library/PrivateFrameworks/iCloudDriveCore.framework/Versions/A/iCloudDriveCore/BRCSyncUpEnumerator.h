@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, PQLResultSet, BRCClientZone, NSMutableArray;
@protocol PQLEnumeration;

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    unsigned int _currentDepth;
    BRCClientZone *_clientZone;
    NSMutableDictionary *_visitedItemIDsToDepthMap;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableSet *_itemIDsNeedingDirectoryFetch;
    NSMutableSet *_itemIDsWithChildrenBeingCopiedToNewZone;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    NSMutableArray *_tooDeepItems;
    int _stage;
}

@property (readonly, nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) unsigned long long retryAfter;
@property (readonly, nonatomic) NSMutableSet *chainedParentIDAllowlist;
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare;

- (void).cxx_destruct;
- (void)invalidate;
- (id)nextObject;
- (char)isDenyListed:(id)a0;
- (char)_denyListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)a0 now:(unsigned long long)a1;
- (char)_checkForSharesWithinSharesWithItem:(id)a0;
- (char)_checkIfParentNeedsRevivalWithParentItem:(id)a0 item:(id)a1;
- (char)_checkIfShouldDenylistForChildrenOfItemBeingCopiedToNewZone:(id)a0;
- (char)_checkIfShouldDenylistForParentDirectoryFaultWithItem:(id)a0 needsDirFaultCheck:(char *)a1;
- (char)_checkIfShouldDenylistForPathMatch:(id)a0;
- (void)_denyListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2;
- (void)_denyListDescendantStack:(id)a0 parentItem:(id)a1 andAddToSet:(id)a2 descendantBlock:(id /* block */)a3;
- (id)_documentsOrAliasesNeedingSyncUpEnumerator;
- (char)_handlePendingShareItemWithPendingDeleteChildren:(id)a0;
- (char)_handleSharedItemWhichMovedToNewShare:(id)a0 rootItem:(id)a1;
- (id)_liveDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (id)_tombstoneLeavesNeedingSyncUpEnumerator;
- (char)handleItemForOSUpgrade:(id)a0 parentItemID:(id)a1;
- (id)initWithClientZone:(id)a0;
- (char)shouldDenylistRemainingDeletionParentStackForItem:(id)a0;

@end
