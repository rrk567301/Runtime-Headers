@class NSArray, NSMutableDictionary, NSObject;
@protocol SpotlightReceiver, SpotlightScheduledReceiver;

@interface CSReceiverConnection : CSXPCConnection {
    NSMutableDictionary *_configs;
    NSMutableDictionary *_indexes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<SpotlightReceiver> *receiver;
@property (readonly, nonatomic) NSObject<SpotlightScheduledReceiver> *scheduledReceiver;
@property (copy, nonatomic) NSArray *bundleIDs;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy, nonatomic) NSArray *INIntentClassNames;
@property (readonly, nonatomic) NSArray *configs;

- (int)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (int)donateRelevantShortcuts:(id)a0 bundleID:(id)a1;
- (int)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (int)deleteFromBundle:(id)a0 sinceDate:(id)a1 domains:(id)a2 deletes:(id)a3;
- (id)indexForBundleID:(id)a0 protectionClass:(id)a1;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (id)initWithScheduledReceiver:(id)a0 forServiceName:(id)a1;
- (void)deleteWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 donation:(id)a3 completionHandler:(id /* block */)a4;
- (void)indexWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 donation:(id)a3 additionalAttributes:(id)a4 config:(id)a5 completionHandler:(id /* block */)a6;
- (id)configForIdentifier:(id)a0;
- (void)addConfiguration:(id)a0;
- (void).cxx_destruct;
- (int)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (int)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (BOOL)enableDebuggability;
- (int)handleSetup:(id)a0;
- (int)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (int)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (int)addInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (id)initWithReceiver:(id)a0 forServiceName:(id)a1;
- (int)deleteAllUserActivities:(id)a0;
- (int)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;
- (int)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (id)fetchableIdentifiersFromDonation:(id)a0 additionalAttributes:(id)a1 config:(id)a2;

@end
