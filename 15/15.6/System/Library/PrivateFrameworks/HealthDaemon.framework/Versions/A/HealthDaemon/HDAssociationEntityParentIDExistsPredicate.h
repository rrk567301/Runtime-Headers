@interface HDAssociationEntityParentIDExistsPredicate : HDSQLitePredicate {
    long long _parentID;
    char _exists;
}

+ (id)predicateWithParentID:(long long)a0 exists:(char)a1;

- (id)description;
- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;

@end
