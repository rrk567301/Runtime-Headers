@class NSNumber, NSMutableArray, NSObject;

@interface ADJasperPearlInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData {
    struct vector<ADJasperPearlInFieldCalibrationDiagnosticPipelineEntry, std::allocator<ADJasperPearlInFieldCalibrationDiagnosticPipelineEntry>> { struct ADJasperPearlInFieldCalibrationDiagnosticPipelineEntry *__begin_; struct ADJasperPearlInFieldCalibrationDiagnosticPipelineEntry *__end_; struct ADJasperPearlInFieldCalibrationDiagnosticPipelineEntry *__cap_; } _diagnosticPipelineLog;
    unsigned long long _diagnosticPipelineLogIndex;
}

@property (retain, nonatomic) NSMutableArray *rotArray;
@property (retain, nonatomic) NSMutableArray *transArray;
@property (nonatomic) float lastPearlTemp;
@property (retain, nonatomic) NSObject *aggPointsWrapperObj;
@property (nonatomic) unsigned long long numOfIFAFramesCurrentExecution;
@property (nonatomic) double firstIFAFrameTimestampCurrentExecution;
@property (nonatomic) double lastIFAFrameTimestampCurrentExecution;
@property (retain, nonatomic) NSNumber *minIRCamTemperatureCurrentExecution;
@property (retain, nonatomic) NSNumber *maxIRCamTemperatureCurrentExecution;
@property (retain, nonatomic) NSNumber *irCamFOVCoveragePercent;
@property (retain, nonatomic) NSNumber *numOfUniqueTOFSpots;
@property (nonatomic) BOOL firstTimeEventFired;
@property (nonatomic) double lastAlgoRadarTriggerTimestamp;

- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)reset;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)persistenceData;
- (void)initIsf;
- (void)resetIFAObjects;
- (id)buildISFInputDictWithEFL:(float)a0 principalPointtX:(id)a1 principalPointtY:(id)a2 rotationMat:(double[3][3])a3;
- (void)initDiagnosticPipelineLog;
- (id)initWithPCECalibData:(id)a0;
- (BOOL)insertEntryToDiagnosticPipelineLog:(id)a0;
- (long long)processJpcResult:(id)a0;

@end
