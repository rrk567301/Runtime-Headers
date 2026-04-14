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
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)updateMagicContinuityCaptureMicDeviceUIDs:(id)a0;
- (void)_registerForClamshellNotification;
- (BOOL)_hasExternalDisplay;
- (void)_handleCGSEvent;
- (void)_registerForExternalDisplayNotifications;
- (BOOL)_currentDefaultInputDeviceIsBuiltInMic;
- (BOOL)_currentDefaultInputDeviceIsContinuityCaptureMic;
- (BOOL)_switchDefaultInputDeviceToBuiltInMic;
- (BOOL)_switchDefaultInputDeviceToContinuityCaptureMic;
- (void)_switchDefaultInputDeviceIfApplicable;
- (void)_refreshContinuityCaptureDeviceEligibleWithClamshellIsClosed:(BOOL *)a0 hasExternalDisplay:(BOOL *)a1 magicContinuityCaptureMicDeviceUIDs:(id *)a2;

@end
