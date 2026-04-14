@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (id)criteria;
- (void)run;
- (BOOL)isUserInitiated;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 userInitiated:(BOOL)a2 delay:(BOOL)a3;

@end
