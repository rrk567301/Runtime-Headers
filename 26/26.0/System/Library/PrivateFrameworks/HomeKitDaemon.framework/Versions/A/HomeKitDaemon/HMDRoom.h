@class NSUUID, NSString, NSArray, HMDApplicationData, NSDictionary, HMFMessageDispatcher, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDRoom : HMFObject <_TtPO13HomeKitDaemon13LocalPresence4Room_, HMFLogging, HMDHomeMessageReceiver, HMDDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, HMDApplicationDataContainer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *lpAccessories;
@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)messageBindingForDispatcher:(id)a0 message:(id)a1 receiver:(id)a2;

- (id)backingStoreObjects:(long long)a0;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (id)privateDescription;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)_registerForMessages;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)dealloc;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)messageDestination;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)zones;
- (void)_handleUpdateRoomModel:(id)a0 message:(id)a1;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)_handleRenameRequest:(id)a0;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (void)configure:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2;

@end
