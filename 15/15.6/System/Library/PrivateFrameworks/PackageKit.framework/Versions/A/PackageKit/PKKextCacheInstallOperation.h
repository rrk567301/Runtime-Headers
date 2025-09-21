@interface PKKextCacheInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (char)_shouldUpdateKextCaches;
- (char)_updateKextCachesReturningError:(id *)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
