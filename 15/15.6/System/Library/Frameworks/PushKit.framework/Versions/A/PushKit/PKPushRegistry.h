@class NSSet, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, PKPushRegistryDelegate;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (retain, nonatomic) NSMutableDictionary *pushTypeToToken;
@property (retain, nonatomic) NSMutableDictionary *pushTypeToConnection;
@property (nonatomic) int voipToken;
@property (nonatomic) int complicationToken;
@property (nonatomic) int fileProviderToken;
@property (nonatomic) int outstandingVoIPPushes;
@property (nonatomic) double lastReportedCallTime;
@property (weak) id<PKPushRegistryDelegate> delegate;
@property (copy) NSSet *desiredPushTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_assertIfCallKitNotLinked;
+ (id)_pushTypeToMachServiceName;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)remoteUserNotificationPayloadReceived:(id)a0 completionHandler:(id /* block */)a1;
- (id)_createConnectionForPushType:(id)a0;
- (void)_noteIncomingCallReported;
- (void)_registerForPushType:(id)a0;
- (void)_renewConnectionForPushTypeIfRegistered:(id)a0;
- (char)_selfTaskHasEntitlement:(struct __CFString { } *)a0;
- (void)_terminateAppIfThereAreUnhandledVoIPPushes;
- (void)_unregisterForPushType:(id)a0;
- (void)complicationPayloadReceived:(id)a0;
- (void)complicationRegistrationFailed;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)a0;
- (void)fileProviderPayloadReceived:(id)a0;
- (void)fileProviderRegistrationFailed;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)a0;
- (id)pushTokenForType:(id)a0;
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)a0;
- (void)voipPayloadReceived:(id)a0 mustPostCall:(char)a1 withCompletionHandler:(id /* block */)a2;
- (void)voipRegistrationFailed;
- (void)voipRegistrationSucceededWithDeviceToken:(id)a0;

@end
