@interface PKKextCacheInstallOperation : PKInstallOperation

- (void)main;
- (int)installState;
- (BOOL)_shouldUpdateKextCaches;
- (BOOL)_updateKextCachesReturningError:(id *)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
