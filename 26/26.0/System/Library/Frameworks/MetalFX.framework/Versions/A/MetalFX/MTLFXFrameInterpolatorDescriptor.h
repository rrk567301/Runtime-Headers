@protocol MTLFXFrameInterpolatableScaler;

@interface MTLFXFrameInterpolatorDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maskTextureFormat;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL depthInverted;
@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long depthTextureFormat;
@property (nonatomic) unsigned long long motionTextureFormat;
@property (nonatomic, setter=setUITextureFormat:) unsigned long long uiTextureFormat;
@property (retain, nonatomic) id<MTLFXFrameInterpolatableScaler> scaler;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;

+ (BOOL)supportsDevice:(id)a0;
+ (BOOL)supportsMetal4FX:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)newFrameInterpolatorWithDevice:(id)a0;
- (id)newFrameInterpolatorWithDevice:(id)a0 compiler:(id)a1;

@end
