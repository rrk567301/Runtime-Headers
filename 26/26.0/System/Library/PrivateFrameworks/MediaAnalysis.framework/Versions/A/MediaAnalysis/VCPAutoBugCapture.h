@class NSDate;

@interface VCPAutoBugCapture : NSObject {
    NSDate *SceneProcessingFailureReportTime;
    NSDate *FaceProcessingFailureReportTime;
    NSDate *OCRProcessingFailureReportTime;
    NSDate *VisualSearchProcessingFailureReportTime;
    NSDate *FullProcessingFailureReportTime;
    NSDate *PECProcessingFailureReportTime;
}

+ (BOOL)captureTimeoutCrashWithSubType:(id)a0;
+ (BOOL)captureCrashWithKnownTimeoutRisk:(unsigned long long)a0;
+ (id)sharedCapturer;
+ (id)timeoutSubTypeForKnownTimeoutRisk:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)captureProcessingFailure:(id)a0 taskID:(unsigned long long)a1 asset:(id)a2 previousAttempts:(unsigned long long)a3;
- (id)processingFailureReportTimeForTask:(unsigned long long)a0;
- (void)setLastProcessingFailureReportTime:(id)a0 forTask:(unsigned long long)a1;

@end
