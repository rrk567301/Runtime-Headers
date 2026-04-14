@class SpotlightReceiverConfig, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SpotlightReceiverConnection : CSXPCConnection {
    NSArray *_configs;
    _Atomic BOOL _disabled;
}

@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue;
@property (readonly, nonatomic) _Atomic unsigned int requestCount;
@property (nonatomic) BOOL wantsHTML;
@property (nonatomic) BOOL wantsText;
@property (nonatomic) BOOL setupStarted;
@property (nonatomic) BOOL setupComplete;
@property (nonatomic) BOOL skipFileProviderItems;
@property (nonatomic) double minDate;
@property (readonly, nonatomic) BOOL unresponsive;
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore;
@property (copy, nonatomic) SpotlightReceiverConfig *primaryConfig;
@property (readonly, nonatomic) NSArray *configs;

- (void)deleteFromBundle:(id)a0 contentType:(id)a1 identifiers:(id)a2;
- (void)deleteFromBundle:(id)a0 domainIdentifiers:(id)a1;
- (BOOL)disabled;
- (void)handleError:(id)a0;
- (void)deleteAllUserActivities:(id)a0;
- (void)dictionary:(id)a0 setDecoderData:(id)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
- (void)receiverRequestComplete;
- (void)deleteWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 protectionClass:(id)a4 serialNumber:(unsigned long long)a5 journalCookie:(id)a6 completionHandler:(id /* block */)a7;
- (void)deleteFromBundle:(id)a0 encodedIdentifiers:(id)a1;
- (void)suspend;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (BOOL)canRun;
- (void)runOnSenderQueue:(id /* block */)a0;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3;
- (void)deleteFromBundle:(id)a0;
- (void)enableReceiver;
- (void)invalidationHandler;
- (void)disableReceiver;
- (void)resume;
- (id)initWithServiceName:(id)a0 client:(long long)a1 configPath:(id)a2;
- (void)startSetup;
- (void)setupComplete:(BOOL)a0;
- (void)deleteFromBundle:(id)a0 sinceDate:(id)a1;
- (void).cxx_destruct;
- (void)indexWithFd:(int)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 indexType:(unsigned long long)a3 bundleID:(id)a4 protectionClass:(id)a5 serialNumber:(unsigned long long)a6 journalCookie:(id)a7 config:(id)a8 additionalAttributes:(id)a9 completionHandler:(id /* block */)a10;
- (BOOL)updateConfigsForClient:(long long)a0 configurationValues:(id)a1;
- (void)reset;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 retainedData:(id)a2;
- (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)receiverRequestStart;
- (void)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;
- (void)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (void)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (void)startSetupForClient:(long long)a0 configurationValues:(id)a1;

@end
