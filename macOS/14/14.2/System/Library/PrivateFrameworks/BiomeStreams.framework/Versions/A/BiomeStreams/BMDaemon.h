@class BMComputeXPCPublisherClient, NSString, BMComputeXPCPublisherStorage, NSMutableDictionary, BMDSLGraphValidator, BMComputeSourceServer, NSObject, BMComputeXPCPublisherServer;
@protocol OS_dispatch_queue, BMViewEventReporter;

@interface BMDaemon : NSObject <BMComputeXPCPublisherServerDelegate, BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BOOL isAgent;
@property (class, readonly) BOOL isAgentOrEmbedded;
@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMComputeXPCPublisherStorage *systemBookmarkStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *userBookmarkStorage;
@property (retain, nonatomic) NSMutableDictionary *activeSystemSubscriptionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *subscribedSystemStreams;
@property (retain, nonatomic) BMComputeXPCPublisherClient *systemStreamsPublisherClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *userSourceServer;
@property (readonly, nonatomic) BMComputeSourceServer *systemSourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *userPublisherServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *systemPublisherServer;
@property (readonly, nonatomic) id<BMViewEventReporter> eventReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)registerXPCActivities;
+ (id)BiomeAgentLaunchNotification;
+ (void)pruneTemporaryFilesInDirectory:(id)a0;
+ (void)prunePublicStreamsWithActivity:(id)a0;
+ (id)userComputePublisherServiceName;
+ (void)_donateDeviceMetadata;
+ (BOOL)atLeastOneSegmentFileInDirectory:(id)a0 fileManager:(id)a1;
+ (id)biomedLaunchNotification;
+ (void)donateLaunchEvents;
+ (id)loadDKStreamNameToTTL;
+ (void)pruneAppInFocusPosterBoardEvents;
+ (void)pruneEmptyRemoteStreams:(id)a0;
+ (void)pruneFeatureStoreWithActivity:(id)a0;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2 activity:(id)a3;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0 activity:(id)a1;
+ (void)pruneRestrictedStreamsWithActivity:(id)a0;
+ (void)pruneTemporaryFiles;
+ (id)systemComputePublisherServiceName;
+ (id)systemComputePublisherStreamName;
+ (id)systemComputeSourceServiceName;
+ (id)userComputePublisherStreamName;
+ (id)userComputeSourceServiceName;

- (id)init;
- (void).cxx_destruct;
- (id)_bookmarkStorage;
- (id)_publisherServer;
- (void)_subscribeStreamsForViews;
- (void)_subscribeSystemStream:(id)a0 subscriptionIdentifier:(id)a1 useCase:(id)a2;
- (void)eventsPrunedWithStreamIdentifier:(id)a0 reason:(unsigned long long)a1;
- (id)initWithQueue:(id)a0 eventReporter:(id)a1;
- (void)publisherServer:(id)a0 didAddSubscription:(id)a1;
- (void)publisherServer:(id)a0 didRemoveSubscription:(id)a1;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;
- (void)setUpNotificationHandler;

@end
