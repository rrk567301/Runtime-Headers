@protocol CKObjectValidating;

@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> modifierValidator;
@property (retain, nonatomic) id<CKObjectValidating> leftExpressionValidator;
@property (retain, nonatomic) id<CKObjectValidating> operatorValidator;
@property (retain, nonatomic) id<CKObjectValidating> optionsValidator;
@property (retain, nonatomic) id<CKObjectValidating> rightExpressionValidator;

- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
