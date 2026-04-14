@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)didReconnect;
- (void)processReceivedEventsFromMessage:(id)a0;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (id)forwardingTopicsForTopics:(id)a0;
- (BOOL)isActiveForSaving;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (void)didInvalidateConnection;

@end
