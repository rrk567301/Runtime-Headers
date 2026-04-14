@class AMSDelegatePaymentSheetRequest, AMSMutablePromise;

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain) AMSMutablePromise *paymentSheetPromise;
@property (retain) AMSDelegatePaymentSheetRequest *request;

- (id)perform;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
