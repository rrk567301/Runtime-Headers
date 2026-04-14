@class NSSet, ASACoreAudio, NSObject, CMContinuityCaptureAudioInputProvider;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CMContinuityCaptureAudioRouteManager : NSObject {
    CMContinuityCaptureAudioInputProvider *_provider;
    ASACoreAudio *_coreAudioObject;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _serviceNotification;
    BOOL _clamshellIsClosed;
    unsigned int _cgsConnectionID;
    NSObject<OS_dispatch_source> *_cgsEventSource;
    unsigned int _cgsEventPort;
    BOOL _cgsNotificationSet;
    BOOL _hasExternalDisplay;
    NSSet *_magicContinuityCaptureMicDeviceUIDs;
    BOOL _continuityCaptureAudioRouteIsEligibleAsDefault;
    BOOL _shouldRestoreDefaultBuiltInMic;
    CMContinuityCaptureAudioRouteManager *_weakSelf;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)_handleCGSEvent;
- (BOOL)_currentDefaultInputDeviceIsBuiltInMic;
- (BOOL)_currentDefaultInputDeviceIsContinuityCaptureMic;
- (BOOL)_hasExternalDisplay;
- (void)_refreshContinuityCaptureDeviceEligibleWithClamshellIsClosed:(BOOL *)a0 hasExternalDisplay:(BOOL *)a1 magicContinuityCaptureMicDeviceUIDs:(id *)a2;
- (void)_registerForClamshellNotification;
- (void)_registerForExternalDisplayNotifications;
- (void)_switchDefaultInputDeviceIfApplicable;
- (BOOL)_switchDefaultInputDeviceToBuiltInMic;
- (BOOL)_switchDefaultInputDeviceToContinuityCaptureMic;
- (void)updateMagicContinuityCaptureMicDeviceUIDs:(id)a0;

@end
