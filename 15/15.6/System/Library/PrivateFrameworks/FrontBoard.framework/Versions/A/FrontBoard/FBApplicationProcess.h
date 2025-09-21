@class FBProcessCPUStatistics;

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
}

@property (nonatomic, getter=isRecordingAudio) char recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) char nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) char connectedToExternalAccessory;
@property (readonly, nonatomic) double elapsedCPUTime;

+ (id)_internalDebugEnvironmentVariables;

- (void).cxx_destruct;
- (void)_bootstrapDidComplete;
- (id)_createBootstrapContext;
- (void)_finishInit;
- (char)isApplicationProcess;
- (void)killForReason:(long long)a0 andReport:(char)a1 withDescription:(id)a2;
- (void)killForReason:(long long)a0 andReport:(char)a1 withDescription:(id)a2 completion:(id /* block */)a3;

@end
