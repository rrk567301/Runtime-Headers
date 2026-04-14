@class AMSDelegatePaymentSheetRequest, AMSMutablePromise;

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain) AMSMutablePromise *paymentSheetPromise;
@property (retain) AMSDelegatePaymentSheetRequest *request;

- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)perform;
- (void).cxx_destruct;

@end
