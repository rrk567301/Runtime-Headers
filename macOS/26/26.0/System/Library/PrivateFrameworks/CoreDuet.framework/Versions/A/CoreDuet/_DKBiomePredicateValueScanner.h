@class NSSet, NSMutableSet;

@interface _DKBiomePredicateValueScanner : NSObject <NSPredicateVisitor> {
    NSSet *_searchKeys;
    NSMutableSet *_matchedValues;
    unsigned long long _state;
}

+ (id)searchForValuesForKey:(id)a0 inPredicate:(id)a1;

- (id)_initWithSearchKeys:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;

@end
