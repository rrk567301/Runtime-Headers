@class NSString;

@interface ASUSQLitePropertyPredicate : ASUSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;

@end
