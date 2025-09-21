@class NSData, NSString, NSArray, HMDDeviceCapabilities, NSUUID, HMDHomeKitVersion, NSSet, HMFProductInfo, Protocol, HMDAccount, HMDDeviceAddress, HMDRPIdentity;
@protocol NSCopying;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMCBacked, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSSet *_handles;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSArray *identities;
@property (copy) HMFProductInfo *productInfo;
@property (weak) HMDAccount *account;
@property (getter=isDirty) char dirty;
@property (getter=isLocallyTracked) char locallyTracked;
@property (getter=isCloudTracked) char cloudTracked;
@property (copy) HMDDeviceCapabilities *capabilities;
@property (readonly, copy) NSData *pushToken;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy) NSUUID *sharedUserIDSIdentifier;
@property (readonly) char supportsHH2;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isCurrentDevice) char currentDevice;
@property (readonly, copy) NSString *name;
@property (readonly, copy) HMDHomeKitVersion *version;
@property (copy) HMDRPIdentity *rpIdentity;
@property (readonly) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Protocol *backingModelType;
@property (readonly) id<NSCopying> backingModelKey;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;

+ (id)logCategory;
+ (id)deviceWithDestination:(id)a0;
+ (id)deviceWithHandle:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)setVersion:(id)a0;
- (id)handles;
- (void)setHandles:(id)a0;
- (void)updateVersion:(id)a0;
- (id)logIdentifier;
- (id)initWithService:(id)a0 device:(id)a1;
- (char)mergeObject:(id)a0;
- (void)__handleAccountHandleUpdated:(id)a0;
- (void)__updateDeviceWithActions:(id)a0;
- (char)addHandle:(id)a0;
- (id)backingModelPrimaryKey;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)deviceForIDSService:(id)a0;
- (id)globalDestination;
- (id)globalHandles;
- (id)initWithBackingModel:(id)a0;
- (id)initWithDeviceAddress:(id)a0;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 name:(id)a2 productInfo:(id)a3 version:(id)a4 capabilities:(id)a5;
- (id)initWithObjectModel:(id)a0;
- (char)isBackingStorageEqual:(id)a0;
- (char)isRelatedToDevice:(id)a0;
- (char)isSameAccountWithDevice:(id)a0;
- (id)localHandles;
- (id)modelBackedObjects;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)remoteDestinationString;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (char)updateBackingModel:(id)a0 error:(id *)a1;
- (void)updateWithDevice:(id)a0;

@end
