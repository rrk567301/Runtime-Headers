@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NFSecureXPCEventPublisher : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventSendQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)sendDictionary:(id)a0;
- (id)_syncSetupConnection;
- (BOOL)asyncSendDictionary:(id)a0;
- (void)asyncSendSimpleEvent:(id)a0;
- (void)asyncSendSimpleEvent:(id)a0 objectNumber:(id)a1;
- (void)asyncSendSimpleEvent:(id)a0 objectString:(id)a1;
- (id)initWithMachPort:(id)a0 queue:(id)a1;
- (id)initWithMachPort:(id)a0 xpcConnectionQueue:(id)a1 eventSendQueue:(id)a2;
- (void)sendSimpleEvent:(id)a0;
- (void)sendSimpleEvent:(id)a0 objectNumber:(id)a1;
- (void)sendSimpleEvent:(id)a0 objectString:(id)a1;

@end
