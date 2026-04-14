@class PLSemaphore, NSMutableDictionary, NSDictionary, NSArray, PLNSNotificationOperatorComposition, NSObject, PLTimer;
@protocol OS_xpc_object;

@interface PLXPCService : PLService

@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain) NSMutableDictionary *registeredListeners;
@property (retain) NSMutableDictionary *registeredResponders;
@property (retain) NSDictionary *permissionCache;
@property (retain) PLNSNotificationOperatorComposition *registrationNotification;
@property (retain) NSArray *clientIDs;
@property (retain) NSDictionary *clientNames;
@property (retain) PLTimer *resetPermissionsForClientsTimer;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLSemaphore *satelliteProcessSemaphore;
@property unsigned int responderWaitTime;

+ (void)load;
+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionClientLogging;
+ (id)entryEventPointDefinitionClientLoggingDrops;
+ (id)entryEventIntervalDefinitionResponderEvent;
+ (id)entryAggregateDefinitionXPCEvent;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)dailyTasks;
- (void)handlePeer:(id)a0 forEvent:(id)a1;
- (void)stopPowerlogHelperd:(id)a0;
- (void)initSatelliteProcessSemaphore;
- (void)resetPermissionsForClients;
- (void)handleSingleMessage:(id)a0 fromPeer:(id)a1 forEvent:(id)a2;
- (void)setSatelliteProcessExitWithTime:(double)a0;
- (void)handlePeerShouldLogEvent:(id)a0 withMessage:(id)a1 withClientID:(short)a2 withProcessName:(id)a3 withKey:(id)a4;
- (void)handlePeerResponderEvent:(id)a0 withMessage:(id)a1 withClientID:(short)a2 withProcessName:(id)a3 withKey:(id)a4 withPayload:(id)a5;
- (void)handlePeerListenerEvent:(id)a0 withMessage:(id)a1 withClientID:(short)a2 withProcessName:(id)a3 withKey:(id)a4 withPayload:(id)a5;
- (short)permissionForClientID:(short)a0 withKey:(id)a1 withType:(id)a2 withProcessName:(id)a3;
- (void)respondToEvent:(id)a0 withResponse:(id)a1;
- (id)registeredOperatorFromDictionary:(id)a0 forMessage:(id)a1;
- (void)logMessage:(id)a0 withPayload:(id)a1;
- (void)setSatelliteProcessExit;

@end
