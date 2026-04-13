@interface AMSSQLitePredicate : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
