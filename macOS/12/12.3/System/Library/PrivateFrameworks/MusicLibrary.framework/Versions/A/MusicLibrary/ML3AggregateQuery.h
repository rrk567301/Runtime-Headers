@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)entityClass;
- (unsigned long long)countOfEntities;
- (BOOL)hasEntities;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (id)persistentIDProperty;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;

@end
