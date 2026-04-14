@interface AMSSQLitePredicate : NSObject <NSCopying>

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
