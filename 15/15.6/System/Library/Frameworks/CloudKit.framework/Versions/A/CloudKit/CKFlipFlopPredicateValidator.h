@protocol CKObjectValidating;

@interface CKFlipFlopPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (char)validate:(id)a0 error:(id *)a1;
- (id)initWithValidator:(id)a0;

@end
