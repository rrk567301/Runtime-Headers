@class NSUUID, NSObject, HMEPendingTopicsCombiner;
@protocol HMETimerProvider, HMETimer, OS_os_log, HMETimerIntervalProvider, HMEMessageDatagramClientDelegate, HMEMessageDatagramClientDataSource;

@interface HMEMessageDatagramClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) id<HMETimerIntervalProvider> retryIntervalProvider;
@property (readonly) id<HMETimerProvider> timerProvider;
@property (readonly) HMEPendingTopicsCombiner *pendingTopicsCombiner;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL hasPendingRequest;
@property (nonatomic) BOOL hasPendingServerChangeRequest;
@property (nonatomic) BOOL hasPendingKeepAliveRequest;
@property (readonly) double keepAliveInterval;
@property (retain, nonatomic) id<HMETimer> keepAliveTimer;
@property (retain, nonatomic) id<HMETimer> retryTimer;
@property (retain, nonatomic) NSUUID *connectedServerIdentifier;
@property (retain, nonatomic) NSUUID *connectingServerIdentifier;
@property (nonatomic) long long connectionMode;
@property (readonly) double dormatFetchTimerInterval;
@property (retain, nonatomic) id<HMETimer> dormantFetchTimer;
@property (nonatomic) BOOL dormantFetchConditionsMet;
@property (nonatomic) BOOL isWaitingForFetchConditionsWhenDormant;
@property (weak) id<HMEMessageDatagramClientDelegate> delegate;
@property (weak, nonatomic) id<HMEMessageDatagramClientDataSource> dataSource;

- (id)dumpStateDescription;
- (BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (id)forwardingTopicsForTopics:(id)a0;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 dormantFetchTimerInterval:(double)a3 retryIntervalProvider:(id)a4 storeReadHandle:(id)a5 storeWriteHandle:(id)a6 logCategory:(const char *)a7;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)updateDormantFetchCondition:(long long)a0 completion:(id /* block */)a1;
- (id)didReceiveFetchResponseWithCachedEvents:(id)a0;
- (void)connectionCapabilityDidChange;
- (void)didReceiveMessageWithCachedEvents:(id)a0 serverIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)didReceiveMessageWithEvents:(id)a0 serverIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)resetRetryTimerToInitialState;
- (id)initWithQueue:(id)a0 timerProvider:(id)a1 keepAliveInterval:(double)a2 dormantFetchTimerInterval:(double)a3 retryIntervalProvider:(id)a4;
- (void)updateConnectionMode:(long long)a0 completion:(id /* block */)a1;
- (void)serverDidChangeWithServerIdentifier:(id)a0;

@end
