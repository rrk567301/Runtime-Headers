@class NSUUID, NSString, HMDEventTriggerExecutionSession, HMDEventTriggerDevice, HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent, NSMutableArray, NSObject, HMDTriggerConfirmationTimer;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMDDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver>

@property (weak, nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly, nonatomic) HMDEventTriggerDevice *requestingDevice;
@property (retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer;
@property (retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent;
@property (retain, nonatomic) NSMutableArray *analyticsSendEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)_registerForMessages;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)_askForUserPermissionFromDevice:(id)a0 executionSessionID:(id)a1;
- (void)_createBulletinNotification;
- (void)_handleUserPermissionRemoteResponse:(id)a0;
- (void)_handleUserPermissionRemoveDialogRequest:(id)a0;
- (void)_removeUserDialog:(id)a0;
- (void)_sessionComplete;
- (void)_userResponse:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)askForUserPermission:(id)a0;
- (void)createBulletinNotification;
- (id)initWithSessionID:(id)a0 eventTrigger:(id)a1 workQueue:(id)a2 msgDispatcher:(id)a3 requestingDevice:(id)a4;
- (void)userDidConfirmExecute:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
