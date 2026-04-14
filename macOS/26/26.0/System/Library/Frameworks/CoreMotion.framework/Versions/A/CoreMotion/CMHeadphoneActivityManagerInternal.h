@class RMConnectionClient, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMHeadphoneActivityManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RMConnectionClient *_activityConnectionClient;
    NSOperationQueue *_activityCallbackQueue;
    id /* block */ _activityHandler;
    BOOL _activityActive;
    BOOL _activityStreaming;
    RMConnectionClient *_statusConnectionClient;
    NSOperationQueue *_statusCallbackQueue;
    id /* block */ _statusHandler;
    BOOL _statusActive;
    BOOL _statusStreaming;
    BOOL _deviceConnected;
    double _startTime;
    struct unique_ptr<CLSettings, std::default_delete<CLSettings>> { struct CLSettings *__ptr_; } _motionSettings;
    BOOL _enableMSL;
    float _accessoryAccelInterval;
    float _accessoryGyroInterval;
    BOOL _isGyroBiasValid;
    float _accessoryDeviceMotionInterval;
    float _sourceDeviceMotionInterval;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } _accessoryAccelerometerDispatcher;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } _accessoryGyroDispatcher;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } _accessoryDeviceMotionDispatcher;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } _accessoryDeviceMotionConfigDispatcher;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } _deviceMotionDispatcher;
    struct unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>> { struct CMSpatialLogger *__ptr_; } fLogger;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectActivity;
- (void)connectStatus;
- (void)disconnectActivity;
- (void)disconnectStatus;
- (BOOL)mslLoggingEnabledPrivate;
- (void)onAudioAccessoryDeviceMotion:(const void *)a0;
- (void)startMslLoggingPrivateWithFilenamePrefix:(id)a0 filePath:(id)a1;
- (void)stopMslLoggingPrivate;
- (void)updatePreferences;

@end
