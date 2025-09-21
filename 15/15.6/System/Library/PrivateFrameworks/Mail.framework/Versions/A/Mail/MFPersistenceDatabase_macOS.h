@interface MFPersistenceDatabase_macOS : EDPersistenceDatabase

@property (nonatomic) char haveSetDatabaseAttributes;

- (id)checkOutConnectionIsWriter:(char)a0;
- (char)enforceDataProtection;
- (void)handleExceptionDuringDatabaseBlock:(id)a0;
- (id)openConnectionIsWriter:(char)a0;
- (char)performWithOptions:(unsigned long long)a0 caller:(id)a1 block:(id /* block */)a2;
- (void)_setDatabaseAttributes;

@end
