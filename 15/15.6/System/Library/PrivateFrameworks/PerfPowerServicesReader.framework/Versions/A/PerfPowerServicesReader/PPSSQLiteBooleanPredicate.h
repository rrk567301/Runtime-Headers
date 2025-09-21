@interface PPSSQLiteBooleanPredicate : PPSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) char booleanValue;

+ (id)falsePredicate;
+ (id)truePredicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)sqlForEntity:(id)a0;

@end
