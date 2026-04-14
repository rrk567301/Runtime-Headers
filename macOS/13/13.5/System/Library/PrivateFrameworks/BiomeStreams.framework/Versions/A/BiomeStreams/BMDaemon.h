@class BMStreamsAccessService, BMComputeXPCPublisherServer, NSString, BMDSLGraphValidator, BMComputeSourceServer, NSObject, BMBookmarkStorage;
@protocol OS_dispatch_queue;

@interface BMDaemon : NSObject <BMComputeSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BMDSLGraphValidator *DSLValidator;

@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer;
@property (readonly, nonatomic) BMStreamsAccessService *legacyAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *userAccessService;
@property (readonly, nonatomic) BMStreamsAccessService *systemAccessService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)registerXPCActivities;
+ (void)_handlePrivacyResetNotification;
+ (BOOL)isAgent;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)a0;
+ (id)computePublisherServiceName;
+ (id)computePublisherStreamName;
+ (id)computeSourceServiceName;
+ (void)donateLaunchEvents;
+ (id)loadDKStreamNameToTTL;
+ (void)prunePrivateStreamDirectory:(id)a0 maxAge:(double)a1 maxStreamSize:(unsigned long long)a2;
+ (void)pruneRestrictedStreams;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)fetchBookmarkWithSubscription:(id)a0 upToTimestamp:(id)a1 success:(BOOL *)a2;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 storeEvent:(id)a2;
- (void)setUpNotificationHandler;

@end
