@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (void)clearBlockedIdentifiers;
- (void)blockIdentifiers:(id)a0;
- (void)blockIdentifier:(id)a0;
- (id)_fetchSyncedIdentifiers;
- (BOOL)containsIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void)storeDidChange:(id)a0;
- (void)_reloadBlockedIdentifiersFromSync;
- (void)purgeExpiredIdentifiers;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void).cxx_destruct;

@end
