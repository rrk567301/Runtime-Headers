@interface AVSearchPredicate : NSObject <NSCopying>

+ (id)predicateForString:(id)a0 withComparisonOptions:(unsigned long long)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
