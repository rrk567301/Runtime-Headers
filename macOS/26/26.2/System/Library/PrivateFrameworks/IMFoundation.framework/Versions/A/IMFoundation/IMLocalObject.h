@class NSProtocolChecker, NSString, NSArray, NSObject;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject {
    id _internal;
}

@property (nonatomic) id target;
@property (readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL wasInterrupted;
@property (retain, nonatomic) NSArray *allowlistedClasses;
@property (retain, nonatomic) NSArray *whitelistedClasses;

+ (void)initialize;
+ (id)_imLocalObjectQueue;
+ (void)_registerIMLocalObject:(id)a0;
+ (void)_setExceptionHandlingDisabled:(BOOL)a0;
+ (id)_imLocalObjectQueueTargetingWorkloop;
+ (void)_unregisterIMLocalObject:(id)a0;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)a0;

- (void)_systemShutdown:(id)a0;
- (void)terminated;
- (void)setPortName:(id)a0;
- (void)_portDidBecomeInvalid;
- (void)invalidate;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2 isSync:(BOOL)a3 isReply:(BOOL)a4;
- (BOOL)_handleInvocation:(id)a0;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3;
- (id)_currentMessageContext;
- (void)_enqueueInvocationWithPriority:(id)a0 xpcMessage:(id)a1 priority:(int)a2;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2 isReply:(BOOL)a3;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1;
- (void)_popInvocation;
- (void)_handleNewInvocations;
- (void)_noteNewInvocation:(BOOL)a0;
- (BOOL)handleInvocation:(id)a0;
- (BOOL)isValidSelector:(SEL)a0;
- (id)_peekInvocation;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(BOOL)a2;
- (void)_enqueueInvocationWithSync:(id)a0;
- (void)_clearPort:(BOOL)a0 signalRunLoopIfNeeded:(BOOL)a1;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)description;
- (void)_clearPort:(BOOL)a0;
- (void)_enqueueInvocation:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(BOOL)a3 offMainThread:(BOOL)a4;
- (BOOL)isSameConnection:(id)a0;
- (void)_portInterrupted;
- (id)initWithTarget:(id)a0 portName:(id)a1 protocol:(id)a2;
- (BOOL)_handleInvocation:(id)a0 processingComponentQueue:(BOOL)a1;
- (void)_enqueueInvocationWithPriority:(id)a0 priority:(int)a1;
- (void)dealloc;

@end
