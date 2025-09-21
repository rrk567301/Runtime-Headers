@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) char matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)a0;
+ (id)isNullPredicateWithProperty:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (char)isCompatibleWithPredicate:(id)a0;

@end
