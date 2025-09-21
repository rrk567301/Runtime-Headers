@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) char ascending;

+ (id)orderingTermWithProperty:(id)a0 entityClass:(Class)a1 ascending:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQL;
- (id)initWithExpression:(id)a0 ascending:(char)a1;

@end
