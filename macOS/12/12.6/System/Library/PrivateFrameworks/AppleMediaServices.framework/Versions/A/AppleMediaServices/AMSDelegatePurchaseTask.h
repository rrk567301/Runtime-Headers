@class AMSURLTaskInfo, AMSDelegatePurchaseRequest, AMSURLResult, AMSBiometricsSignatureRequest, AMSPaymentSheetResult, AMSDelegatePaymentSheetTask;

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask

@property (retain) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain) AMSURLResult *delegateAuthResult;
@property (retain) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (retain) AMSPaymentSheetResult *paymentSheetResult;
@property (retain) AMSDelegatePaymentSheetTask *paymentSheetTask;
@property (readonly) AMSDelegatePurchaseRequest *request;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_parseFormDataFromResult:(id)a0;
- (void)_parseBiometricsSignatureRequestFromTask:(id)a0;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performPaymentSheetTask;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)a0;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)performDelegatePurchase;

@end
