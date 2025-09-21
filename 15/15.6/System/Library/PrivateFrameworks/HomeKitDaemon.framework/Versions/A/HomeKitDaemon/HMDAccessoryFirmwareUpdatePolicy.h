@class HMDHAPAccessory, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdatePolicy : NSObject <HMDAccessoryFirmwareUpdatePolicy>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) char status;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (char)evaluate;
- (void)configure;
- (id)logIdentifier;
- (void)notify:(char)a0;
- (void)evaluateAndNotify;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;

@end
