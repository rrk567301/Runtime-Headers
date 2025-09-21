@interface CCWarpServiceDescriptor : CCServiceDescriptor {
    long long _orfPassMode;
}

@property (nonatomic) long long vfrwDownsamplingFactor;
@property (nonatomic) unsigned long long fixedPointIterationCount;
@property (nonatomic) unsigned long long resolveWarpIterationCount;
@property (nonatomic) unsigned long long posWarpSRWIterationCount;
@property (nonatomic) float adaptiveDownSamplingRate;
@property (nonatomic) unsigned long long avfwTriangleBudget;
@property (nonatomic) float depthDisparityThreshold;
@property (nonatomic) long long seedingPointStyle;
@property (nonatomic) long long orfPassMode;
@property (nonatomic) long long warpAlgorithm;
@property (nonatomic) BOOL seperateRotationComponent;
@property (nonatomic) BOOL textFriendly;
@property (nonatomic) BOOL performDenoising;
@property (nonatomic) BOOL warpDepth;
@property (nonatomic) BOOL perciseDepth;
@property (nonatomic) BOOL highQualityDepth;
@property (nonatomic) BOOL generateWarpedDepth;
@property (nonatomic) BOOL generateWarpedConfidence;
@property (nonatomic) BOOL robustChecking;
@property (nonatomic) BOOL robustResolve;
@property (nonatomic) BOOL enableTemporalAntiAliasing;
@property (nonatomic) BOOL hybridWarp;
@property (nonatomic) BOOL enableBlending;
@property (nonatomic) BOOL useStencil;
@property (nonatomic) BOOL useGappedDestinationViewportsForStereoHack;
@property (nonatomic) BOOL enableAlgorithmDataControl;
@property (nonatomic) BOOL outputDownsampledDepth;
@property (nonatomic) long long dataSyncMode;
@property (nonatomic) BOOL enableMultiViewBlend;
@property (nonatomic) BOOL enableReverseBlending;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isSupported;

@end
