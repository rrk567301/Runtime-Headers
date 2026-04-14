@class NSString, NSDictionary, PAOpenGLContextPool, _PALowPriorityOpenGLDevice, NSObject;
@protocol OS_dispatch_queue;

@interface PAOpenGLDevice : PADevice {
    NSString *_identifier;
    NSDictionary *_properties;
    PAOpenGLContextPool *_pool;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    BOOL _initialized;
    NSObject<OS_dispatch_queue> *_deallocQueue;
    _PALowPriorityOpenGLDevice *_lowPriorityDevice;
}

@property (readonly, nonatomic) PAOpenGLContextPool *contextPool;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long rendererID;
@property (readonly, nonatomic) unsigned int displayMask;
@property (readonly, nonatomic) int virtualScreen;

+ (id)defaultDevice;
+ (struct _CGLContextObject { } *)_sharedContext;
+ (id)availableDevices;
+ (id)_availableDevices;
+ (struct _CGLContextObject { } *)sharedContext;
+ (id)integratedDevice;
+ (id)discreteDevice;
+ (struct _CGLPixelFormatObject { } *)_sharedPixelFormat:(BOOL)a0;
+ (struct _CGLPixelFormatObject { } *)sharedPixelFormat;
+ (id)deviceWithOpenGLDisplayMask:(unsigned int)a0;
+ (struct _CGLPixelFormatObject { } *)sharedDeepPixelFormat;
+ (id)deviceWithVirtualScreen:(int)a0;
+ (id)deviceWithRendererID:(unsigned long long)a0;
+ (id)deviceWithScreen:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (int)type;
- (id)identifier;
- (BOOL)isIntegrated;
- (id)_properties;
- (BOOL)isOffline;
- (BOOL)isAccelerated;
- (BOOL)isExtensionSupported:(id)a0;
- (id)_deviceProperties;
- (BOOL)isDiscrete;
- (id)renderFormatWithBitDepth:(long long)a0 alpha:(BOOL)a1;
- (id)extendedRangeRenderFormat;
- (id)renderFormatForPixelFormat:(id)a0 alpha:(BOOL)a1;
- (id)subDeviceWithQoS:(unsigned int)a0;
- (void)executeBlockWithContext:(id /* block */)a0;
- (id)_initWithVirtualScreen:(int)a0;
- (void)_lazyInitOnceIfNeeded;
- (id)_newIdentifierWithVirtualScreen:(int)a0;
- (void)_lazyInitOnce;
- (id)_rendererProperties;
- (id)_openGLProperties;
- (id)_getString:(unsigned int)a0;
- (BOOL)_isInternalFormatSupported:(int)a0;
- (BOOL)_isIntegerInternalFormatSupported:(int)a0;
- (id)openGLRenderer;
- (id)deallocQueue;
- (id)lowPriorityDevice;
- (id)openGLVersion;
- (id)openGLVendor;
- (id)shadingLanguageVersion;
- (BOOL)isTextureFormatSupported:(int)a0;
- (BOOL)isEmulated;
- (unsigned long long)textureMemoryInMegaBytes;

@end
