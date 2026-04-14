@class FigCaptureSourceVideoFormat, NSMutableDictionary, NSDictionary, FigCaptureSessionConfiguration, NSMutableSet, NSObject, NSSet, NSNumber;
@protocol OS_dispatch_queue;

@interface CMCaptureLocalSessionController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_streamsBySinkID;
    NSMutableSet *_activeVideoCameraSinkIDs;
    struct OpaqueFigCaptureSession { } *_videoCameraCaptureSession;
    NSNumber *_activeMaxFrameRate;
    NSNumber *_activeMinFrameRate;
    NSMutableSet *_activeVideoCameraOutputMetadataIdentifiers;
    struct OpaqueFigCaptureSource { } *_videoCameraCaptureSource;
    NSDictionary *_videoCameraCaptureSourceAttributes;
    FigCaptureSessionConfiguration *_videoCameraCaptureSessionConfig;
    FigCaptureSourceVideoFormat *_videoCameraDeviceFormat;
    BOOL _videoCameraCaptureSessionRunning;
    struct OpaqueFigCaptureSession { } *_metadataCameraCaptureSession;
    NSSet *_activeMetadataCameraMetadataIdentifiers;
    NSDictionary *_activeMetadataCameraFaceTrackingAttributes;
    struct OpaqueFigCaptureSource { } *_metadataCameraCaptureSource;
    NSDictionary *_metadataCameraCaptureSourceAttributes;
    FigCaptureSessionConfiguration *_metadataCameraCaptureSessionConfig;
    FigCaptureSourceVideoFormat *_metadataDeviceFormat;
    BOOL _metadataCameraCaptureSessionRunning;
    BOOL _metadataCameraSinkIDActive;
    _Atomic BOOL _invalidated;
    id _availabilityChangedNotificationToken;
    unsigned long long _frameTimeoutNotificationRegistrationCount;
    BOOL _registeredForSystemStateChangeNotification;
}

@property (retain, nonatomic) NSNumber *activeMaxFrameRate;
@property (retain, nonatomic) NSNumber *activeMinFrameRate;
@property (readonly, nonatomic) NSDictionary *videoCameraSourceAttributes;
@property (readonly, nonatomic) NSDictionary *metadataCameraSourceAttributes;

+ (void)initialize;

- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)startSessionForStream:(id)a0 outError:(id *)a1;
- (BOOL)_configureVideoCameraStreamOutputFormat;
- (BOOL)_createCaptureSessions;
- (BOOL)_detectedObjectsSupportedForSinkID:(id)a0;
- (BOOL)_determineMetadataCameraConfiguration;
- (BOOL)_determineVideoCameraOutputMetadataIdentifiers;
- (void)_enableConnectionsForActiveVideoCameraSourcedSinkIDs;
- (id)_newMetadataCameraFigCaptureSessionConfiguration;
- (id)_newVideoCameraFigCaptureSessionConfiguration;
- (void)_resolveCaptureSourcePropertiesFromLocalVideoCameraSessionConfigurationValues;
- (void)_resolveMetadataCameraFigCaptureSessionConfigurationValuesFromLocalSessionConfigurationValues;
- (void)_resolveVideoCameraFigCaptureSessionConfigurationValuesFromLocalSessionConfigurationValues;
- (void)_startSession:(struct OpaqueFigCaptureSession { } *)a0 sessionRunningInOut:(BOOL *)a1;
- (BOOL)_startSessionForMetadataCameraStream:(id)a0 outError:(id *)a1;
- (BOOL)_startSessionForVideoCameraStream:(id)a0 outError:(id *)a1;
- (void)_stopSession:(struct OpaqueFigCaptureSession { } *)a0 sessionRunningInOut:(BOOL *)a1;
- (BOOL)_stopSessionForMetadataCameraStream:(id)a0 outError:(id *)a1;
- (BOOL)_stopSessionForVideoCameraStream:(id)a0 outError:(id *)a1;
- (void)_updateFrameRate;
- (void)_updateSessionConfigurationForMetadataCameraStream;
- (void)_updateSessionConfigurationForVideoCameraStream;
- (void)_updateVideoCameraActiveSinkIDsWhenStartingStream:(id)a0;
- (void)_updateVideoCameraActiveSinkIDsWhenStoppingStream:(id)a0;
- (void)associateStream:(id)a0 withSink:(id)a1;
- (int)setCaptureSourceProperty:(id)a0 withValue:(id)a1;
- (BOOL)stopSessionForStream:(id)a0 outError:(id *)a1;
- (void)updateSessionConfigurationForStream:(id)a0;

@end
