@class NSData;

@interface LSDatabaseContext : NSObject

@property (class, readonly) LSDatabaseContext *sharedDatabaseContext;

@property (readonly) BOOL canAccess;
@property (readonly, getter=isAccessing) BOOL accessing;
@property (readonly) NSData *currentPersistentIdentifier;

+ (id)new;

- (BOOL)startAccessingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)accessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)accessWithUserID:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (void)stopAccessing;
- (BOOL)startAccessingSystemScopeReturningError:(id *)a0;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 error:(id *)a1;
- (void)releaseObservedDatabase4WebKit;
- (void)observeDatabaseChange4WebKit:(id)a0;
- (void)removeDatabaseChangeObserver4WebKit:(id)a0;
- (BOOL)startAccessingCurrentUserSessionReturningError:(id *)a0;
- (void)accessSystemScopeUsingBlock:(id /* block */)a0;
- (id)_init;
- (void)accessCurrentUserSessionUsingBlock:(id /* block */)a0;
- (void)accessUsingBlock:(id /* block */)a0;
- (void)accessWithUserID:(unsigned int)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startAccessingReturningError:(id *)a0;
- (void)getSystemContentDatabaseObject4WebKit:(id /* block */)a0;
- (id)init;
- (id)addDatabaseChangeObserver4WebKit:(id /* block */)a0;

@end
