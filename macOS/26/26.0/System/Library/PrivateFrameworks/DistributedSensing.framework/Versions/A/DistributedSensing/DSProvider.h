@class NSString, DSClientMotionDataOptions, DSListenerDevice, RPCompanionLinkClient, NSObject, DSCoreAnalyticsEventHandler;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DSProvider : NSObject <DSProviderClientProtocol> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    RPCompanionLinkClient *_linkClient;
    DSListenerDevice *_currentListener;
    int _screenStateToken;
    BOOL _isScreenON;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _isPendingHeartbeat;
    NSObject<OS_dispatch_source> *_responseTimeoutTimer;
    BOOL _isLinkClientResponsePending;
    DSCoreAnalyticsEventHandler *_caEventHandler;
    unsigned long long _numHeartbeats;
    unsigned long long _numMotionStateMessages;
    int _linkType;
    BOOL _isUnterminatedSession;
}

@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions;
@property BOOL isSubscriptionActive;
@property (nonatomic) BOOL isTestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_persistListenerState;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)_heartBeatWithListener;
- (void)unsubscribed;
- (void)_didFindDevice:(id)a0;
- (void)_didLoseDevice:(id)a0;
- (void)subscriptionExpired;
- (void)_addNewListener:(id)a0;
- (BOOL)_unPersistListenerState;
- (void)_fetchScreenState;
- (void)stopMotionDataProvider;
- (void)_removeCurrentListenerWithStopReason:(int)a0;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)sendMotionData:(id)a0;
- (BOOL)_removePersistedState;
- (id)initWithDispatchQueue:(id)a0;
- (void)startedProviderWithOptions:(id)a0;
- (void)_sendRequestID:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)stoppedProvider;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)_stopCASessionMetricCollectionWithStopReason:(int)a0;
- (void)_startCASessionMetricCollection;
- (void)_sendMotionData:(id)a0;
- (void)_receivedDataRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)_stopProvider;
- (void).cxx_destruct;

@end
