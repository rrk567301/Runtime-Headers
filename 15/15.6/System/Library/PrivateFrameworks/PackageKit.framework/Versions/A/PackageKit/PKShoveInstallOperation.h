@interface PKShoveInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (void)_moveActiveDYLDCacheIfNeeded;
- (id)_pathsToAtomicallyReplace;
- (char)_shoveExtractedRootOntoDestinationReturningError:(id *)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
