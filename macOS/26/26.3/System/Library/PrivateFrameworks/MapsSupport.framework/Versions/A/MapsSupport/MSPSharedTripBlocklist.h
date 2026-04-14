@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (void)_reloadBlockedIdentifiersFromSync;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)blockIdentifier:(id)a0;
- (id)description;
- (id)init;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (id)_fetchSyncedIdentifiers;
- (void)clearBlockedIdentifiers;
- (void).cxx_destruct;
- (void)storeDidChange:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (void)purgeExpiredIdentifiers;
- (void)blockIdentifiers:(id)a0;

@end
