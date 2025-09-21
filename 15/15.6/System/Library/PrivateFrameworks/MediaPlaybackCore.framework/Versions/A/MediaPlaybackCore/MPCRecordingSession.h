@class MPCSamplesRecorder, NSString, MPCFirstFailureDetector, MPCStatisticsReporter, ICEnvironmentMonitor;

@interface MPCRecordingSession : NSObject <MPCSamplesRecorderDelegate, ICEnvironmentMonitorObserver> {
    char _shouldRecordSamples;
    int _currentThermalLevel;
}

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) MPCFirstFailureDetector *firstFailureDetector;
@property (readonly, nonatomic) MPCStatisticsReporter *statisticsReporter;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) ICEnvironmentMonitor *thermalMonitor;
@property (readonly, nonatomic) MPCSamplesRecorder *currentRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)save;
- (void)flush;
- (void)environmentMonitorDidChangeThermalLevel:(id)a0;
- (id)initWithModelID:(id)a0 samplingTime:(double)a1 renderingLimit:(double)a2 shouldRecordSamples:(char)a3;
- (void)recordSample:(id)a0;
- (void)samplesRecorderHasNewSamples:(id)a0;

@end
