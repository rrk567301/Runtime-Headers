@class AMSKeychainOptions;

@interface AMSClientCertificateTask : AMSTask

@property (readonly, copy) AMSKeychainOptions *options;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)performClientCertChainRequest;
- (id)performClientCertChainRequestWithAccount:(id)a0;

@end
