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
@property (nonatomic, getter=isAutoExposureEnabled) char autoExposureEnabled;
@property (nonatomic) char requiresSynchronousInitialization;
@property (nonatomic, getter=isInputContentPropertiesEnabled) char inputContentPropertiesEnabled;
@property (nonatomic) float inputContentMinScale;
@property (nonatomic) float inputContentMaxScale;
@property (nonatomic, getter=isReactiveMaskTextureEnabled) char reactiveMaskTextureEnabled;
@property (nonatomic) unsigned long long reactiveMaskTextureFormat;

+ (char)supportsDevice:(id)a0;
+ (float)supportedInputContentMaxScaleForDevice:(id)a0;
+ (float)supportedInputContentMinScaleForDevice:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)enableInputContentProperties;
- (id)newTemporalScalerWithDevice:(id)a0;
- (id)newTemporalScalerWithHistoryTexture:(id)a0;
- (void)setEnableInputContentProperties:(char)a0;

@end
