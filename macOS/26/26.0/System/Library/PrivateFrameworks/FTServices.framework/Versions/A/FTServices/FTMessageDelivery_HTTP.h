@class IDSServerBag;
@protocol FTMessageDeliveryRemoteURLConnectionFactory, _FT_IDSOffGridConnectionMonitor, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    id /* block */ _retryBackoffProvider;
    id /* block */ _timeoutBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

@property (retain, nonatomic) id<_FT_IDSOffGridConnectionMonitor> offGridConnectionMonitor;

- (void)_dequeueIfNeeded;
- (void)_serverBagLoaded:(id)a0;
- (void)_clearRetryTimer;
- (BOOL)busy;
- (id)initWithAPSConnection:(id)a0;
- (void)cancelMessage:(id)a0;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)_cleanupURLConnection;
- (void)dealloc;
- (BOOL)shouldFailFastForMessage:(id)a0;
- (BOOL)sendMessage:(id)a0;
- (void)invalidate;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)a0;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)networkStateChanged;
- (id)initWithIDSServerBag:(id)a0 apsConnection:(id)a1;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 apsConnection:(id)a4 retryBackoffProvider:(id /* block */)a5 timeoutBackoffProvider:(id /* block */)a6;
- (id)_processResultData:(id)a0 forMessage:(id)a1 error:(id *)a2;
- (void)_notifyDelegateAboutError:(id)a0 forMessage:(id)a1;
- (BOOL)authKitBAADisabled;
- (id)initWithIDSServerBag:(id)a0;
- (void)_urlRequestWithURL:(id)a0 andData:(id)a1 message:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)sendMessageAtTopOfTheQueue:(id)a0;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 retryBackoffProvider:(id /* block */)a4 timeoutBackoffProvider:(id /* block */)a5;
- (void)_informDelegatesOfMessage:(id)a0 result:(id)a1 resultCode:(long long)a2 error:(id)a3;
- (void)_updateWiFiAssertions;
- (void)cancelMessage:(id)a0 withError:(long long)a1;
- (void).cxx_destruct;

@end
