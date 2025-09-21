@class NSMutableArray, NSString, NSMutableDictionary, NSHashTable, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface PKIDSService : NSObject <IDSServiceDelegate> {
    NSMutableDictionary *_listeners;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSMutableArray *_pendingAccountDevicesReadyCompletions;
    NSMutableArray *_pendingAccountDevicesReadyTimers;
}

@property (readonly, nonatomic) IDSService *underlyingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)start;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)removeDelegate:(id)a0;
- (id)init;
- (id)initWithServiceName:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void).cxx_destruct;
- (void)_enumerateDelegatesWithBlock:(id /* block */)a0;
- (void)_receivedMessage:(id)a0 isRequest:(BOOL)a1 service:(id)a2 account:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)_receivedRequestMessage:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_receivedResponseMessage:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_setProtobufAction:(SEL)a0 target:(id)a1 messageType:(unsigned short)a2 isRequest:(BOOL)a3 queue:(id)a4;
- (void)executeWhenAccountsReadyAndDevicesSet:(id /* block */)a0 timeoutSeconds:(long long)a1;
- (void)registerListenerForMessageType:(unsigned short)a0 isRequest:(BOOL)a1 referenceObject:(id)a2 onMessageReceived:(id /* block */)a3;
- (void)registerListenerForMessageType:(unsigned short)a0 isRequest:(BOOL)a1 referenceObject:(id)a2 queue:(id)a3 onMessageReceived:(id /* block */)a4;
- (void)setProtobufAction:(SEL)a0 target:(id)a1 forIncomingRequestsOfType:(unsigned short)a2 queue:(id)a3;
- (void)setProtobufAction:(SEL)a0 target:(id)a1 forIncomingResponsesOfType:(unsigned short)a2 queue:(id)a3;
- (void)unregisterListenersForTarget:(id)a0;

@end
