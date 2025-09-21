@class NSUUID, AVWeakReference, AVCaptureExternalDisplayConfiguration, CALayer, AVCaptureDevice, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureExternalDisplayConfigurator : NSObject {
    AVWeakReference *_configuratorWeakReference;
    AVWeakReference *_deviceWeakReference;
    AVWeakReference *_previewLayerWeakReference;
    NSObject<OS_dispatch_queue> *_queue;
    AVCaptureExternalDisplayConfiguration *_configuration;
    id /* block */ _configurationBlock;
    id /* block */ _configurationTimeoutBlock;
}

@property (class, readonly, getter=isMatchingFrameRateSupported) BOOL shouldMatchFrameRateSupported;
@property (class, readonly, getter=isBypassingColorSpaceConversionSupported) BOOL supportsBypassingColorSpaceConversion;
@property (class, readonly, getter=isPreferredResolutionSupported) BOOL supportsPreferredResolution;

@property (nonatomic) BOOL retryConfiguration;
@property (readonly, nonatomic) BOOL externalDisplayAndCaptureDeviceSynchronized;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) double activeExternalDisplayFrameRate;
@property (nonatomic) BOOL observingDeviceColorspace;
@property (nonatomic) BOOL observingDeviceFramerate;
@property (nonatomic) BOOL registered;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, weak, nonatomic) AVCaptureDevice *device;
@property (readonly, weak, nonatomic) CALayer *previewLayer;

+ (void)initialize;
+ (BOOL)isSupported;
+ (void)registerConfigurator:(id)a0 withDisplayIdentifier:(id)a1;

- (void)dealloc;
- (void)stop;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_configureExternalDisplay;
- (void)_configureExternalDisplayColorspace;
- (void)_configureExternalDisplayFrameRate;
- (void)_deviceColorspaceChangeMonitorConfigure;
- (void)_deviceColorspaceChangeMonitorTeardown;
- (void)_deviceFramerateChangedMonitorConfigure;
- (void)_deviceFramerateChangedMonitorTeardown;
- (void)_dispatchConfiguration;
- (void)_displayConfigurationChangedMonitorConfigure;
- (void)_displayConfigurationChangedMonitorTeardown;
- (void)_externalDisplayConfigurationChangedHandler;
- (void)_makeInActive;
- (void)dispatchConfiguration;
- (void)externalDisplayConfigurationChangedNotification:(id)a0;
- (id)initWithDevice:(id)a0 previewLayer:(id)a1 configuration:(id)a2;
- (void)registerSelfForDisplay:(id)a0;

@end
