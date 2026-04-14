@interface PKKextCacheInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)_shouldUpdateKextCaches;
- (BOOL)_updateKextCachesReturningError:(id *)a0;

@end
