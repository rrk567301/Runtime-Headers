@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (id)forwardingTopicsForTopics:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (unsigned long long)willWriteToStore;
- (id)initWithQueue:(id)a0;
- (void)didReconnect;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (BOOL)isActiveForSaving;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (void).cxx_destruct;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (void)didInvalidateConnection;
- (void)processReceivedEventsFromMessage:(id)a0;

@end
