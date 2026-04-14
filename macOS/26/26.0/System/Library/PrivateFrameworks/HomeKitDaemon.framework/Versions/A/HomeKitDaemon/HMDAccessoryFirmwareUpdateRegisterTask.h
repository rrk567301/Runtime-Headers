@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (id)criteria;
- (BOOL)isUserInitiated;
- (void)run;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
