@class NSString;
@protocol MTL4FXTemporalScalerSPI, MTL4FXTemporalDenoisedScalerSPI, MTLFXTemporalScalerSPI, MTLTexture, MTLFence, MTLFXTemporalDenoisedScalerSPI;

@interface _MFXFrameInterpolatorEffect : _MTLFXFrameInterpolator <MTLFXFrameInterpolatorSPI> {
    void *_impl;
    id<MTLFXTemporalScalerSPI> _temporalScaler;
    id<MTLFXTemporalDenoisedScalerSPI> _denoisedScaler;
    id<MTL4FXTemporalScalerSPI> _temporalScaler4;
    id<MTL4FXTemporalDenoisedScalerSPI> _denoisedScaler4;
}

@property (retain, nonatomic) id<MTLTexture> debugTexture;
@property (nonatomic) BOOL compositedUITexture;
@property (nonatomic) BOOL reset;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long contentWidth;
@property (nonatomic) unsigned long long contentHeight;
@property (readonly, nonatomic) unsigned long long colorTextureUsage;
@property (readonly, nonatomic) unsigned long long outputTextureUsage;
@property (readonly, nonatomic) unsigned long long depthTextureUsage;
@property (readonly, nonatomic) unsigned long long motionTextureUsage;
@property (readonly, nonatomic) unsigned long long uiTextureUsage;
@property (readonly, nonatomic) unsigned long long colorTextureFormat;
@property (readonly, nonatomic) unsigned long long depthTextureFormat;
@property (readonly, nonatomic) unsigned long long motionTextureFormat;
@property (readonly, nonatomic) unsigned long long outputTextureFormat;
@property (readonly, nonatomic) unsigned long long inputWidth;
@property (readonly, nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (readonly, nonatomic) unsigned long long uiTextureFormat;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> prevColorTexture;
@property (retain, nonatomic) id<MTLTexture> depthTexture;
@property (retain, nonatomic) id<MTLTexture> motionTexture;
@property (nonatomic) float motionVectorScaleX;
@property (nonatomic) float motionVectorScaleY;
@property (nonatomic) float deltaTime;
@property (nonatomic) float nearPlane;
@property (nonatomic) float farPlane;
@property (nonatomic) float fieldOfView;
@property (nonatomic) float aspectRatio;
@property (retain, nonatomic, setter=setUITexture:) id<MTLTexture> uiTexture;
@property (nonatomic) float jitterOffsetX;
@property (nonatomic) float jitterOffsetY;
@property (nonatomic, getter=isUITextureComposited, setter=setIsUITextureComposited:) BOOL uiTextureComposited;
@property (nonatomic) BOOL shouldResetHistory;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLFence> fence;
@property (nonatomic, getter=isDepthReversed) BOOL depthReversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void).cxx_destruct;
- (void)encodeToCommandQueue:(id)a0;
- (void)encodeToCommandBuffer:(id)a0;

@end
