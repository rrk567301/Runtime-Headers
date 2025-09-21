@class NSDate;

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {
    NSDate *_startTime;
}

@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) char requiresTreatmentInstallation;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setStartTime:(id)a0;
- (id)startTime;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (char)_experimentRecord:(id)a0 hasConflictWithExperimentsInDatabase:(id)a1 conflictEndTime:(id *)a2;
- (id)_nextTasksForRunStatus:(int)a0;
- (char)_writeNamespaceDescriptorsWithPaths:(id)a0 toTreatmentLayer:(unsigned long long)a1 forExperiment:(id)a2 treatmentURLs:(id)a3 context:(id)a4;
- (id)initWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(char)a3;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)runTaskUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (char)updateLoggingWithExperimentRecord:(id)a0 paths:(id)a1 trackingId:(id)a2 newLogTreatmentAddedOut:(id *)a3;

@end
