@interface PKDeferredPaymentSummaryItemValidator : PKPaymentSummaryItemValidator

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isValidWithAPIType:(unsigned long long)a0 withError:(id *)a1;
- (id)initWithDeferredPaymentSummaryItem:(id)a0;

@end
