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

- (void)sendMotionData:(id)a0;
- (void)_startCASessionMetricCollection;
- (BOOL)_unPersistListenerState;
- (void)_addNewListener:(id)a0;
- (BOOL)_persistListenerState;
- (void)_sendMotionData:(id)a0;
- (void)_stopCASessionMetricCollectionWithStopReason:(int)a0;
- (void)subscriptionExpired;
- (void)_stopProvider;
- (void)_removeCurrentListenerWithStopReason:(int)a0;
- (void)_didFindDevice:(id)a0;
- (void)_fetchScreenState;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)_sendRequestID:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)stoppedProvider;
- (void).cxx_destruct;
- (void)startedProviderWithOptions:(id)a0;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (BOOL)_removePersistedState;
- (id)initWithDispatchQueue:(id)a0;
- (void)_heartBeatWithListener;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)_didLoseDevice:(id)a0;
- (void)unsubscribed;
- (void)_receivedDataRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)stopMotionDataProvider;
- (void)requestedMotionDataWithOption:(id)a0;

@end
