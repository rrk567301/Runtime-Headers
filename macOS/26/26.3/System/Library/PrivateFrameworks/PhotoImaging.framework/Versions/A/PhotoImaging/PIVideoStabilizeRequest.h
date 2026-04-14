@interface PIVideoStabilizeRequest : NURenderRequest

@property (nonatomic) double allowedCropFraction;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned long long allowedAnalysisTypes;

+ (BOOL)canPerformGyroBasedStabilizationForAsset:(id)a0;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
