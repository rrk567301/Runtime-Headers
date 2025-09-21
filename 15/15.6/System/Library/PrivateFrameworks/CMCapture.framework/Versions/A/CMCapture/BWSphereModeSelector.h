@class NSString;

@interface BWSphereModeSelector : NSObject {
    NSString *_portType;
    struct __CFString { } *_currentSphereMode;
    struct __CFString { } *_currentNonLowPowerSphereMode;
    float _maximumFrameRate;
    char _sphereVideoSupported;
    char _sphereVideoEnabled;
    char _sphereVideoRecenteringEnabled;
    char _avoidsSphereRecentering;
    char _enablesSphereWhenAvailable;
    char _motionDataInvalid;
    char _lowPowerSphereModeEnabled;
    char _stillPreviewActiveSupported;
    char _zeroShutterLagEnabled;
    int _sphereThermalLevel;
    char _tripodModeEnabled;
    char _depthDataDeliveryEnabled;
    char _overCaptureEnabled;
    char _variableFrameRateVideoEnabled;
    float _maximumFrameRateSupported;
}

@property (readonly) NSString *portType;
@property (nonatomic) float maximumFrameRate;
@property (readonly, nonatomic) char sphereVideoSupported;
@property (nonatomic) char sphereVideoEnabled;
@property (nonatomic) char sphereVideoRecenteringEnabled;
@property (nonatomic) char avoidsSphereRecentering;
@property (nonatomic) char enablesSphereWhenAvailable;
@property (nonatomic) char zeroShutterLagEnabled;
@property (nonatomic) char lowPowerSphereModeEnabled;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) char tripodModeEnabled;
@property (nonatomic) char depthDataDeliveryEnabled;
@property (nonatomic) char overCaptureEnabled;
@property (nonatomic) char variableFrameRateVideoEnabled;
@property (readonly) struct __CFString { } *currentSphereMode;
@property (readonly) struct __CFString { } *currentNonLowPowerSphereMode;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPortType:(id)a0 stillActivePreviewSupported:(char)a1 sphereVideoSupported:(char)a2 sphereVideoMaxFrameRate:(float)a3;

@end
