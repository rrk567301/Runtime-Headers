@class STYAbcHelper, SignpostSupportSubsystemCategoryAllowlist;

@interface STYGeneralSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
}

@property BOOL seedUserMode;
@property BOOL avoidGeneratingTailspinsForAppLaunches;
@property (retain) STYAbcHelper *abcHelper;

- (id)name;
- (void).cxx_destruct;
- (id)allowList;
- (id)init;
- (void)handleInterval:(id)a0;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (void)perfProblemDetectedOnMac:(id)a0;
- (BOOL)wantsAnimationFrameRate;

@end
