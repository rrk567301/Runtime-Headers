@class NSString, NSUUID, HMResidentCapabilities, NSObject, HMAccessoryCapabilities;
@protocol OS_dispatch_queue, HMDCapabilitiesControllerDataSource;

@interface HMDCapabilitiesController : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDCapabilitiesControllerDataSource> _dataSource;
}

@property (retain) HMAccessoryCapabilities *currentAccessoryCapabilitiesInternal;
@property (retain) HMResidentCapabilities *currentResidentCapabilitiesInternal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didRemoveCurrentAccessory:(id)a0;
- (id)currentAccessoryCapabilities;
- (id)encodedCurrentAccessoryCapabilities;
- (id)encodedCurrentResidentCapabilities;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (BOOL)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)a0;
- (BOOL)areCurrentResidentCapabilitiesPresentAndDifferent:(id)a0;
- (void)didFinishConfiguringHomes;
- (id)currentResidentCapabilities;
- (void)currentAccessoryDidBecomeAvailable;
- (void)updateCurrentAccessoryCapabilities;
- (id)logIdentifier;
- (void).cxx_destruct;

@end
