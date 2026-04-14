@class NSPredicate, NSError;
@protocol NSPredicateValidating;

@interface NSPredicateValidator : NSObject <NSPredicateVisitor>

@property (nonatomic) BOOL validated;
@property (copy, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSError *error;
@property (readonly, weak, nonatomic) id<NSPredicateValidating> validator;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;
- (id)initWithValidator:(id)a0;
- (void)dealloc;
- (unsigned long long)_determineFlags;
- (BOOL)_shouldCallSelectorOnValidator:(SEL)a0;
- (BOOL)_visitPredicate:(id)a0 error:(id *)a1;
- (BOOL)validatePredicate:(id)a0 error:(id *)a1;
- (void)visitPredicateExpression:(id)a0 keyPathScope:(id)a1 key:(id)a2;

@end
