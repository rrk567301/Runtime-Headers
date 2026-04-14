@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (void)cleanupForStoreDemoModeWithCompletion:(id /* block */)a0;
- (BOOL)cleanupForStoreDemoMode:(id *)a0;
- (BOOL)hasCompletedRestorePostProcessing:(BOOL *)a0 error:(id *)a1;
- (BOOL)hasCompletedMomentAnalysis:(BOOL *)a0 error:(id *)a1;

@end
