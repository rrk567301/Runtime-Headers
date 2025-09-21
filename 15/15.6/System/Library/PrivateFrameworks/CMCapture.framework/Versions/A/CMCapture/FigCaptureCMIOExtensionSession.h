@class NSString, NSArray, FigCaptureSourceVideoFormat, NSMutableDictionary, FigCaptureSessionConfiguration, NSDictionary, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeVideoSinkIDs;
    NSMutableDictionary *_streamsByVideoSinkID;
    struct OpaqueFigCaptureSession { } *_captureSession;
    struct OpaqueFigCaptureSource { } *_captureSource;
    NSDictionary *_captureSourceAttributes;
    FigCaptureSessionConfiguration *_sessionConfig;
    FigCaptureSourceVideoFormat *_deviceFormat;
    NSNumber *_activeMaxFrameRate;
    NSNumber *_activeMinFrameRate;
    NSDictionary *_cmiocaptureSessionPlist;
    NSString *_modelID;
    _Atomic char _invalidated;
    id _availabilityChangedNotificationToken;
    char _sessionRunning;
    char _registeredForSystemStateChangeNotification;
}

@property (retain, nonatomic) NSNumber *activeMaxFrameRate;
@property (retain, nonatomic) NSNumber *activeMinFrameRate;
@property (readonly, copy, nonatomic) NSArray *supportedSourceFormats;
@property (readonly, nonatomic) NSDictionary *cinematicFramingVirtualCameraConfiguration;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;
- (void)_startSession;
- (id)_figCaptureSessionConfiguration;
- (void)_configureForStartingStream:(id)a0;
- (void)_configureForStoppingStream:(id)a0;
- (char)_configureStreamOutputFormat;
- (char)_configureStreamOutputMetadataIdentifiers;
- (char)_createCaptureSession;
- (char)_detectedObjectsSupportedForSinkID:(id)a0;
- (void)_enableVideoDataConnectionsForActiveSinkIDs;
- (void)_registerForFrameReceiveTimeoutNotification:(char)a0;
- (void)_resolveCaptureSourcePropertiesFromCMIOExtensionStreamSessionConfigurationValues;
- (void)_resolveFigCaptureSessionConfigurationValuesFromCMIOExtensionStreamSessionConfigurationValues;
- (void)_stopSession;
- (void)_updateFrameRate;
- (void)registerDevicesForProvider:(id)a0;
- (void)registerStreamsForDevice:(id)a0;
- (char)startSessionForStream:(id)a0;
- (char)stopSessionForStream:(id)a0;
- (void)updateSessionConfiguration;

@end
