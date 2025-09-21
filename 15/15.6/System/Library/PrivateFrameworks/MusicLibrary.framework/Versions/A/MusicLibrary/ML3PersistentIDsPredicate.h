@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate {
    NSArray *_persistentIDs;
}

@property (readonly, nonatomic) char shouldContain;

+ (char)supportsSecureCoding;
+ (id)predicateWithPersistentIDs:(const long long *)a0 count:(unsigned long long)a1 shouldContain:(char)a2;
+ (id)predicateWithPersistentIDs:(id)a0 shouldContain:(char)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)databaseStatementParameters;
- (id)initWithPersistentIDs:(id)a0 shouldContain:(char)a1;

@end
