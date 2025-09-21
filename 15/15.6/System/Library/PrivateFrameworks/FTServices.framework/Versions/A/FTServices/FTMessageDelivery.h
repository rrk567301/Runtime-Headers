@class NSHashTable, NSString, IDSBaseMessage, NSArray, FTMessageQueue, IDSBAASigner, IMTimer, NSNumber;
@protocol FTMessageDeliveryAPSConnection;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    FTMessageQueue *_queue;
    IMTimer *_timer;
}

@property (readonly) id<FTMessageDeliveryAPSConnection> connection;
@property (readonly) IDSBAASigner *baaSigner;
@property (readonly) NSHashTable *observerMap;
@property (copy) NSString *userAgent;
@property (copy) NSNumber *protocolVersion;
@property (readonly) char hasQueuedItems;
@property (readonly) char busy;
@property char retryInAirplaneMode;
@property char logToRegistration;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly) NSArray *queuedMessages;
@property (readonly) NSArray *allMessages;
@property (readonly) long long maxMessageSize;
@property (readonly) long long maxLargeMessageSize;
@property unsigned long long maxConcurrentMessages;
@property (nonatomic) char disallowRetry;

+ (id)alloc;
+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(long long)a0 userInfo:(id)a1;
+ (id)createAPSConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_queue;
- (char)sendMessage:(id)a0;
- (void)cancelMessage:(id)a0;
- (void)_retryTimerHit:(id)a0;
- (void)_setRetryTimer:(double)a0;
- (void)_clearRetryTimer;
- (void)_correctServerTimestampForDriftOnMessage:(id)a0 currentDate:(id)a1;
- (void)_informDelegateAboutMessage:(id)a0 error:(id)a1 result:(id)a2 resultCode:(long long)a3 interface:(unsigned long long)a4;
- (char)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_signMessage:(id)a0 useDataSignatures:(char)a1 authKitHeadersPresent:(char)a2 body:(id)a3 queryString:(id)a4 completion:(id /* block */)a5;
- (void)addRequestObserver:(id)a0;
- (char)bagDisablesVMTraffic;
- (void)cancelMessage:(id)a0 withError:(long long)a1;
- (id)initWithAPSConnection:(id)a0;
- (char)isTrafficDisabledOnVMForMessage:(id)a0;
- (void)networkStateChanged;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)signDataWithPushIdentity:(id)a0 serverTimestamp:(id)a1 withCompletion:(id /* block */)a2;

@end
