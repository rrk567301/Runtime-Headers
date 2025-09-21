@interface PKShoveInstallOperation : PKInstallOperation

- (void)main;
- (int)installState;
- (void)_moveActiveDYLDCacheIfNeeded;
- (id)_pathsToAtomicallyReplace;
- (BOOL)_shoveExtractedRootOntoDestinationReturningError:(id *)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
