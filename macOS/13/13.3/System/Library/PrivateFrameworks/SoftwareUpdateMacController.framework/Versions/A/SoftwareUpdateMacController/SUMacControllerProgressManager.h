@class NSString, SUCoreProgress, SUMacControllerDescriptor;

@interface SUMacControllerProgressManager : NSObject

@property (retain, nonatomic) NSString *command;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) SUMacControllerDescriptor *descriptor;
@property (nonatomic) BOOL performingBridgeOSUpdate;
@property (nonatomic) BOOL performingSFRUpdate;
@property (nonatomic) BOOL performingRecoveryOSUpdate;
@property (nonatomic) float lastReportedProgress;
@property (nonatomic) double lastReportedTimeRemaining;
@property (retain, nonatomic) NSString *lastReportedPhase;
@property (retain, nonatomic) SUCoreProgress *lastReportedProgressObject;

- (id)description;
- (void).cxx_destruct;
- (id)downloadProgressPercentsWithSFR;
- (float)adjustReportedPortionComplete:(float)a0 forPhase:(id)a1;
- (double)adjustReportedTimeRemaining:(double)a0 forPhase:(id)a1 portionComplete:(float)a2;
- (long long)adjustTotalExpectedBytes:(long long)a0 forPhase:(id)a1;
- (long long)adjustTotalWrittenBytes:(long long)a0 forPhase:(id)a1;
- (id)applyUpdateProgressPercents;
- (id)cancelCurrentUpdateProgressPercents;
- (id)commitStashProgressPercents;
- (id)downloadAndPrepareProgressPercents;
- (id)downloadAndPrepareProgressPercentsWithBridgeOS;
- (id)downloadAndPrepareProgressPercentsWithRecoveryOS;
- (id)downloadAndPrepareProgressPercentsWithSFR;
- (id)downloadAndPrepareProgressPercentsWithSFRAndRecoveryOS;
- (id)downloadProgressPercents;
- (id)downloadProgressPercentsWithBridgeOS;
- (id)downloadProgressPercentsWithRecoveryOS;
- (id)downloadProgressPercentsWithSFRAndRecoveryOS;
- (id)downloadSFRProgressPercents;
- (id)endProgressAtPhase:(id)a0;
- (double)estimatedTotalPrepareTimeRemainingForPortionComplete:(float)a0;
- (id)initWithCommand:(id)a0 clientID:(id)a1 descriptor:(id)a2;
- (id)initWithCommand:(id)a0 clientID:(id)a1 descriptor:(id)a2 performingBridgeOSUpdate:(BOOL)a3 performingSFRUpdate:(BOOL)a4 performingRecoveryOSUpdate:(BOOL)a5;
- (id)lastReportedSUCoreProgress;
- (BOOL)phaseShowsEstimatedTime:(id)a0;
- (BOOL)phaseShowsExtrapolatedPrepareEstimatedTimeRemaining:(id)a0;
- (id)preparePackageProgressPercents;
- (id)preparePackageProgressPercentsWithRecoveryOS;
- (id)prepareUpdateProgressPercents;
- (id)prerequisiteCheckProgressPercents;
- (id)printStringForProgressDictionary:(id)a0;
- (id)progressAtPhase:(id)a0 withProgress:(id)a1;
- (id)progressTable;
- (id)reportProgressForPhase:(id)a0 portionComplete:(float)a1 desc:(id)a2;
- (id)reportProgressForPhase:(id)a0 portionComplete:(float)a1 fromProgress:(id)a2 desc:(id)a3;
- (id)startProgressAtPhase:(id)a0;
- (id)wakeupUpdateBrainProgressPercents;

@end
