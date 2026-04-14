@class NSString, HMDModernTransportMessageContextManager, NSMutableOrderedSet, NSObject, HMDRemoteMessageTransport;
@protocol HMFDateProvider, HMDDeviceResidencyProvider, HMDFeaturesDataSource, OS_dispatch_queue, HMFTimerProvider;

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate>

@property (class, readonly, copy, nonatomic) NSString *requestStartTimeHeaderKey;
@property (class, readonly, copy, nonatomic) NSString *timeToLiveHeaderKey;

@property (getter=isStarted) BOOL started;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, nonatomic) id<HMFDateProvider> systemDateProvider;
@property (readonly, nonatomic) id<HMFDateProvider> idsDateProvider;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (nonatomic, getter=isRapportLinkSlow) BOOL rapportLinkSlow;
@property (readonly) BOOL useRapportOverBLE;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *bleTransport;
@property (weak) id<HMDDeviceResidencyProvider> residencyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (BOOL)isSecure;
- (BOOL)canSendMessage:(id)a0;
- (long long)qualityOfService;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureWithRemoteMessageListener:(id)a0;
- (id)start;
- (void)configureWithHomeMembershipVerifier:(id)a0;
- (void)updateMessagePayloadWithSystemTimeExpiry:(id)a0 idsTimeNow:(double)a1 systemTimeNow:(double)a2;
- (void)transport:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 requestID:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccountRegistry:(id)a0 requestID:(id)a1 rapportTransport:(id)a2 idsTransport:(id)a3 bleTransport:(id)a4 contextManager:(id)a5 systemDateProvider:(id)a6 idsDateProvider:(id)a7 timerProvider:(id)a8 isWatch:(BOOL)a9 featuresDataSource:(id)a10;

@end
