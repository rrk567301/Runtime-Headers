@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (void)storeDidChange:(id)a0;
- (void)_reloadBlockedIdentifiersFromSync;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)blockIdentifier:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (id)description;
- (id)_fetchSyncedIdentifiers;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)clearBlockedIdentifiers;
- (void)purgeExpiredIdentifiers;
- (void)blockIdentifiers:(id)a0;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (id)init;

@end
