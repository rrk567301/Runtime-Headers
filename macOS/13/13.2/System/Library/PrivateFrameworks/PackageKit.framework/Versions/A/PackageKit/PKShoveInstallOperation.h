@interface PKShoveInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (void)_moveActiveDYLDCacheIfNeeded;
- (BOOL)_shoveExtractedRootOntoDestinationReturningError:(id *)a0;

@end
