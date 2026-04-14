@class NSData, NSString, NSArray, HMDDeviceCapabilities, NSUUID, HMDHomeKitVersion, NSSet, HMFProductInfo, Protocol, HMDAccount, HMDDeviceAddress, HMDRPIdentity;
@protocol NSCopying;

@interface HMDDevice : HMFObject <HMFObject, HMCBacked, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding> {
    NSSet *_handles;
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *identities;
@property (copy) HMFProductInfo *productInfo;
@property (weak) HMDAccount *account;
@property (getter=isDirty) BOOL dirty;
@property (getter=isLocallyTracked) BOOL locallyTracked;
@property (getter=isCloudTracked) BOOL cloudTracked;
@property (copy) HMDDeviceCapabilities *capabilities;
@property (readonly, copy) NSData *pushToken;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy) NSUUID *sharedUserIDSIdentifier;
@property (readonly) BOOL supportsHH2;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
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
@property (readonly, copy) NSString *remoteDestinationString;

+ (id)deviceWithDestination:(id)a0;
+ (id)deviceWithHandle:(id)a0;
+ (id)logCategory;

- (id)initWithDeviceAddress:(id)a0;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)handles;
- (void)updateVersion:(id)a0;
- (id)localHandles;
- (id)globalHandles;
- (void)setHandles:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)__handleAccountHandleUpdated:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)initWithService:(id)a0 device:(id)a1;
- (BOOL)addHandle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBackingModel:(id)a0;
- (void)setName:(id)a0;
- (id)modelBackedObjects;
- (void)__updateDeviceWithActions:(id)a0;
- (id)backingModelPrimaryKey;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 name:(id)a2 productInfo:(id)a3 version:(id)a4 capabilities:(id)a5;
- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)isSameAccountWithDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 name:(id)a2 productInfo:(id)a3 version:(id)a4 capabilities:(id)a5 account:(id)a6;
- (void)updateWithDevice:(id)a0;
- (id)init;
- (void)setVersion:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceForIDSService:(id)a0;
- (id)globalDestination;
- (BOOL)isRelatedToDevice:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (BOOL)isBackingStorageEqual:(id)a0;
- (BOOL)updateBackingModel:(id)a0 error:(id *)a1;
- (id)initWithObjectModel:(id)a0;

@end
