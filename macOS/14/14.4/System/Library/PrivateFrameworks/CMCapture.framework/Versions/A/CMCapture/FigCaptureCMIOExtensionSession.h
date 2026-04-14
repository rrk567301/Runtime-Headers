@class NSString, NSArray, FigCaptureSourceVideoFormat, NSMutableDictionary, FigCaptureSessionConfiguration, NSDictionary, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeSinkIDs;
    NSMutableDictionary *_streamsBySinkID;
    struct OpaqueFigCaptureSession { } *_captureSession;
    struct OpaqueFigCaptureSource { } *_captureSource;
    NSDictionary *_captureSourceAttributes;
    FigCaptureSessionConfiguration *_sessionConfig;
    FigCaptureSourceVideoFormat *_deviceFormat;
    NSNumber *_activeMaxFrameRate;
    NSNumber *_activeMinFrameRate;
    NSDictionary *_cmiocaptureSessionPlist;
    NSString *_modelID;
    BOOL _invalidated;
}

@property (retain, nonatomic) NSNumber *activeMaxFrameRate;
@property (retain, nonatomic) NSNumber *activeMinFrameRate;
@property (readonly, copy, nonatomic) NSArray *supportedSourceFormats;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithQueue:(id)a0;
- (id)_figCaptureSessionConfiguration;
- (void)_configureActiveSinkIDs;
- (BOOL)_configureStreamOutputFormat;
- (BOOL)_createCaptureSession;
- (void)_resolvePropertiesForActiveConfigurations;
- (void)_updateFrameRate;
- (void)registerDevicesForProvider:(id)a0;
- (void)registerStreamsForDevice:(id)a0;
- (void)startSessionForStream:(id)a0;
- (void)stopSessionForStream:(id)a0;
- (void)updateFaceDrivenAEAFEnabled:(BOOL)a0;
- (void)updateSessionConfiguration;

@end
