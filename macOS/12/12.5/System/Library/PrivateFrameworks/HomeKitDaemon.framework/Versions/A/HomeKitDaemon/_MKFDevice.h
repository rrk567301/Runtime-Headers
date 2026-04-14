@class HMFProductInfo, Protocol, _MKFAppleMediaAccessory, NSDate, MKFDeviceDatabaseID, _MKFAccount, _MKFDeviceCapabilities, NSString, NSSet, _MKFResident, HMDRPIdentity, _MKFHomeNetworkRouterManagingDeviceSetting, NSArray, _MKFHome, HMDHomeKitVersion, NSUUID;
@protocol MKFAppleMediaAccessory, MKFHome, MKFHomeNetworkRouterManagingDeviceSetting, MKFResident, MKFAccount, MKFDeviceCapabilities;

@interface _MKFDevice : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (retain, nonatomic) _MKFAppleMediaAccessory *accessoryAppleMedia;
@property (retain, nonatomic) _MKFAccount *account;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (retain, nonatomic) _MKFDeviceCapabilities *capabilities;
@property (retain, nonatomic) _MKFHome *primaryResidentOf;
@property (retain, nonatomic) _MKFResident *resident;
@property (retain, nonatomic) _MKFHomeNetworkRouterManagingDeviceSetting *settingRouterManager;
@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (readonly, retain, nonatomic) id<MKFAppleMediaAccessory> accessoryAppleMedia;
@property (readonly, retain, nonatomic) id<MKFAccount> account;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (retain, nonatomic) id<MKFDeviceCapabilities> capabilities;
@property (retain, nonatomic) id<MKFHome> primaryResidentOf;
@property (retain, nonatomic) id<MKFResident> resident;
@property (retain, nonatomic) id<MKFHomeNetworkRouterManagingDeviceSetting> settingRouterManager;
@property (readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfDevice;
- (id)materializeOrCreateCapabilitiesRelation:(BOOL *)a0;
- (id)characteristicBulletinRegistrationFrom:(id)a0 accessory:(id)a1 context:(id)a2;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)a0;

@end
