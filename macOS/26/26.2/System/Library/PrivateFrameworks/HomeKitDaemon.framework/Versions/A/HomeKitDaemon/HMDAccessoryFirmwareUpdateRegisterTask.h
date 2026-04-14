@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (id)criteria;
- (void)run;
- (BOOL)isUserInitiated;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
