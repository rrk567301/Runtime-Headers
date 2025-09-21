@interface TRIExpressionValidator : NSObject

- (char)_validSystemCovariateFunction:(id)a0;
- (char)_validUserCovariateFunction:(id)a0;
- (id)_validationErrorWithDetails:(id)a0;
- (char)validateExpression:(id)a0 outError:(id *)a1;
- (char)validatePredicate:(id)a0 outError:(id *)a1;

@end
