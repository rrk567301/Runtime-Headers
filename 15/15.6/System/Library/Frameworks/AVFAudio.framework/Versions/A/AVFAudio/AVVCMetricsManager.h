@class CAReporter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface AVVCMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    CAReporter *mMetricsReporter;
    long long mAudioIssueDetector;
    unsigned long long mAudioDataAnalysisSiriSession;
    NSObject<OS_os_transaction> *mADAMTransaction;
    char mProfileAVVC;
}

@property (retain) NSMutableDictionary *publicMetrics;
@property (retain) NSMutableDictionary *avvcProfilingInfoDictionary;
@property (nonatomic) unsigned long long voiceTriggerStartHostTime;
@property (nonatomic) unsigned long long callToStartRecordHostTime;

+ (id)sharedManager;
+ (void *)getLock;
+ (void)createSharedManager;
+ (void)destroySharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)reporterID;
- (void)updateWithReporterID:(long long)a0;
- (id)retrieveMetrics;
- (int)_disposeADAM;
- (int)adamAnalyzeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })a0 numFrames:(unsigned int)a1 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 shouldAnalyze:(BOOL)a3;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; })a0 numFrames:(unsigned int)a1 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 shouldAnalyze:(BOOL)a3;
- (void)checkAndUpdateReporterID:(long long)a0;
- (int)disposeADAM;
- (id)getStringDate:(id)a0;
- (void)logABCMetric:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporterID:(long long)a3;
- (void)logProfileMetrics:(id)a0;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 reporterID:(long long)a1;
- (void)logRecordRoute:(id)a0 andPlaybackRoute:(id)a1 reporterID:(long long)a2;
- (void)logSessionMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 context:(id)a4 reporterID:(long long)a5;
- (void)logSessionMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 reporterID:(long long)a4;
- (void)logSingleMetric:(id)a0 value:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3 reporterID:(long long)a4;
- (char)measureElapseTimeForMetric:(id)a0 block:(id /* block */)a1;
- (int)resetAudioIssueDetector;
- (void)resetProfileMetrics;
- (id)retrieveProfileMetrics;
- (int)setADAMFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 numFrames:(unsigned int)a1;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 numFrames:(unsigned int)a1;

@end
