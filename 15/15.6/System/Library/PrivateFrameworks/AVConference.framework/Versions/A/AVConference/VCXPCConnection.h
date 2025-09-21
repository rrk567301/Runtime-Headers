@class NSData, NSString, NSObject;
@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;

@interface VCXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _pid;
    NSObject<OS_os_transaction> *_transaction;
    char _isPersistent;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_timeoutTimerQueue;
    struct OpaqueFigCFWeakReferenceHolder { } *_timeoutTimerContext;
    char _timeoutTimerStarted;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property int pid;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *tokenData;
@property (retain, nonatomic) NSString *lastCalledApiName;
@property (getter=isPersistent) char persistent;

+ (void)selfTerminateDueToTimeout:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)createTimeoutTimer;
- (void)destroyTimeoutTimer;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;

@end
