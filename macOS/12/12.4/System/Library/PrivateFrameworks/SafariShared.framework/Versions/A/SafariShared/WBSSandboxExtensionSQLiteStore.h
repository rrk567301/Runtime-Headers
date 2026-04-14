@interface WBSSandboxExtensionSQLiteStore : WBSSQLiteStore <WBSSandboxExtensionStore> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _opening;
}

- (void)extensionForURL:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_databaseCreateIfNeeded:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)_createFreshDatabaseSchemaWithError:(id *)a0;
- (void)updateBookmarkData:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;

@end
