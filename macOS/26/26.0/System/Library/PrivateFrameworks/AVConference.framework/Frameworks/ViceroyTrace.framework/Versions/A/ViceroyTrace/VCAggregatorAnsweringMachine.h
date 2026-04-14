@class VCReportingHistogram;

@interface VCAggregatorAnsweringMachine : VCAggregatorRecordingAndTranscriptionService {
    unsigned char _answeringMachineSource;
    unsigned char _answeringMachineCapabilities;
    double _answeringMachineAssetDelayTime;
    double _answeringMachineCreatedTime;
    double _answeringMachineRecordingCleanupStartTime;
    VCReportingHistogram *_answeringMachineUsageHistogram;
    double _answeringMachineEnteredScreeningTime;
    double _answeringMachineAudioBringUpTime;
    double _answeringMachineRecordingFinalizationTime;
    double _answeringMachineTotalScreeningTime;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)aggregatedCallReports;
- (id)answeringMachineAggregatedReport;
- (id)dispatchedAggregatedCallReport;
- (void)dispatchedProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)processAnsweringMachineAssetStartWithCurrentTime:(double)a0;
- (void)processAnsweringMachineDidStopWithCurrentTime:(double)a0;
- (void)processAnsweringMachineInitWithPayload:(id)a0 currentTime:(double)a1;
- (void)processAnsweringMachineRecordingStartWithCurrentTime:(double)a0;
- (void)processAnsweringMachineRecordingStopWithCurrentTime:(double)a0;
- (void)processAnsweringMachineStartWithCurrentTime:(double)a0;
- (void)processEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;

@end
