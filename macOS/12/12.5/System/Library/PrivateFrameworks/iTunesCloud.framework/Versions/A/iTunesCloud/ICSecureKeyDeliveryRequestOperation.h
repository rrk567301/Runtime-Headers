@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation

@property (copy, nonatomic) ICSecureKeyDeliveryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)a0;
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)a0;
- (void)_createServerPlaybackContextUsingCertificateData:(id)a0 completion:(id /* block */)a1;

@end
