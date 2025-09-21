@class ACAccount;

@interface TPSContactsTrustedAccountValidation : TPSTargetingValidation

@property (nonatomic) char desiredValue;
@property (retain, nonatomic) ACAccount *primaryAccount;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_hasAssignmentForTrustedAccountType:(unsigned long long)a0 completion:(id /* block */)a1;
- (char)_primaryAccountCanHaveTrustedAccountType:(unsigned long long)a0;
- (void)reportCompletionWithResult:(char)a0 error:(id)a1;
- (void)validateBeneficiaryAssignmentWithCompletion:(id /* block */)a0;
- (void)validateCustodianAssignmentWithCompletion:(id /* block */)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
