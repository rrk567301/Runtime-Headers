@interface AVSearchPredicate : NSObject <NSCopying>

+ (id)predicateForString:(id)a0 withComparisonOptions:(unsigned long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
