@interface HMBModelUnindexedQuery : HMBModelQuery

+ (id)queryWithSQLPredicate:(id)a0 ascending:(char)a1 arguments:(id)a2;

- (id)sqlSelectStatementForModelType:(id)a0;
- (id)performQueryOn:(id)a0 arguments:(id)a1;

@end
