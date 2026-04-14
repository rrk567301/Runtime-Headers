@interface MFPersistenceDatabase_macOS : EDPersistenceDatabase

@property (nonatomic) BOOL haveSetDatabaseAttributes;

- (id)openConnectionIsWriter:(BOOL)a0;
- (BOOL)performWithOptions:(unsigned long long)a0 block:(id /* block */)a1;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (BOOL)enforceDataProtection;
- (void)handleExceptionCreatingConnection:(id)a0;
- (void)_setDatabaseAttributes;

@end
