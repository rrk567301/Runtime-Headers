@class NSString;

@interface DNDNotificationFilterPredicateValidator : NSObject <NSPredicateVisitor> {
    NSString *_compileTimeIssues;
}

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (BOOL)validatePredicate:(id)a0 compileTimeIssues:(id *)a1 runTimeIssues:(id *)a2;
- (void).cxx_destruct;

@end
