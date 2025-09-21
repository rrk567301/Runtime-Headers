@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (char)isCompatibleWithPredicate:(id)a0;

@end
