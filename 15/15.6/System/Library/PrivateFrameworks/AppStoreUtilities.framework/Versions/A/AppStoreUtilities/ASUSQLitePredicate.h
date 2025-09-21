@interface ASUSQLitePredicate : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
