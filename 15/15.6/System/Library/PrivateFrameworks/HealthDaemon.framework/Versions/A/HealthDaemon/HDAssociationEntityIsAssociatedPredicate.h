@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate {
    char _inverted;
}

+ (id)predicateWithInvertedCondition:(char)a0;

- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;

@end
