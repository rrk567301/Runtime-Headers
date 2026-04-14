@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString *foreignPersistentIDProperty;
@property (nonatomic) BOOL isFastCountable;

- (BOOL)hasEntities;
- (id)persistentIDProperty;
- (id)initWithUnitQuery:(id)a0 aggregateEntityClass:(Class)a1 foreignPersistentIDProperty:(id)a2;
- (unsigned long long)countOfEntities;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)selectPersistentIDsSQLAndProperties:(id)a0 ordered:(BOOL)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)entityClass;
- (void)encodeWithCoder:(id)a0;

@end
