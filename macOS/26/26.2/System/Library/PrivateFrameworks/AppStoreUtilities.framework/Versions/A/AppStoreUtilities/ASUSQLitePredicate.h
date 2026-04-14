@interface ASUSQLitePredicate : NSObject <NSCopying>

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
