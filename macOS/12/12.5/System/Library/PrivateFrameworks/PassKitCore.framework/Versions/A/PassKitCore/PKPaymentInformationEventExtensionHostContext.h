@class NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)replyQueue;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (void)handleInformationRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleSignatureRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleConfigurationRequest:(id)a0 completion:(id /* block */)a1;

@end
