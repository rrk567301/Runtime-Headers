@class NSError;

@interface XCTElementQueryTransformerPredicateValidator : NSObject <NSPredicateVisitor>

@property (readonly) NSError *error;
@property char expressionsAllowed;

+ (void)validatePredicate:(id)a0 withExpressionsAllowed:(char)a1;

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;

@end
