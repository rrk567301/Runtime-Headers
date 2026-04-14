@class PKXPCService;

@interface PKInAppPaymentService : NSObject {
    PKXPCService *_remoteService;
}

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)registerPaymentListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 forHostIdentifier:(id)a1 hostSceneIdentifier:(id)a2 orientation:(id)a3 completion:(id /* block */)a4;
- (void)merchantStatusCheck:(id)a0 merchantDomain:(id)a1 sourceApplicationSecondaryIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)paymentServicesMerchantURLForAPIType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)secureElementStatus:(unsigned long long *)a0;
- (void)secureElementStatusWithCompletion:(id /* block */)a0;
- (id)paymentHardwareStatusWithType:(unsigned long long)a0;
- (void)paymentHardwareStatusWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)hasValidSecurityConfigurationWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cardsAvailableForAMPWithCountryCode:(id)a0 completion:(id /* block */)a1;
- (long long)cardsAvailableForAMPWithCountryCode:(id)a0;
- (void)cardDataForMerchantIdentifier:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)a0 merchantSession:(id)a1 completion:(id /* block */)a2;

@end
