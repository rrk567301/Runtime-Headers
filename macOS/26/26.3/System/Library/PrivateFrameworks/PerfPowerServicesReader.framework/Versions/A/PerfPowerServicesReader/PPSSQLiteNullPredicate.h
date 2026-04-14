@interface PPSSQLiteNullPredicate : PPSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL matchesNull;

+ (id)isNullPredicateWithProperty:(id)a0;
+ (id)isNotNullPredicateWithProperty:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)sqlForEntity:(id)a0;

@end
