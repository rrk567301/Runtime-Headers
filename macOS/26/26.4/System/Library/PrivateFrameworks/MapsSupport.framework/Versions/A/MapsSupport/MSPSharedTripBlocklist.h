@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (BOOL)containsIdentifier:(id)a0;
- (id)_fetchSyncedIdentifiers;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (void)storeDidChange:(id)a0;
- (void)blockIdentifier:(id)a0;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)blockIdentifiers:(id)a0;
- (id)description;
- (void)purgeExpiredIdentifiers;
- (void)clearBlockedIdentifiers;
- (void)_reloadBlockedIdentifiersFromSync;
- (void)unblockIdentifiers:(id)a0;

@end
