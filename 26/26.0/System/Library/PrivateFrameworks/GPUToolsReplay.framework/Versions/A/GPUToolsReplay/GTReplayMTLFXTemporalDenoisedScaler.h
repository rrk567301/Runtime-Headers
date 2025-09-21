@class NSString;
@protocol MTLTexture, MTLFence;

@interface GTReplayMTLFXTemporalDenoisedScaler : GTReplayWrapperBase <MTLFXTemporalDenoisedScalerSPI>

@property (retain, nonatomic) id<MTLTexture> debugTexture;
@property (nonatomic) BOOL reset;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic) unsigned long long inputContentHeight;
@property (readonly, nonatomic) id<MTLTexture> dilatedMotionVectors;
@property (readonly, nonatomic) unsigned long long colorTextureUsage;
@property (readonly, nonatomic) unsigned long long depthTextureUsage;
@property (readonly, nonatomic) unsigned long long motionTextureUsage;
@property (readonly, nonatomic) unsigned long long reactiveTextureUsage;
@property (readonly, nonatomic) unsigned long long diffuseAlbedoTextureUsage;
@property (readonly, nonatomic) unsigned long long specularAlbedoTextureUsage;
@property (readonly, nonatomic) unsigned long long normalTextureUsage;
@property (readonly, nonatomic) unsigned long long roughnessTextureUsage;
@property (readonly, nonatomic) unsigned long long specularHitDistanceTextureUsage;
@property (readonly, nonatomic) unsigned long long denoiseStrengthMaskTextureUsage;
@property (readonly, nonatomic) unsigned long long transparencyOverlayTextureUsage;
@property (readonly, nonatomic) unsigned long long outputTextureUsage;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> depthTexture;
@property (retain, nonatomic) id<MTLTexture> motionTexture;
@property (retain, nonatomic) id<MTLTexture> diffuseAlbedoTexture;
@property (retain, nonatomic) id<MTLTexture> specularAlbedoTexture;
@property (retain, nonatomic) id<MTLTexture> normalTexture;
@property (retain, nonatomic) id<MTLTexture> roughnessTexture;
@property (retain, nonatomic) id<MTLTexture> specularHitDistanceTexture;
@property (retain, nonatomic) id<MTLTexture> denoiseStrengthMaskTexture;
@property (retain, nonatomic) id<MTLTexture> transparencyOverlayTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLTexture> exposureTexture;
@property (nonatomic) float preExposure;
@property (retain, nonatomic) id<MTLTexture> reactiveMaskTexture;
@property (nonatomic) float jitterOffsetX;
@property (nonatomic) float jitterOffsetY;
@property (nonatomic) float motionVectorScaleX;
@property (nonatomic) float motionVectorScaleY;
@property (nonatomic) BOOL shouldResetHistory;
@property (nonatomic, getter=isDepthReversed) BOOL depthReversed;
@property (readonly, nonatomic) unsigned long long colorTextureFormat;
@property (readonly, nonatomic) unsigned long long depthTextureFormat;
@property (readonly, nonatomic) unsigned long long motionTextureFormat;
@property (readonly, nonatomic) unsigned long long diffuseAlbedoTextureFormat;
@property (readonly, nonatomic) unsigned long long specularAlbedoTextureFormat;
@property (readonly, nonatomic) unsigned long long normalTextureFormat;
@property (readonly, nonatomic) unsigned long long roughnessTextureFormat;
@property (readonly, nonatomic) unsigned long long specularHitDistanceTextureFormat;
@property (readonly, nonatomic) unsigned long long denoiseStrengthMaskTextureFormat;
@property (readonly, nonatomic) unsigned long long transparencyOverlayTextureFormat;
@property (readonly, nonatomic) unsigned long long reactiveMaskTextureFormat;
@property (readonly, nonatomic) unsigned long long outputTextureFormat;
@property (readonly, nonatomic) unsigned long long inputWidth;
@property (readonly, nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (readonly, nonatomic) float inputContentMinScale;
@property (readonly, nonatomic) float inputContentMaxScale;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } worldToViewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } viewToClipMatrix;
@property (retain, nonatomic) id<MTLFence> fence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDevice:(id)a0 descriptor:(id)a1;

- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)encodeToCommandQueue:(id)a0;
- (void)encodeToCommandBuffer:(id)a0;

@end
