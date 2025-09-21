@interface TSDCapabilities : NSObject

@property (class, readonly, nonatomic) TSDCapabilities *currentCapabilities;

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long renderer;
@property (readonly, nonatomic) char isRendererH3OrBelow;
@property (readonly, nonatomic) char isRendererH4OrBelow;
@property (readonly, nonatomic) char isRendererH5OrBelow;
@property (readonly, nonatomic) char hasLightningPort;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumHardcodedTextureSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumImageSize;
@property (readonly, nonatomic) char isMetalCapable;
@property (readonly, nonatomic) char isHDRCapable;
@property (readonly, nonatomic) unsigned long long physicalMemory;
@property (readonly, nonatomic) char hasHEVCHardwareEncoding;

- (id)init;
- (void)p_setupPlatform;
- (char)p_isMetalCapable;
- (void)p_setupDevice;

@end
