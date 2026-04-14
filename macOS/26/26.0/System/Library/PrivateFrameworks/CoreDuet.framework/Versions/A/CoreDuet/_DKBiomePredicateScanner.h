@class NSSet, NSMutableSet;

@interface _DKBiomePredicateScanner : NSObject <NSPredicateVisitor> {
    NSSet *_searchKeys;
    NSMutableSet *_matchedKeys;
}

+ (id)searchForKeys:(id)a0 inPredicate:(id)a1;

- (id)_initWithSearchKeys:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;

@end
