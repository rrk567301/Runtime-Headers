@interface PKObsoletionInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (BOOL)_shouldDeleteDirectoryAtPath:(id)a0;
- (BOOL)__removeBlacklistedPathsFromSandboxWithBlacklistPath:(id)a0 withError:(id *)a1;
- (BOOL)_trashAtomicallyObsoleteBundlesReturningError:(id *)a0;
- (BOOL)_deleteObsoletePathsReturningError:(id *)a0;
- (BOOL)_removeAppPlaceholderReturningError:(id *)a0;
- (BOOL)_removeBlacklistedPathsFromSandboxReturningError:(id *)a0;

@end
