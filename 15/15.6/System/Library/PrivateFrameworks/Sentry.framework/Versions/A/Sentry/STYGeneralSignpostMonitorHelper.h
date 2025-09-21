@class STYAbcHelper, SignpostSupportSubsystemCategoryAllowlist;

@interface STYGeneralSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
}

@property char seedUserMode;
@property char avoidGeneratingTailspinsForAppLaunches;
@property (retain) STYAbcHelper *abcHelper;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)allowList;
- (void)handleInterval:(id)a0;
- (void)handleEmit:(id)a0;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (void)perfProblemDetectedOnMac:(id)a0;
- (BOOL)wantsAnimationFrameRate;

@end
