@class NSPredicate, NSSet, NSError;

@interface _DKPredicateValidator : NSObject <NSPredicateVisitor>

@property (nonatomic) BOOL validated;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSSet *allowedKeys;
@property (retain, nonatomic) NSError *error;

+ (BOOL)validatePredicate:(id)a0 allowedKeys:(id)a1 error:(id *)a2;
+ (BOOL)validateSortDescriptors:(id)a0;

- (BOOL)validateWithError:(id *)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0 allowedKeys:(id)a1;
- (void).cxx_destruct;

@end
