@class NSXPCListenerEndpoint;

@interface STConcretePasscodeAuthenticationProviderService : NSObject <STPasscodeAuthenticationResultReceiverInterface, STPasscodeAuthenticationProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;

- (void).cxx_destruct;
- (id)description;
- (id)initWithClientListenerEndpoint:(id)a0;
- (void)authenticatePasscodeWithCommunicationServiceProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)receivePasscodeAuthenticationResult:(id)a0 completionHandler:(id /* block */)a1;

@end
