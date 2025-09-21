@class NSUUID, HMDService, NSString, NSPredicate, HMFMessageDispatcher, NSObject, HMDBulletinBoardNotificationServiceGroup, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) HMDHome *home;
@property (weak, nonatomic) HMDService *service;
@property (nonatomic, getter=isEnabled) char enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (char)supportsBulletinNotificationGroup:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithService:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)dumpState;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)a0;
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(char)a0 condition:(id)a1 completion:(id /* block */)a2;
- (void)_updateLocalSettingsWithEnabled:(char)a0 condition:(id)a1 forMessage:(id)a2;
- (void)configureBulletinNotification;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithService:(id)a0 enabled:(char)a1 condition:(id)a2;
- (void)registerNotificationHandlers;
- (void)updateRegistrations;

@end
