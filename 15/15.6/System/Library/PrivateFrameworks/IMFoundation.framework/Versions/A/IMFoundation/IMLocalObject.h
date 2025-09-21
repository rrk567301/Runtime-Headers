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
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char wasInterrupted;
@property (retain, nonatomic) NSArray *allowlistedClasses;
@property (retain, nonatomic) NSArray *whitelistedClasses;

+ (void)initialize;
+ (id)_imLocalObjectQueue;
+ (id)_imLocalObjectQueueTargetingWorkloop;
+ (void)_registerIMLocalObject:(id)a0;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)a0;
+ (void)_setExceptionHandlingDisabled:(char)a0;
+ (void)_unregisterIMLocalObject:(id)a0;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)_peekInvocation;
- (void)_clearPort:(char)a0;
- (void)_clearPort:(char)a0 signalRunLoopIfNeeded:(char)a1;
- (id)_currentMessageContext;
- (void)_enqueueInvocation:(id)a0;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1;
- (void)_enqueueInvocation:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(char)a2 isSync:(char)a3 isReply:(char)a4;
- (void)_enqueueInvocationWithPriority:(id)a0 priority:(int)a1;
- (void)_enqueueInvocationWithPriority:(id)a0 xpcMessage:(id)a1 priority:(int)a2;
- (void)_enqueueInvocationWithSync:(id)a0;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(char)a2;
- (void)_enqueueInvocationWithSync:(id)a0 xpcMessage:(id)a1 submitToComponentQueue:(char)a2 isReply:(char)a3;
- (char)_handleInvocation:(id)a0;
- (char)_handleInvocation:(id)a0 processingComponentQueue:(char)a1;
- (void)_handleNewInvocations;
- (void)_noteNewInvocation:(char)a0;
- (void)_popInvocation;
- (void)_portDidBecomeInvalid;
- (void)_portInterrupted;
- (void)_systemShutdown:(id)a0;
- (char)handleInvocation:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(char)a3;
- (id)initWithTarget:(id)a0 connection:(id)a1 protocol:(id)a2 forceSecureCoding:(char)a3 offMainThread:(char)a4;
- (id)initWithTarget:(id)a0 portName:(id)a1 protocol:(id)a2;
- (char)isSameConnection:(id)a0;
- (char)isValidSelector:(SEL)a0;
- (void)setPortName:(id)a0;
- (void)terminated;

@end
