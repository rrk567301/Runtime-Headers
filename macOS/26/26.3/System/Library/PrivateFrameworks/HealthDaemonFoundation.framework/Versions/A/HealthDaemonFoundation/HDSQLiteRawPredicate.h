@class NSString, NSArray;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}

+ (id)predicateWithSQL:(id)a0 overProperties:(id)a1 values:(id)a2;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)description;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)SQLForEntityClass:(Class)a0;

@end
