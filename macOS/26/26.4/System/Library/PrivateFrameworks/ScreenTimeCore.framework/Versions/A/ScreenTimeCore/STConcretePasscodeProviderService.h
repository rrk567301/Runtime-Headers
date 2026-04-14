@class NSXPCListenerEndpoint;

@interface STConcretePasscodeProviderService : NSObject <STPasscodeReceiverInterface, STPasscodeProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingProvidePasscodeCompletionHandler;

- (void).cxx_destruct;
- (id)description;
- (id)initWithClientListenerEndpoint:(id)a0;
- (void)collectPasscodeWithSetupServiceProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)receivePasscode:(id)a0 completionHandler:(id /* block */)a1;

@end
