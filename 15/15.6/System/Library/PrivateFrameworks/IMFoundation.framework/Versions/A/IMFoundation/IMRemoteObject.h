@class NSString, NSObject;
@protocol OS_xpc_object;

@interface IMRemoteObject : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) char isValid;

+ (void)initialize;
+ (void)_registerIMRemoteObject:(id)a0;
+ (id)_remoteObjects;
+ (void)_unregisterIMRemoteObject:(id)a0;

- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)invalidate;
- (id)_queue;
- (void)_cleanupMachBitsCanPost:(char)a0 locked:(char)a1;
- (id)_initWithConnection:(id)a0 portName:(id)a1 protocol:(id)a2 alreadyConfigured:(char)a3 forceSecureCoding:(char)a4;
- (void)_portDidBecomeInvalid;
- (void)_systemShutdown:(id)a0;
- (void)blockUntilSendQueueIsEmpty;
- (unsigned long long)forwardXPCObject:(id)a0 messageContext:(id)a1 locked:(char)a2;
- (id)initWithConnection:(id)a0 protocol:(id)a1;
- (id)initWithConnection:(id)a0 protocol:(id)a1 alreadyConfigured:(char)a2;
- (id)initWithConnection:(id)a0 protocol:(id)a1 alreadyConfigured:(char)a2 forceSecureCoding:(char)a3;
- (id)initWithPortName:(id)a0 protocol:(id)a1;
- (void)setPortName:(id)a0;

@end
