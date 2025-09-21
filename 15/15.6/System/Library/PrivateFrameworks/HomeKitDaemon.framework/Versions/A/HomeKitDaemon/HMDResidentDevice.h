@class NSUUID, NSString, NSData, HMDDeviceController, HMDDevice, HMDDeviceAddress, HMResidentCapabilities, HMDHome;
@protocol HMResidentCapabilities, HMDResidentDeviceManager;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDDevice *_device;
    HMDDeviceController *_deviceController;
    char _confirmed;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char isDemoDevice;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) NSData *rawCapabilities;
@property (readonly) HMResidentCapabilities *capabilitiesInternal;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isReachable) char reachable;
@property (nonatomic, getter=isReachableByIDS) char reachableByIDS;
@property (nonatomic) long long batteryState;
@property (nonatomic, getter=isLowBattery) char lowBattery;
@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) id<HMDResidentDeviceManager> residentDeviceManager;
@property (readonly, nonatomic) unsigned long long legacyResidentCapabilities;
@property (readonly, nonatomic) char supportsResidentSelection;
@property (readonly, nonatomic) char supportsNativeMatter;
@property (readonly, nonatomic) char supportsNativeMatterPlugin;
@property (readonly, getter=isCurrentDevice) char currentDevice;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isConfirmed) char confirmed;
@property (readonly, nonatomic) char supportsSharedEventTriggerActivation;
@property (readonly, nonatomic) char supportsMediaSystem;
@property (readonly, nonatomic) char supportsMediaActions;
@property (readonly, nonatomic) char supportsShortcutActions;
@property (readonly, nonatomic) char supportsFirmwareUpdate;
@property (readonly, nonatomic) char supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) char supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) id<HMResidentCapabilities> capabilities;
@property (readonly) HMDDeviceAddress *messageAddress;
@property (readonly, nonatomic) unsigned long long productType;
@property (readonly) NSData *deviceIRKData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)batteryStateAsString:(long long)a0;
+ (id)deriveUUIDFromHomeUUID:(id)a0 deviceUUID:(id)a1;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)privateDescription;
- (id)initWithModel:(id)a0;
- (id)deviceController;
- (id)initWithDevice:(id)a0 identifier:(id)a1;
- (id)logIdentifier;
- (id)descriptionWithPointer:(char)a0;
- (id)dumpState;
- (void)__deviceUpdated:(id)a0;
- (void)_handleResidentDeviceUpdateConfirmed:(char)a0;
- (void)_handleResidentDeviceUpdateEnabled:(char)a0;
- (void)_residentDeviceModelUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (char)_updateMessageAddress:(id)a0;
- (char)_updateRawCapabilities:(id)a0;
- (id)appleMediaAccessoryName;
- (void)configureWithHome:(id)a0;
- (void)deviceController:(id)a0 didUpdateDevice:(id)a1;
- (id)initWithDevice:(id)a0 home:(id)a1;
- (id)initWithDevice:(id)a0 home:(id)a1 name:(id)a2 rawCapabilities:(id)a3 messageAddress:(id)a4 deviceIRKData:(id)a5;
- (id)initWithDeviceController:(id)a0 identifier:(id)a1;
- (char)isDeviceEquivalentToDeviceAddress:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (unsigned long long)productTypeForModelIdentifier:(id)a0;
- (id)runtimeState;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateDeviceIRKData:(id)a0;

@end
