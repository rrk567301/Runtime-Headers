@class NSMutableDictionary;

@interface MCMCommandDispatcher : NSObject

@property (readonly, nonatomic) NSMutableDictionary *messageToCommandClassMap;

- (id)_commandFromCommandClass:(Class)a0 message:(id)a1 context:(id)a2 reply:(id)a3 error:(id *)a4;
- (Class)_commandClassFromXPCMessage:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_ifNeededRelayMessage:(id)a0 context:(id)a1;
- (id)init;
- (id)_messageFromCommandClass:(Class)a0 xpcMessage:(id)a1 context:(id)a2 error:(id *)a3;
- (void)dispatchMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)registerCommandClass:(Class)a0;
- (void).cxx_destruct;

@end
