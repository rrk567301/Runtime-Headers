@class AVWeakReference, NSString, NSHashTable, NSError, FigCaptureSessionConfiguration, NSObject, NSMutableArray, AVRunLoopCondition, AVCaptureSessionConfiguration;
@protocol AVUIDevice, OS_dispatch_queue, OS_tcc_identity;

@interface AVCaptureSessionInternal : NSObject {
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    NSObject<OS_tcc_identity> *tccIdentity;
    int beginConfigRefCount;
    int graphRebuildFromCommitConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    BOOL figCaptureSessionRunning;
    BOOL figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    BOOL running;
    BOOL interrupted;
    BOOL usesApplicationAudioSession;
    BOOL automaticallyConfiguresApplicationAudioSession;
    BOOL automaticallyConfiguresCaptureDeviceForWideColor;
    AVRunLoopCondition *runLoopCondition;
    BOOL waitingForFigCaptureSessionToStart;
    BOOL waitingForFigCaptureSessionToStop;
    BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
    long long graphRebuildSignalCount;
    struct OpaqueCMClock { } *masterClock;
    BOOL notifiesOnMainThread;
    NSMutableArray *devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
    BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
    BOOL xctestAuthorizedToStealDevice;
    id<AVUIDevice> uiDevice;
    id orientationObserver;
    long long deviceOrientation;
    NSObject<OS_dispatch_queue> *deviceOrientationChangeQueue;
    struct OpaqueFigReentrantMutex { } *deviceOrientationChangeMutex;
    struct OpaqueFigReentrantMutex { } *figCaptureSourceConfigChangeCacheMutex;
}

@end
