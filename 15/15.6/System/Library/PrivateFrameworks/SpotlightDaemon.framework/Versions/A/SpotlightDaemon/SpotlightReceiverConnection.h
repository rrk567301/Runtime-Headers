@class NSSet, NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SpotlightReceiverConnection : CSXPCConnection {
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
    _Atomic BOOL _disabled;
}

@property (readonly, nonatomic) NSSet *bundleIDs;
@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) NSSet *INIntentClassNames;
@property (readonly, nonatomic) int supportedJobs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue;
@property (readonly, nonatomic) _Atomic unsigned int requestCount;
@property (nonatomic) char wantsHTML;
@property (nonatomic) char wantsText;
@property (nonatomic) char setupStarted;
@property (nonatomic) char setupComplete;
@property (nonatomic) char skipFileProviderItems;
@property (nonatomic) double minDate;
@property (readonly, nonatomic) char unresponsive;
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore;

+ (void)setup;

- (void).cxx_destruct;
- (void)invalidationHandler;
- (char)disabled;
- (void)donateRelevantActions:(id)a0 bundleID:(id)a1;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (void)deleteAllUserActivities:(id)a0;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)handleError:(id)a0;
- (void)addUserActions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)indexFromBundle:(id)a0 protectionClass:(id)a1 items:(id)a2 itemsContent:(id)a3;
- (void)purgeFromBundle:(id)a0 identifiers:(id)a1;
- (char)_wantsBundleID:(id)a0;
- (void)disableReceiver;
- (char)_wantsContentType:(id)a0;
- (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3;
- (char)canRun;
- (void)deleteFromBundle:(id)a0;
- (void)deleteFromBundle:(id)a0 contentType:(id)a1 identifiers:(id)a2;
- (void)deleteFromBundle:(id)a0 domainIdentifiers:(id)a1;
- (void)deleteFromBundle:(id)a0 encodedIdentifiers:(id)a1;
- (void)deleteFromBundle:(id)a0 sinceDate:(id)a1;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 retainedData:(id)a2;
- (void)dictionary:(id)a0 setDecoderData:(id)a1 forKey:(const char *)a2 sizeKey:(const char *)a3;
- (void)enableReceiver;
- (id)initWithServiceName:(id)a0 clientID:(long long)a1 wantsText:(char)a2 wantsHTML:(char)a3;
- (void)receiverRequestComplete;
- (void)receiverRequestStart;
- (void)runOnSenderQueue:(id /* block */)a0;
- (void)setupComplete:(char)a0;
- (void)startSetup;

@end
