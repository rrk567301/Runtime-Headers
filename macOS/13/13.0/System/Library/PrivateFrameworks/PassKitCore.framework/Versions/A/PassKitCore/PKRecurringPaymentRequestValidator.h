@class NSString, PKRecurringPaymentRequest;

@interface PKRecurringPaymentRequestValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

@end
