@interface MFPersistenceDatabase_macOS : EDPersistenceDatabase

@property (nonatomic) BOOL haveSetDatabaseAttributes;

- (BOOL)enforceDataProtection;
- (BOOL)performWithOptions:(unsigned long long)a0 block:(id /* block */)a1;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (void)handleExceptionCreatingConnection:(id)a0;
- (id)openConnectionIsWriter:(BOOL)a0;
- (void)_setDatabaseAttributes;

@end
