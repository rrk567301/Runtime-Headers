@class AVCaptureDeviceInput, NSString, NSUUID, AVWeakReference, NSObject, FigStateMachine;
@protocol OS_dispatch_queue;

@interface AVExternalSyncDevice : NSObject <AVExternalSyncDeviceDeviceNotificationDelegate> {
    AVWeakReference *_deviceWeakReference;
    AVWeakReference *_delegate;
    FigStateMachine *_stateMachine;
    id /* block */ _unfollowTimeoutBlock;
    AVCaptureDeviceInput *_captureDeviceInput;
}

@property (readonly, nonatomic, getter=isUsbConnected) BOOL usbConnected;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ configurationTimeoutBlock;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=isSessionRunning) BOOL sessionRunning;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } signalCompensationDelay;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_setDelegate:(id)a0;
- (void)_setupStateMachine;
- (void)_notifyDelegateOfError:(int)a0;
- (void)dealloc;
- (void)_setClock:(struct OpaqueCMClock { } *)a0;
- (void)_handleUnfollow;
- (void)_handleSourceDiedEvent;
- (void)_handleUSBConnectionStateChange:(BOOL)a0;
- (id)_initWithIdentifier:(id)a0 pid:(unsigned int)a1 vid:(unsigned int)a2;
- (void)applyActiveExternalSyncVideoFrameDuration;
- (void)handleClockReceived:(struct OpaqueCMClock { } *)a0;
- (void)handleClockSetupFailedWithError:(int)a0;
- (void)handleFollowForDevice:(id)a0 withSessionRunning:(BOOL)a1;
- (void)handleFollowTimeout;
- (void)handleLockStateUpdateTriggerID:(unsigned int)a0 lockState:(BOOL)a1;
- (void)handleSessionStateChange:(BOOL)a0;
- (void)handleTSMSGOutOfBoundsTriggerID:(unsigned int)a0 error:(unsigned int)a1;
- (void)handleTSMSGSessionStoppedTriggerID:(unsigned int)a0 status:(unsigned int)a1;
- (void)handleTransitionToActiveSync;
- (void)handleTransitionToActiveSyncFromConfiguring;
- (void)handleTransitionToConfiguring;
- (void)handleTransitionToIdle;
- (void)handleTransitionToJamSync;
- (void)handleTransitionToUnavailable;
- (void)handleTriggerPresentTriggerID:(unsigned int)a0 isPresentState:(BOOL)a1;
- (void)handleUnfollow;
- (void)notifyDelegateStatusChange;

@end
