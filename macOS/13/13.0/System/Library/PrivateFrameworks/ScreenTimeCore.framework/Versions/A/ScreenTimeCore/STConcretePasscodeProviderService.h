@class NSXPCListenerEndpoint;

@interface STConcretePasscodeProviderService : NSObject <STPasscodeReceiverInterface, STPasscodeProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingProvidePasscodeCompletionHandler;

- (id)description;
- (void).cxx_destruct;
- (void)receivePasscode:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientListenerEndpoint:(id)a0;
- (void)collectPasscodeWithSetupServiceProxy:(id)a0 completionHandler:(id /* block */)a1;

@end
