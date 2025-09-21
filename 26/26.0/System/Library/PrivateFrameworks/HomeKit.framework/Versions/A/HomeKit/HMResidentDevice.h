@class HMDevice, NSUUID, _HMContext, NSString, NSData, NSArray, HMHome;
@protocol HMResidentDeviceDelegate;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (getter=isEnabled) BOOL enabled;
@property unsigned long long status;
@property unsigned long long capabilities;
@property BOOL supportsResidentSelection;
@property BOOL supportsHomeActivityState;
@property (weak) HMHome *home;
@property (copy) NSUUID *IDSIdentifier;
@property (copy) NSString *IDSDestination;
@property (copy) NSString *residentName;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (weak) id<HMResidentDeviceDelegate> delegate;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) HMDevice *device;
@property (readonly, copy) NSData *deviceIRKData;
@property (readonly, copy) NSString *name;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setDeviceIRKData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_unconfigure;
- (void)handleRuntimeStateUpdate:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)updatedEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
