@class IMTimer, NSString, IDSBaseMessage, NSHashTable, NSArray, NSNumber, FTMessageQueue;
@protocol FTMessageDeliveryAPSConnection, _FT_IDSBAASigner;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    FTMessageQueue *_queue;
    IMTimer *_timer;
}

@property (readonly) id<FTMessageDeliveryAPSConnection> connection;
@property (readonly) id<_FT_IDSBAASigner> baaSigner;
@property (readonly) NSHashTable *observerMap;
@property (copy) NSString *userAgent;
@property (copy) NSNumber *protocolVersion;
@property (readonly) BOOL hasQueuedItems;
@property (readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property BOOL logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;
@property (nonatomic) BOOL disallowRetry;

+ (id)alloc;
+ (Class)APNSMessageDeliveryClass;
+ (id)createAPSConnection;
+ (id)_errorForTDMessageDeliveryStatus:(long long)a0 userInfo:(id)a1;
+ (Class)HTTPMessageDeliveryClass;

- (void)_clearRetryTimer;
- (void)cancelMessage:(id)a0 withError:(long long)a1;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_retryTimerHit:(id)a0;
- (void)_signMessage:(id)a0 useDataSignatures:(BOOL)a1 authKitHeadersPresent:(BOOL)a2 body:(id)a3 queryString:(id)a4 completion:(id /* block */)a5;
- (id)initWithAPSConnection:(id)a0;
- (void)_informDelegateAboutMessage:(id)a0 error:(id)a1 result:(id)a2 resultCode:(long long)a3 interface:(unsigned long long)a4;
- (void)_setRetryTimer:(double)a0;
- (void)_correctServerTimestampForDriftOnMessage:(id)a0 currentDate:(id)a1;
- (void)networkStateChanged;
- (BOOL)isTrafficDisabledOnVMForMessage:(id)a0;
- (void)signDataWithPushIdentity:(id)a0 serverTimestamp:(id)a1 withCompletion:(id /* block */)a2;
- (void)cancelMessage:(id)a0;
- (BOOL)bagDisablesVMTraffic;
- (void)addRequestObserver:(id)a0;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_queue;
- (id)init;
- (void)dealloc;

@end
