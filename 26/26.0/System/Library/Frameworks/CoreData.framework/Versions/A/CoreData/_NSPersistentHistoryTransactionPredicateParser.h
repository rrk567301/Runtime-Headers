@class NSPredicate, NSMutableDictionary, NSError;

@interface _NSPersistentHistoryTransactionPredicateParser : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    NSMutableDictionary *_storeTokens;
    BOOL _hasDate;
    BOOL _hasTimestamp;
    NSError *_localError;
}

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)dealloc;
- (id)initWithPredicate:(id)a0;
- (id)storeTokens;
- (BOOL)parse:(id *)a0;

@end
