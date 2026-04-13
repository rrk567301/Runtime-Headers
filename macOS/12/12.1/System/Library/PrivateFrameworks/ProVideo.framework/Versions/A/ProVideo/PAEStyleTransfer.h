@class NSString;

@interface PAEStyleTransfer : PAEFilterDefaultBase {
    NSString *_modelName;
    BOOL _gpuDefaultsLoaded;
    BOOL _firstModelLoadLog;
}

@property (nonatomic) double currentAspectRatio;

+ (BOOL)hasEspressoVersion;

- (void)dealloc;
- (id)properties;
- (BOOL)variesOverTime;
- (BOOL)addParameters;
- (id)initWithAPIManager:(id)a0;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (id)_bundleForFilter;
- (id)_modelPath:(id)a0;
- (void)registerGPUDefaults;
- (struct PAEStyleTransferResourceTestResult { int x0; id x1; BOOL x2; })renderResourceForQuality:(long long)a0 forModel:(id)a1;
- (BOOL)buildGPURenderGraph:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 modelName:(id)a3 qualityLevel:(long long)a4;
- (BOOL)buildANERenderGraph:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 modelName:(id)a3 qualityLevel:(long long)a4;
- (id)pathForGPUSettings;
- (void)setupGPUNetwork;
- (id)gpuModelPath:(id)a0;
- (BOOL)loadGPUModel:(id)a0;
- (id)aneModelPath:(id)a0;
- (BOOL)loadANEModel:(id)a0;

@end
