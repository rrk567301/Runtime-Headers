@interface MTLFXTemporalDenoisedScalerDescriptor : NSObject <NSCopying>

@property (nonatomic, getter=isInputContentPropertiesEnabled) BOOL inputContentPropertiesEnabled;
@property (nonatomic) float inputContentMinScale;
@property (nonatomic) float inputContentMaxScale;
@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long depthTextureFormat;
@property (nonatomic) unsigned long long motionTextureFormat;
@property (nonatomic) unsigned long long diffuseAlbedoTextureFormat;
@property (nonatomic) unsigned long long specularAlbedoTextureFormat;
@property (nonatomic) unsigned long long normalTextureFormat;
@property (nonatomic) unsigned long long roughnessTextureFormat;
@property (nonatomic) unsigned long long specularHitDistanceTextureFormat;
@property (nonatomic) unsigned long long denoiseStrengthMaskTextureFormat;
@property (nonatomic) unsigned long long transparencyOverlayTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic) BOOL requiresSynchronousInitialization;
@property (nonatomic, getter=isAutoExposureEnabled) BOOL autoExposureEnabled;
@property (nonatomic, getter=isReactiveMaskTextureEnabled) BOOL reactiveMaskTextureEnabled;
@property (nonatomic) unsigned long long reactiveMaskTextureFormat;
@property (nonatomic, getter=isSpecularHitDistanceTextureEnabled) BOOL specularHitDistanceTextureEnabled;
@property (nonatomic, getter=isDenoiseStrengthMaskTextureEnabled) BOOL denoiseStrengthMaskTextureEnabled;
@property (nonatomic, getter=isTransparencyOverlayTextureEnabled) BOOL transparencyOverlayTextureEnabled;

+ (BOOL)supportsDevice:(id)a0;
+ (float)supportedInputContentMaxScaleForDevice:(id)a0;
+ (float)supportedInputContentMinScaleForDevice:(id)a0;
+ (BOOL)supportsMetal4FX:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)enableInputContentProperties;
- (id)newTemporalDenoisedScalerWithDevice:(id)a0;
- (id)newTemporalDenoisedScalerWithDevice:(id)a0 compiler:(id)a1;
- (id)newTemporalDenoisedScalerWithHistoryTexture:(id)a0;
- (void)setEnableInputContentProperties:(BOOL)a0;

@end
