@class AMSDelegatePaymentSheetRequest, AMSPromise;

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain) AMSPromise *paymentSheetPromise;
@property (retain) AMSDelegatePaymentSheetRequest *request;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
