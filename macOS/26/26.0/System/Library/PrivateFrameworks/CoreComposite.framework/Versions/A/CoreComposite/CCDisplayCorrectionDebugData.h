@class CCMTLBuffer2D;
@protocol MTLTexture;

@interface CCDisplayCorrectionDebugData : CCData

@property (nonatomic) long long frameCount;
@property (retain, nonatomic) id<MTLTexture> videoSamplingCoordinates;
@property (retain, nonatomic) id<MTLTexture> mattingSamplingCoordinates;
@property (retain, nonatomic) id<MTLTexture> warpedMcamPassthrough;
@property (retain, nonatomic) id<MTLTexture> warpedGroupedMcamPassthrough;
@property (retain, nonatomic) id<MTLTexture> warpedMattingCoefficients;
@property (retain, nonatomic) id<MTLTexture> warpedGroupedMattingCoefficients;
@property (retain, nonatomic) id<MTLTexture> depthPreBlur;
@property (retain, nonatomic) id<MTLTexture> reprojectedDepthBlurred;
@property (retain, nonatomic) id<MTLTexture> reprojectedDepth;
@property (retain, nonatomic) id<MTLTexture> depthMeshCompute;
@property (retain, nonatomic) CCMTLBuffer2D *passthroughMesh;
@property (retain, nonatomic) CCMTLBuffer2D *passthroughIgnoreFlags;
@property (retain, nonatomic) CCMTLBuffer2D *mattingMesh;
@property (retain, nonatomic) CCMTLBuffer2D *mattingIgnoreFlags;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
