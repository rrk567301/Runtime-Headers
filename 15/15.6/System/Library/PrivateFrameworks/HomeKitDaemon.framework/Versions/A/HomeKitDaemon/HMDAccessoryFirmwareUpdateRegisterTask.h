@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    char _userInitiated;
}

- (void)run;
- (id)criteria;
- (char)shouldRun;
- (char)isUserInitiated;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
