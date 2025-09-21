@class NSString;

@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
