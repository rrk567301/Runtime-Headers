@class NSMutableSet, NSDate, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlacklist : NSObject {
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsIdentifier:(id)a0;
- (void)_storeIdentifiers;
- (void)blockIdentifier:(id)a0;
- (void)_loadIdentifiers;
- (void)updateBlockedListFromStore:(id)a0;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (void)clearList;

@end
