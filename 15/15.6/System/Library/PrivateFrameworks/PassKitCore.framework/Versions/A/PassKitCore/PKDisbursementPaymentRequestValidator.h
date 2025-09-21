@class NSString, PKDisbursementPaymentRequest;

@interface PKDisbursementPaymentRequestValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKDisbursementPaymentRequest *disbursementPaymentRequest;
@property (readonly, nonatomic) char shouldSkipSummaryItemValidation;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;
+ (id)validatorWithObject:(id)a0 shouldSkipValidation:(char)a1;

- (void).cxx_destruct;
- (char)isValidWithError:(id *)a0;
- (id)initWithDisbursementPaymentRequest:(id)a0;
- (id)initWithDisbursementPaymentRequest:(id)a0 shouldSkipSummaryItemValidation:(char)a1;
- (char)isValidWithAPIType:(long long)a0 withError:(id *)a1;

@end
