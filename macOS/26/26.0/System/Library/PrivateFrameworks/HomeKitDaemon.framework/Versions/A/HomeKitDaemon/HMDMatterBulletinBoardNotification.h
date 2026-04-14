@class HMFMessageDispatcher, HMDAccessory, NSString, NSUUID, NSObject, NSNumber;
@protocol OS_dispatch_queue, HMDMatterAccessoryProtocol;

@interface HMDMatterBulletinBoardNotification : HMDBulletinBoardNotification <HMFLogging, HMDDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_messageTargetUUID;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDAccessory<HMDMatterAccessoryProtocol> *accessory;
@property (copy, nonatomic) NSNumber *endpointID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (id)home;
- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (void)dealloc;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)a0;
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(BOOL)a0 condition:(id)a1 completion:(id /* block */)a2;
- (void)_updateLocalSettingsWithEnabled:(BOOL)a0 condition:(id)a1 forMessage:(id)a2;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithAccessory:(id)a0 endpointID:(id)a1 enabled:(BOOL)a2 condition:(id)a3;
- (void)registerNotificationHandlers;
- (void)updateRegistrations;

@end
