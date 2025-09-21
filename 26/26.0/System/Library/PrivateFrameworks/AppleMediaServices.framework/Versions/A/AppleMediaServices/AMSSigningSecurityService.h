@protocol AMSDServiceBrokerProtocol;

@interface AMSSigningSecurityService : NSObject

@property (class, readonly, nonatomic) AMSSigningSecurityService *sharedService;

@property (readonly) id<AMSDServiceBrokerProtocol> serviceBroker;

- (id)signatureForRequest:(id)a0;
- (id)_headersForRequest:(id)a0 buyParams:(id)a1 securityServicePromise:(id)a2 onDenied:(id /* block */)a3;
- (id)init;
- (id)handleResponse:(id)a0 bag:(id)a1;
- (void)_handleSecurityServicePromise:(id)a0 onConnected:(id /* block */)a1 onDenied:(id /* block */)a2 onError:(id /* block */)a3;
- (id)initWithServiceBroker:(id)a0;
- (id)_defaultSecurityServiceWithDelegate:(id)a0;
- (id)_handleResponse:(id)a0 bag:(id)a1 securityServicePromise:(id)a2 onDenied:(id /* block */)a3;
- (void).cxx_destruct;
- (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;

@end
