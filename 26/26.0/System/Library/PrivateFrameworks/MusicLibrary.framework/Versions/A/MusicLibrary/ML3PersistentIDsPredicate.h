@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate {
    NSArray *_persistentIDs;
}

@property (readonly, nonatomic) BOOL shouldContain;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(const long long *)a0 count:(unsigned long long)a1 shouldContain:(BOOL)a2;
+ (id)predicateWithPersistentIDs:(id)a0 shouldContain:(BOOL)a1;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)databaseStatementParameters;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPersistentIDs:(id)a0 shouldContain:(BOOL)a1;

@end
