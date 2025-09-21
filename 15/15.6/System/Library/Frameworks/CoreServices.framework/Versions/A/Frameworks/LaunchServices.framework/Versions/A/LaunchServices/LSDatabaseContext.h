@class NSData;

@interface LSDatabaseContext : NSObject

@property (class, readonly) LSDatabaseContext *sharedDatabaseContext;

@property (readonly) char canAccess;
@property (readonly, getter=isAccessing) char accessing;
@property (readonly) NSData *currentPersistentIdentifier;

+ (id)new;

- (id)init;
- (char)startAccessingWithUserID:(unsigned int)a0 error:(id *)a1;
- (id)_init;
- (void)accessCurrentUserSessionUsingBlock:(id /* block */)a0;
- (void)accessSystemScopeUsingBlock:(id /* block */)a0;
- (void)accessUsingBlock:(id /* block */)a0;
- (void)accessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)accessWithUserID:(unsigned int)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)accessWithUserID:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (id)addDatabaseChangeObserver4WebKit:(id /* block */)a0;
- (void)getSystemContentDatabaseObject4WebKit:(id /* block */)a0;
- (void)observeDatabaseChange4WebKit:(id)a0;
- (void)releaseObservedDatabase4WebKit;
- (void)removeDatabaseChangeObserver4WebKit:(id)a0;
- (char)startAccessingCurrentUserSessionReturningError:(id *)a0;
- (char)startAccessingReturningError:(id *)a0;
- (char)startAccessingSystemScopeReturningError:(id *)a0;
- (char)startAccessingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (char)startAccessingWithUserID:(unsigned int)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)stopAccessing;

@end
