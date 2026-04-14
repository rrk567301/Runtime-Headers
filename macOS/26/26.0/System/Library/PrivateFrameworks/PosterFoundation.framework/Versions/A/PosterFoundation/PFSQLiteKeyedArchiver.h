@class NSString, PFGenericValueTransformer, PFSQLiteArchiver, _PFSQLiteKeyedArchiverTransaction;

@interface PFSQLiteKeyedArchiver : NSObject <PFArchiving> {
    PFSQLiteArchiver *_sqliteArchiver;
    _PFSQLiteKeyedArchiverTransaction *_activeTx;
}

@property (retain) PFGenericValueTransformer *archiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1;
- (BOOL)setDouble:(double)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)init;
- (float)floatForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)setURL:(id)a0 forKey:(id)a1;
- (BOOL)accessWithBlock:(id /* block */)a0 error:(out id *)a1;
- (id)dateCreatedForKey:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 error:(out id *)a1;
- (id)initWithDatabaseURL:(id)a0 error:(out id *)a1;
- (id)lastModifiedForKey:(id)a0;
- (BOOL)mutateWithBlock:(id /* block */)a0 error:(out id *)a1;
- (id)objectForKey:(id)a0 ofClasses:(id)a1;

@end
