@interface TapToRadarUtilities : NSObject

+ (void *)_frameworkHandle;
+ (void)_openTapToRadarWithTitle:(id)a0 displayReason:(id)a1 completion:(id /* block */)a2;
+ (BOOL)_tapToRadarAuthorized;
+ (void)captureScreenshotWithCompletion:(id /* block */)a0;
+ (void)captureUserDefaultsWithCompletion:(id /* block */)a0;
+ (void)captureViewHierarchyWithCompletion:(id /* block */)a0;
+ (BOOL)isTapToRadarEnabled;
+ (BOOL)okToPromptForTapToRadar;
+ (void)openTapToRadarForDownloadIssue19159AfterPrompting;
+ (void)openTapToRadarWithCompletion:(id /* block */)a0;

@end
