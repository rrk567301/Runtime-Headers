@interface PPTSQLiteBooleanPredicate : PPTSQLitePredicate <NSCopying>

@property (readonly, nonatomic) BOOL booleanValue;

+ (id)truePredicate;
+ (id)falsePredicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)sqlForEntity:(id)a0;

@end
