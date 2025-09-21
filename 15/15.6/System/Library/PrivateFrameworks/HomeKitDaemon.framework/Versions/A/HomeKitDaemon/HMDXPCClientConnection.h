@class HMDProcessInfo, NSString, NSDictionary, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSObject;
@protocol OS_dispatch_queue, HMDXPCConnection, HMDXPCClientConnectionDelegate;

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMDXPCMessageCountTracker *messageCountTracker;
@property (readonly) HMDXPCRequestTracker *requestTracker;
@property (copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *clientName;
@property (copy) NSString *logIdentifier;
@property unsigned long long state;
@property (copy, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters;
@property char hasExternallyManagedActivation;
@property (weak) id<HMDXPCClientConnectionDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class principalClass;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) id<HMDXPCConnection> xpcConnection;
@property (retain) HMDProcessInfo *processInfo;
@property (readonly, nonatomic, getter=isActivated) char activated;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) char authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) char authorizedForMicrophoneAccess;
@property (readonly) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) char entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) char entitledForSPIAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) char authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) char entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) char entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) char entitledForCameraClipsAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) char entitledForMultiUserSetupAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) char entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) char entitledToProvideAccessorySetupPayload;
@property (readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) char entitledToProvideMatterSetupPayload;
@property (readonly, nonatomic, getter=isEntitledForPersonManagerAccess) char entitledForPersonManagerAccess;
@property (readonly, nonatomic, getter=isEntitledForWalletKeyAccess) char entitledForWalletKeyAccess;
@property (readonly, nonatomic, getter=isEntitledForSecureAccess) char entitledForSecureAccess;
@property (readonly, nonatomic, getter=isEntitledForStateDump) char entitledForStateDump;
@property (readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) char entitledForAssistantIdentifiers;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) char entitledForHomeLocationFeedbackAccess;
@property (readonly, getter=isPlatformBinary) char platformBinary;
@property (readonly) unsigned long long inactiveUpdatingLevel;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, nonatomic) unsigned long long homeManagerOptions;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)a0;

- (void)dealloc;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)shortDescription;
- (id)_displayName;
- (void)_invalidate;
- (void)deactivate;
- (void)handleMessage:(id)a0;
- (void)_start;
- (void)_deactivate;
- (char)sendMessage:(id)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (id)attributeDescriptions;
- (void)updateUserInfo:(id)a0;
- (id)clientUUID;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (char)canSendMessage:(id)a0;
- (void)_handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)initiateRefresh;
- (void)handleProcessStateDidChange;
- (id)initWithConnection:(id)a0 queue:(id)a1 messageCountTracker:(id)a2 requestTracker:(id)a3;
- (char)isEntitledForModernMessaging;
- (void)notifyOfExternallyManagedActivation;
- (void)updateSendPolicyParameters:(id)a0;

@end
