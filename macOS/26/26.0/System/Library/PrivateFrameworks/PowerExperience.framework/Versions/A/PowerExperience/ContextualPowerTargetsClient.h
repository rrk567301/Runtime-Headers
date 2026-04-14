@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log;

@interface ContextualPowerTargetsClient : NSObject <ContextualPowerTargetsCallbackProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ callback;
@property BOOL connectionInterrupted;
@property (retain) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (void)reRegister;
- (void)registerWithIdentifier:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (void)updateState:(unsigned long long)a0 andLevel:(unsigned long long)a1;

@end
