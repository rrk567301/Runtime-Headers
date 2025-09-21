@interface PXSharingUserSafetyController : NSObject

@property (class, readonly, nonatomic) BOOL userSafetyInterventionCheckRequired;

+ (void)_analyzeAsset:(id)a0 withSensitivityAnalyzer:(id)a1 activeRequests:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_analyzeAssetWithFileURL:(id)a0 withSensitivityAnalyzer:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_updateAsset:(id)a0 withAnalysisResult:(id)a1 forVideoComplement:(BOOL)a2;
+ (void)_userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)a0 completion:(id /* block */)a1;
+ (void)userSafetyInterventionCheckRequiredBeforeSharingAssets:(id)a0 completion:(id /* block */)a1;

@end
