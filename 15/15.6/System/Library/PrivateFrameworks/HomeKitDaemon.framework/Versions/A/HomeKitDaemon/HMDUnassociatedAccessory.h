@class NSUUID, NSString, NSData, HMFMessageDispatcher, HMDAccessoryAdvertisement, NSObject, NSNumber, HMAccessoryCategory;
@protocol OS_dispatch_queue;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (copy, nonatomic) NSString *name;
@property (retain) HMAccessoryCategory *category;
@property (copy, setter=setUUID:) NSUUID *uuid;
@property (readonly) char supportsCHIP;
@property (readonly, getter=isKnownToSystemCommissioner) char knownToSystemCommissioner;
@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSNumber *nodeID;
@property (copy) NSString *serialNumber;
@property (copy) NSUUID *commissioningID;
@property (copy) NSNumber *vendorID;
@property (copy) NSNumber *productID;
@property (copy) NSNumber *matterDeviceTypeID;
@property (readonly) char requiresThreadRouter;
@property (readonly, copy) NSString *identifier;
@property (readonly, getter=isReachable) char reachable;
@property (readonly) long long associationOptions;
@property (readonly) unsigned long long transportTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)otherAccessoryCategory;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)logIdentifier;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (id)messageDestination;
- (id)dumpDescription;
- (void)_handleIdentify:(id)a0;
- (void)_registerForMessages;
- (void)associateWithAccessoryAdvertisement:(id)a0;
- (id)descriptionWithPointer:(char)a0 additionalDescription:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (void)updateCategoryWithCategoryIdentifier:(id)a0;

@end
