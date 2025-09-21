@class HMDAccessoryFirmwareUpdateProfile, NSString, HMDAccessoryFirmwareUpdateSession, HMDHAPAccessory, NSObject;
@protocol OS_xpc_object;

@interface HMDAccessoryFirmwareUpdateTask : HMFObject <HMFLogging, HMDAccessoryFirmwareUpdateTask>

@property (readonly, weak) HMDAccessoryFirmwareUpdateSession *session;
@property (readonly, weak) HMDAccessoryFirmwareUpdateProfile *profile;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) long long accessoryActiveTransport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) double initialDelay;
@property (readonly) NSObject<OS_xpc_object> *criteria;
@property (readonly, nonatomic) char shouldRun;
@property (readonly) char shouldRunOnCurrentDevice;
@property (readonly, nonatomic, getter=isUserInitiated) char userInitiated;

+ (id)logCategory;

- (void)run;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
