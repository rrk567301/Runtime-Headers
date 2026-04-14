@class NSString, NSMutableArray;

@interface _NSFilterPredicateVisitor : NSObject <NSPredicateVisitor> {
    NSMutableArray *_predicateParts;
    unsigned long long _predicatePartsCount;
    BOOL _didFirstVisit;
    BOOL _bail;
    unsigned long long _visitingIndex;
    NSString *_substitutedValue;
}

- (void)visitPredicateExpression:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)result;
- (id)substitutedValueForPredicate:(id)a0;

@end
