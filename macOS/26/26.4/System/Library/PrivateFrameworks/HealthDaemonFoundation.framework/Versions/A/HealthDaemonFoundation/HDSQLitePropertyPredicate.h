@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
