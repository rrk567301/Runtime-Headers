@class NSString;

@interface ASUSQLitePropertyPredicate : ASUSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
