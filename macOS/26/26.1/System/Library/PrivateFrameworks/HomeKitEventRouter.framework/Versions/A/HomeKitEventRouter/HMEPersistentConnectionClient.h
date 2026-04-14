@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (id)forwardingTopicsForTopics:(id)a0;
- (BOOL)isActiveForSaving;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (unsigned long long)willWriteToStore;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (void).cxx_destruct;
- (void)processReceivedEventsFromMessage:(id)a0;
- (void)didReconnect;
- (void)didInvalidateConnection;

@end
