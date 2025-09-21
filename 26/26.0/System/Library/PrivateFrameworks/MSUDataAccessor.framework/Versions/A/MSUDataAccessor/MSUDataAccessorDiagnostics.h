@interface MSUDataAccessorDiagnostics : MSUDataAccessor

- (id)copyPathForPersistentData:(int)a0 error:(id *)a1;
- (id)returnDirectoryIfExistsForPath:(id)a0;
- (id)specialCaseFDRPathForDiagnostics;

@end
