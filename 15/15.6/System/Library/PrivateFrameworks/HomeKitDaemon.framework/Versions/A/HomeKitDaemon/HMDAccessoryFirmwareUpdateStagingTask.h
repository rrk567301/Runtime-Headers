@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    char _userInitiated;
}

- (void)run;
- (id)criteria;
- (char)shouldRun;
- (char)isUserInitiated;
- (id)initWithSession:(id)a0 profile:(id)a1 userInitiated:(char)a2 delay:(char)a3;

@end
