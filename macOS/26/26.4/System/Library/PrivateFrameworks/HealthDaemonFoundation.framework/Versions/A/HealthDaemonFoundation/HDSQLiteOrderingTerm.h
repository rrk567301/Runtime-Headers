@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) BOOL ascending;

+ (id)orderingTermWithProperty:(id)a0 entityClass:(Class)a1 ascending:(BOOL)a2;

- (id)SQL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExpression:(id)a0 ascending:(BOOL)a1;
- (id)description;

@end
