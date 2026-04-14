@interface PKAutomaticReloadPaymentSummaryItemValidator : PKPaymentSummaryItemValidator

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isValidWithAPIType:(long long)a0 withError:(id *)a1;
- (id)initWithAutomaticReloadPaymentSummaryItem:(id)a0;

@end
