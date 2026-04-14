@class NSUUID, NSString, HMFTimer, HMDRemoteMessage, HMFMessageDestination, HMDModernTransportMessageContextOptions, NSSet, NSMutableSet, HMDNetworkActivityWrapper, NSMapTable;
@protocol HMFDateProvider, HMDNetworkActivityWrapperFactory, HMMLogEventSubmitting, HMFTimerProvider;

@interface HMDModernTransportMessageContext : NSObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) id /* block */ completionHandler;
@property (readonly) id<HMFDateProvider> dateProvider;
@property (readonly) id<HMFTimerProvider> timerProvider;
@property (readonly) id<HMDNetworkActivityWrapperFactory> activityFactory;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL didFallback;
@property (readonly, nonatomic) NSMapTable *inProgressTransportToStartTimeMap;
@property (readonly, nonatomic) NSMapTable *retriesRemainingForTransport;
@property (retain) HMFTimer *responseTimer;
@property (copy) id /* block */ responseCompletionBlock;
@property (retain) HMFTimer *fallbackTimer;
@property (copy) id /* block */ fallbackCompletionBlock;
@property (retain) HMDRemoteMessage *message;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) double messageTimeout;
@property (readonly, copy, nonatomic) id /* block */ messageResponseHandler;
@property (readonly, nonatomic) long long messageQualityOfService;
@property double requestStartTime;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) HMFMessageDestination *destination;
@property (readonly, nonatomic) HMDModernTransportMessageContextOptions *options;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, copy, nonatomic) NSMutableSet *remainingTransports;
@property (readonly, copy, nonatomic) NSSet *inProgressTransports;
@property (readonly, nonatomic) BOOL didSucceedSending;
@property (readonly, nonatomic) unsigned long long successfulResponseCount;
@property (nonatomic) BOOL didNotifyDeviceReachability;
@property (readonly, nonatomic) HMDNetworkActivityWrapper *messageNetworkActivity;
@property (nonatomic) BOOL keepRetrying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)done;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)completeSendingOverTransport:(id)a0 withError:(id)a1;
- (void)decrementRetriesForTransport:(id)a0;
- (id)initWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4;
- (id)initWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4 activityFactory:(id)a5 logEventSubmitter:(id)a6;
- (id)preparedMessageWithTimeout:(double)a0;
- (void)receivedResponseOverTransport:(id)a0 withError:(id)a1;
- (unsigned long long)retriesRemainingForTransport:(id)a0;
- (void)startResponseTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startSendingOverTransport:(id)a0;
- (void)startTransportFallbackTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (double)timeoutRemaining;

@end
