@interface TRIExpressionValidator : NSObject

- (id)_systemCovariateNameFromExpression:(id)a0;
- (BOOL)_validSystemCovariateFunction:(id)a0;
- (BOOL)_validUserCovariateFunction:(id)a0;
- (id)_validationErrorWithDetails:(id)a0;
- (BOOL)validateExpression:(id)a0 allowList:(id)a1 outError:(id *)a2;
- (BOOL)validatePredicate:(id)a0 allowList:(id)a1 outError:(id *)a2;

@end
