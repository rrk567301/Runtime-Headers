@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly) AMSBiometricsSignatureRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)performSignature;
- (id)_performSignatureOutOfProcess;
- (id)_performSignatureInProcess;

@end
