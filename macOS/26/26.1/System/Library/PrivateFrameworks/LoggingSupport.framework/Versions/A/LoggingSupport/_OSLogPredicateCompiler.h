@class NSPredicate, NSMutableArray;

@interface _OSLogPredicateCompiler : NSObject <NSPredicateVisitor> {
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) NSPredicate *compiledPredicate;

+ (id)expressionForOSLogEventProxyBlock:(id /* block */)a0;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (void)processCompoundPredicate:(id)a0;
- (id)compileComparisonPredicate:(id)a0;
- (id)compileExpression:(id)a0;
- (id)compileKeyPathExpression:(id)a0;

@end
