@class HDSQLitePredicate;

@interface HDWorkoutActivityPredicate : HDSQLitePredicate {
    HDSQLitePredicate *_subPredicate;
}

+ (id)predicateForSubPredicate:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;

@end
