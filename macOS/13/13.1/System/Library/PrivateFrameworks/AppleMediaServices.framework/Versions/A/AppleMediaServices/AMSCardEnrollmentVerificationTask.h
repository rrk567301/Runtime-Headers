@interface AMSCardEnrollmentVerificationTask : AMSTask

+ (void)verifyPayment:(id)a0 isDefault:(BOOL)a1 completion:(id /* block */)a2;
+ (void)verifyPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2 completion:(id /* block */)a3;
+ (id)performPaymentVerificationForPayment:(id)a0 isDefault:(BOOL)a1;
+ (id)performPaymentVerificationForPayment:(id)a0 isDefault:(BOOL)a1 bag:(id)a2;

@end
