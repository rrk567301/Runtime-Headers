@class SCNSInterventionPanelController, _TtC12PhotosUICoreP33_AEF562763F3BEE3B23D607568135135047PXSensitivityInterventionManagerDelegateHandler, PHAsset, UXViewController;

@interface PXSensitivityInterventionManager : NSObject

@property (nonatomic, readonly) UXViewController *viewControllerToPresent;
@property (nonatomic, readonly) BOOL canPresentIntervention;
@property (nonatomic, retain) SCNSInterventionPanelController *internalInterventionFlow;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) long long analysisMediaType;
@property (nonatomic) long long interventionType;
@property (nonatomic, retain) _TtC12PhotosUICoreP33_AEF562763F3BEE3B23D607568135135047PXSensitivityInterventionManagerDelegateHandler *delegateHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 interventionType:(long long)a1;
- (void)beginModelPresentation:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)createInterventionFlow:(id)a0 error:(id *)a1;
- (id)initWithCompactSCSensitivityAnalysis:(long long)a0 analysisMediaType:(long long)a1 interventionType:(long long)a2;
- (void)overrideAnalysisFor:(id)a0 :(long long)a1;

@end
