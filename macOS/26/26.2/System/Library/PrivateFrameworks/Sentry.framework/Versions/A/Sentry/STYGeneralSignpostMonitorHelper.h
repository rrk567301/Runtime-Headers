@class STYAbcHelper, SignpostSupportSubsystemCategoryAllowlist;

@interface STYGeneralSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
}

@property BOOL seedUserMode;
@property BOOL avoidGeneratingTailspinsForAppLaunches;
@property (retain) STYAbcHelper *abcHelper;

- (id)allowList;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (void)handleInterval:(id)a0;
- (void)handleEmit:(id)a0;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (void)perfProblemDetectedOnMac:(id)a0;
- (BOOL)wantsAnimationFrameRate;

@end
