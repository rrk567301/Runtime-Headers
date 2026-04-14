@protocol CKObjectValidating;

@interface CKFlipFlopPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidator:(id)a0;

@end
