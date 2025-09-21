@class NSString;
@protocol HMDAccessoryFirmwareUpdatePolicy;

@interface HMDAccessoryFirmwareUpdateApplyTask : HMDAccessoryFirmwareUpdateTask <HMFLogging> {
    char _userInitiated;
}

@property (readonly, weak) id<HMDAccessoryFirmwareUpdatePolicy> policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)criteria;
- (char)shouldRun;
- (char)isUserInitiated;
- (char)_isApplyAllowedByPolicy;
- (id)initWithSession:(id)a0 profile:(id)a1 policy:(id)a2 userInitiated:(char)a3 delay:(char)a4;

@end
