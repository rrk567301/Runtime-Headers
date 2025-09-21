@class NSError;

@interface XCTElementQueryTransformerPredicateValidator : NSObject <NSPredicateVisitor>

@property (readonly) NSError *error;
@property BOOL expressionsAllowed;

+ (void)validatePredicate:(id)a0 withExpressionsAllowed:(BOOL)a1;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;

@end
