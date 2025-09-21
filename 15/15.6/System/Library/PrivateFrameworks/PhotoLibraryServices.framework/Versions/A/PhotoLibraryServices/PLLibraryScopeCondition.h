@interface PLLibraryScopeCondition : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (nonatomic) unsigned char criteria;

+ (void)_abortIfCalledOnBaseClass;
+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (char)supportsQueryKey:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)query;
- (id)conditionQuery;
- (id)initWithCriteria:(unsigned char)a0;

@end
