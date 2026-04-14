@class BMComputeSubscriptionSubstreamManager, NSString, BMComputePublisherServer, BMComputePublisherClient, NSMutableDictionary, NSObject, BMDSLGraphValidator, BMComputePublisherStorage, BMComputeSourceServer;
@protocol OS_dispatch_queue, BMViewEventReporter;

@interface BMDaemon : NSObject <BMComputePublisherServerDelegate, BMComputeSourceDaemon> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, copy) NSString *userComputePublisherStreamName;
@property (class, readonly, copy) NSString *systemComputePublisherStreamName;
@property (class, readonly, copy) NSString *biomedLaunchNotification;
@property (class, readonly, copy) NSString *BiomeAgentLaunchNotification;
@property (class, readonly) BOOL isAgent;
@property (class, readonly) BOOL isAgentOrEmbedded;
@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMComputePublisherStorage *systemBookmarkStorage;
@property (readonly, nonatomic) BMComputePublisherStorage *userBookmarkStorage;
@property (readonly, nonatomic) BMComputeSubscriptionSubstreamManager *subscriptionSubstreamManager;
@property (retain, nonatomic) NSMutableDictionary *activeSystemSubscriptionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *subscribedSystemStreams;
@property (retain, nonatomic) BMComputePublisherClient *systemStreamsPublisherClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *userSourceServer;
@property (readonly, nonatomic) BMComputeSourceServer *systemSourceServer;
@property (readonly, nonatomic) BMComputePublisherServer *userPublisherServer;
@property (readonly, nonatomic) BMComputePublisherServer *systemPublisherServer;
@property (readonly, nonatomic) id<BMViewEventReporter> eventReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)createAndExcludeBiomeDirectoryFromBackups;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2 shouldDefer:(id /* block */)a3;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0 account:(id)a1 protectionClass:(unsigned long long)a2 shouldDefer:(id /* block */)a3;
+ (void)registerXPCActivitiesWithTaskScheduler:(id)a0;
+ (void)pruneTemporaryFiles;
+ (void)pruneFeatureStoreWithShouldDefer:(id /* block */)a0;
+ (void)pruneRestrictedStreamsWithProtectionClass:(unsigned long long)a0 shouldDefer:(id /* block */)a1;
+ (void)registerSpaceAttributionWithCompletion:(id /* block */)a0;
+ (void)prunePublicStreams;
+ (void)_registerSpaceAttributionWithDomain:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)_donateDeviceMetadataWithBootDate:(id)a0;
+ (void)pruneTemporaryFilesInDirectory:(id)a0;
+ (void)_donateDeviceBootSessionEventsWithBootDate:(id)a0 queue:(id)a1;
+ (void)donateLaunchEventsWithQueue:(id)a0;
+ (void)runLaunchTasks;

- (void)eventsPrunedWithStreamIdentifier:(id)a0 account:(id)a1 remoteName:(id)a2 reason:(unsigned long long)a3;
- (void)publisherServer:(id)a0 didClaimSubscription:(id)a1;
- (void)publisherServer:(id)a0 didAddSubscription:(id)a1;
- (void)_subscribeStreamsForViews;
- (id)_bookmarkStorage;
- (void).cxx_destruct;
- (void)publisherServer:(id)a0 didRemoveSubscription:(id)a1;
- (id)init;
- (void)setUpNotificationHandler;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 account:(id)a2 remoteName:(id)a3 storeEvent:(id)a4;
- (id)_publisherServer;
- (void)_subscribeSystemStream:(id)a0 subscriptionIdentifier:(id)a1 useCase:(id)a2;
- (id)initWithQueue:(id)a0 eventReporter:(id)a1;

@end
