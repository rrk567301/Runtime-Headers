@class NSData;

@interface LSDatabaseContext : NSObject

@property (class, readonly) LSDatabaseContext *sharedDatabaseContext;

@property (readonly) BOOL canAccess;
@property (readonly, getter=isAccessing) BOOL accessing;
@property (readonly) NSData *currentPersistentIdentifier;

+ (id)new;

- (void)accessSystemScopeUsingBlock:(id /* block */)a0;
- (void)releaseObservedDatabase4WebKit;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 error:(id *)a1;
- (void)stopAccessing;
- (void)accessWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)getSystemContentDatabaseObject4WebKit:(id /* block */)a0;
- (BOOL)startAccessingReturningError:(id *)a0;
- (BOOL)startAccessingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)accessUsingBlock:(id /* block */)a0;
- (id)_init;
- (BOOL)startAccessingWithUserID:(unsigned int)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)observeDatabaseChange4WebKit:(id)a0;
- (void)accessCurrentUserSessionUsingBlock:(id /* block */)a0;
- (id)addDatabaseChangeObserver4WebKit:(id /* block */)a0;
- (void)accessWithUserID:(unsigned int)a0 usingBlock:(id /* block */)a1;
- (BOOL)startAccessingCurrentUserSessionReturningError:(id *)a0;
- (void)removeDatabaseChangeObserver4WebKit:(id)a0;
- (void)accessWithUserID:(unsigned int)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)init;
- (BOOL)startAccessingSystemScopeReturningError:(id *)a0;

@end
