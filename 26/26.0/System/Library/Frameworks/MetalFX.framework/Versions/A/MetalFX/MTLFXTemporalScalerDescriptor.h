@interface MTLFXTemporalScalerDescriptor : NSObject <NSCopying>

@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long depthTextureFormat;
@property (nonatomic) unsigned long long motionTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic, getter=isAutoExposureEnabled) BOOL autoExposureEnabled;
@property (nonatomic) BOOL requiresSynchronousInitialization;
@property (nonatomic, getter=isInputContentPropertiesEnabled) BOOL inputContentPropertiesEnabled;
@property (nonatomic) float inputContentMinScale;
@property (nonatomic) float inputContentMaxScale;
@property (nonatomic, getter=isReactiveMaskTextureEnabled) BOOL reactiveMaskTextureEnabled;
@property (nonatomic) unsigned long long reactiveMaskTextureFormat;

+ (BOOL)supportsDevice:(id)a0;
+ (float)supportedInputContentMaxScaleForDevice:(id)a0;
+ (float)supportedInputContentMinScaleForDevice:(id)a0;
+ (BOOL)supportsMetal4FX:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)enableInputContentProperties;
- (id)newTemporalScalerWithDevice:(id)a0;
- (id)newTemporalScalerWithDevice:(id)a0 compiler:(id)a1;
- (id)newTemporalScalerWithHistoryTexture:(id)a0;
- (id)newTemporalScalerWithHistoryTexture:(id)a0 compiler:(id)a1;
- (void)setEnableInputContentProperties:(BOOL)a0;

@end
