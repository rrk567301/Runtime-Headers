@class FTMessageDelivery, NSString, IDSBaseMessage, NSArray, FTMessageQueue;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {
    FTMessageDelivery *_httpDelivery;
    FTMessageDelivery *_apsDelivery;
    FTMessageQueue *_dualModeQueue;
    NSString *_userAgentString;
}

@property (copy, nonatomic) NSString *userAgent;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)cancelMessage:(id)a0;
- (void)signDataWithPushIdentity:(id)a0 serverTimestamp:(id)a1 withCompletion:(id /* block */)a2;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (void)addRequestObserver:(id)a0;
- (long long)_randomPercentageChanceForDualDelivery;
- (id)initWithPreferedType:(long long)a0;
- (void)sendMessage:(id)a0;
- (BOOL)_isInBackoffMode;
- (void).cxx_destruct;
- (void)_deliverOnHTTP:(id)a0;
- (void)handleTranslationAndDeliveryOnAPS:(id)a0;
- (void)_handleWebTunnelResponse:(id)a0 error:(id)a1 resultCode:(long long)a2 resultDictionary:(id)a3 originalMessage:(id)a4;
- (void)dequeueMessageIfNeeded;
- (void)_enterBackOffMode;
- (BOOL)_shouldUseDualDeliveryForMessage:(id)a0;

@end
