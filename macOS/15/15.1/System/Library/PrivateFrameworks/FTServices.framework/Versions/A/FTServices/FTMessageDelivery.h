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
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(long long)a0 userInfo:(id)a1;
+ (id)createAPSConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_queue;
- (void)invalidate;
- (BOOL)sendMessage:(id)a0;
- (void)cancelMessage:(id)a0;
- (void)_setRetryTimer:(double)a0;
- (void)_retryTimerHit:(id)a0;
- (void)_clearRetryTimer;
- (void)_correctServerTimestampForDriftOnMessage:(id)a0 currentDate:(id)a1;
- (void)_informDelegateAboutMessage:(id)a0 error:(id)a1 result:(id)a2 resultCode:(long long)a3 interface:(unsigned long long)a4;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_signMessage:(id)a0 useDataSignatures:(BOOL)a1 body:(id)a2 queryString:(id)a3 completion:(id /* block */)a4;
- (void)addRequestObserver:(id)a0;
- (BOOL)bagDisablesVMTraffic;
- (id)initWithAPSConnection:(id)a0;
- (BOOL)isTrafficDisabledOnVMForMessage:(id)a0;
- (void)networkStateChanged;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)signDataWithPushIdentity:(id)a0 serverTimestamp:(id)a1 withCompletion:(id /* block */)a2;

@end
