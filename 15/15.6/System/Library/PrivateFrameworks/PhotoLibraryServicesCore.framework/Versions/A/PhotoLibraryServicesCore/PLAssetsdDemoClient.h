@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (char)cleanupForStoreDemoMode:(id *)a0;
- (void)cleanupForStoreDemoModeWithCompletion:(id /* block */)a0;
- (char)hasCompletedMomentAnalysis:(char *)a0 error:(id *)a1;
- (char)hasCompletedRestorePostProcessing:(char *)a0 error:(id *)a1;

@end
