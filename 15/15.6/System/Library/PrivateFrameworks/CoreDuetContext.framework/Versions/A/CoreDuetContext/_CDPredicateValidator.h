@class NSPredicate, NSSet, NSError;

@interface _CDPredicateValidator : NSObject <NSPredicateVisitor>

@property (nonatomic) char validated;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSSet *allowedKeys;
@property (retain, nonatomic) NSError *error;

+ (char)validatePredicate:(id)a0 allowedKeys:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0 allowedKeys:(id)a1;
- (char)validateWithError:(id *)a0;
- (void)_cd_validateKeypath:(id)a0;

@end
