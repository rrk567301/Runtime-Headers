@class SpotlightReceiverConfig, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SpotlightReceiverConnection : CSXPCConnection {
    NSArray *_configs;
    _Atomic BOOL _disabled;
    long long _setupOnce;
}

@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue;
@property (readonly, nonatomic) _Atomic unsigned int requestCount;
@property (nonatomic) BOOL wantsHTML;
@property (nonatomic) BOOL wantsText;
@property BOOL setupComplete;
@property (nonatomic) BOOL skipFileProviderItems;
@property (nonatomic) double minDate;
@property (readonly, nonatomic) BOOL unresponsive;
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore;
@property (copy, nonatomic) SpotlightReceiverConfig *primaryConfig;
@property (readonly, nonatomic) NSArray *configs;

- (BOOL)disabled;
- (void)resume;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)receiverRequestStart;
- (void)deleteWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 protectionClass:(id)a4 serialNumber:(unsigned long long)a5 journalCookie:(id)a6 completionHandler:(id /* block */)a7;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (id)initWithServiceName:(id)a0 client:(long long)a1 configPath:(id)a2;
- (BOOL)updateConfigsForClient:(long long)a0 configurationValues:(id)a1;
- (void)enableReceiver;
- (void)handleError:(id)a0;
- (void)deleteFromBundle:(id)a0;
- (void)receiverRequestComplete;
- (void)setupComplete:(BOOL)a0;
- (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (void)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (void)dictionary:(id)a0 setDecoderData:(id)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
- (void)disableReceiver;
- (void)indexWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 bundleID:(id)a4 protectionClass:(id)a5 serialNumber:(unsigned long long)a6 journalCookie:(id)a7 config:(id)a8 additionalAttributes:(id)a9 completionHandler:(id /* block */)a10;
- (void)deleteFromBundle:(id)a0 encodedIdentifiers:(id)a1;
- (void)suspend;
- (void).cxx_destruct;
- (void)startSetup;
- (void)deleteFromBundle:(id)a0 contentType:(id)a1 identifiers:(id)a2;
- (void)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;
- (void)reset;
- (void)deleteAllUserActivities:(id)a0;
- (void)runOnSenderQueue:(id /* block */)a0;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 retainedData:(id)a2;
- (void)deleteFromBundle:(id)a0 sinceDate:(id)a1;
- (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3;
- (BOOL)canRun;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)startSetupForClient:(long long)a0 configurationValues:(id)a1;
- (void)deleteFromBundle:(id)a0 domainIdentifiers:(id)a1;
- (void)invalidationHandler;

@end
