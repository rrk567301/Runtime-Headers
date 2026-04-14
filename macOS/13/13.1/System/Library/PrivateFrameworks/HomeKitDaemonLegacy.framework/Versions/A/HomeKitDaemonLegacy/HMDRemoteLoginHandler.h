@class NSUUID, ACAccount, NSString, NSSet, HMFMessageDispatcher, HMDRemoteLoginReceiver, NSObject, HMFStagedValue, HMDAppleMediaAccessory, HMDRemoteLoginInitiator, HMDRemoteLoginAnisetteDataHandler;
@protocol OS_dispatch_queue, HMELastEventStoreReadHandle, HMEEventForwarder;

@interface HMDRemoteLoginHandler : HMFObject <HMFStagedValueDelegate, HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (retain) id<HMEEventForwarder> eventForwarder;
@property (readonly) HMFStagedValue *stagedLoggedInAccount;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMDRemoteLoginInitiator *initiator;
@property (readonly, nonatomic) HMDRemoteLoginReceiver *receiver;
@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler;
@property (retain, nonatomic) ACAccount *loggedInAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)remoteMessages;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventSource;
- (id)logIdentifier;
- (void)stagedValue:(id)a0 didExpireValue:(id)a1;
- (void)registerForMessages;
- (void)_handleUpdateLoggedInAccountMessage:(id)a0;
- (void)handleAccountUsernameUpdatedOnCurrentDevice:(id)a0;
- (id)initWithAccessory:(id)a0 loggedInAccountData:(id)a1;
- (id)initWithUUID:(id)a0 accessory:(id)a1 loggedInAccount:(id)a2;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1 eventStoreReadHandle:(id)a2 eventForwarder:(id)a3;
- (void)_handleRemoteLoginAccount:(id)a0 message:(id)a1;
- (void)_sendAccountUpdateNotification:(id)a0;
- (void)stageLoggedInAccount:(id)a0;
- (void)updateFrameworkWithReason:(id)a0;
- (double)eventTimeStamp;
- (BOOL)isAccount:(id)a0 equalTo:(id)a1;
- (void)_postUpdateAccountInfoIfDifferent;
- (void)_postUpdatedAccountInfo:(id)a0;
- (void)_updateLoggedInAccount:(id)a0;
- (void)_registerForUsernameUpdates;

@end
