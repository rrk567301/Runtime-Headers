@interface ASUSQLiteNullPredicate : ASUSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) char matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)a0;
+ (id)isNullPredicateWithProperty:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;

@end
