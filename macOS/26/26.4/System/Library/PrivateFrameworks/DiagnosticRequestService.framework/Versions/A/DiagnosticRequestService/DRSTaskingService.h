@class DRSTaskingManager, DRSTaskingEventPublisher, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_semaphore;

@interface DRSTaskingService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *serviceConnection;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) DRSTaskingManager *taskingManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem;
@property (readonly, nonatomic) DRSTaskingEventPublisher *eventPublisher;

+ (id)sharedInstance;
+ (id)databaseDirectory;
+ (BOOL)serviceIsEnabled;

- (void)_handleClearTaskingStateMessage:(id)a0 state:(id)a1;
- (void)_handleInvalidMessage:(id)a0 state:(id)a1;
- (void)_configureInvalidationXPCActivity;
- (void)_checkForDefaultSubscriptionUpdate;
- (void)_configureXPCActivities;
- (BOOL)activateService;
- (void)_handleJSONTaskingSystemMessage:(id)a0 state:(id)a1 transaction:(id)a2;
- (void).cxx_destruct;
- (void)_waitForDeviceUnlockAndInitializeServiceState;
- (void)_sendClearStateReplyForMessage:(id)a0 rejectionReason:(const char *)a1;
- (void)_sendConfigStateReplyForMessage:(id)a0 rejectionReason:(const char *)a1 state:(unsigned char)a2 completionType:(unsigned long long)a3;
- (void)_handleCloudChannelConfigGet:(id)a0 state:(id)a1;
- (id)init;
- (void)handleRequest:(id)a0 state:(id)a1;
- (void)_handleCloudChannelConfigReset:(id)a0 state:(id)a1;
- (void)_handleConfigCompletionMessage:(id)a0 state:(id)a1;
- (void)_sendReplyForMessage:(id)a0 replyType:(unsigned long long)a1 rejectionReason:(const char *)a2;
- (void)_applyCloudChannelConfig:(id)a0 dueToMessage:(id)a1 state:(id)a2 messageType:(unsigned long long)a3;
- (void)_handleCloudChannelConfigSet:(id)a0 state:(id)a1;
- (void)dealloc;
- (void)_handleBroadcastRequestMessaage:(id)a0 state:(id)a1;
- (void)deactivateService;
- (void)_handleConfigStateMessage:(id)a0 state:(id)a1;

@end
