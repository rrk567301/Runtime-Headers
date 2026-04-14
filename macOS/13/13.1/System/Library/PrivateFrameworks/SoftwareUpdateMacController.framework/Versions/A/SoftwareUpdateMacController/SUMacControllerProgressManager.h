@class NSString, SUMacControllerDescriptor;

@interface SUMacControllerProgressManager : NSObject

@property (retain, nonatomic) NSString *command;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) SUMacControllerDescriptor *descriptor;
@property (nonatomic) BOOL performingBridgeOSUpdate;
@property (nonatomic) BOOL performingSFRUpdate;
@property (nonatomic) BOOL performingRecoveryOSUpdate;
@property (nonatomic) float lastReportedProgress;
@property (nonatomic) double lastReportedTimeRemaining;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 clientID:(id)a1 descriptor:(id)a2;
- (id)initWithCommand:(id)a0 clientID:(id)a1 descriptor:(id)a2 performingBridgeOSUpdate:(BOOL)a3 performingSFRUpdate:(BOOL)a4 performingRecoveryOSUpdate:(BOOL)a5;
- (id)startProgressAtPhase:(id)a0;
- (id)progressAtPhase:(id)a0 withProgress:(id)a1;
- (id)endProgressAtPhase:(id)a0;
- (id)reportProgressForPhase:(id)a0 portionComplete:(float)a1 desc:(id)a2;
- (id)reportProgressForPhase:(id)a0 portionComplete:(float)a1 fromProgress:(id)a2 desc:(id)a3;
- (float)adjustReportedPortionComplete:(float)a0 forPhase:(id)a1;
- (double)adjustReportedTimeRemaining:(double)a0 forPhase:(id)a1 portionComplete:(float)a2;
- (long long)adjustTotalWrittenBytes:(long long)a0 forPhase:(id)a1;
- (long long)adjustTotalExpectedBytes:(long long)a0 forPhase:(id)a1;
- (BOOL)phaseShowsEstimatedTime:(id)a0;
- (BOOL)phaseShowsExtrapolatedPrepareEstimatedTimeRemaining:(id)a0;
- (double)estimatedTotalPrepareTimeRemainingForPortionComplete:(float)a0;
- (id)progressTable;
- (id)printStringForProgressDictionary:(id)a0;
- (id)wakeupUpdateBrainProgressPercents;
- (id)prerequisiteCheckProgressPercents;
- (id)downloadProgressPercents;
- (id)downloadProgressPercentsWithBridgeOS;
- (id)downloadProgressPercentsWithSFR;
- (id)downloadProgressPercentsWithRecoveryOS;
- (id)downloadProgressPercentsWithSFRAndRecoveryOS;
- (id)downloadSFRProgressPercents;
- (id)downloadAndPrepareProgressPercents;
- (id)downloadAndPrepareProgressPercentsWithBridgeOS;
- (id)downloadAndPrepareProgressPercentsWithSFR;
- (id)downloadAndPrepareProgressPercentsWithRecoveryOS;
- (id)downloadAndPrepareProgressPercentsWithSFRAndRecoveryOS;
- (id)prepareUpdateProgressPercents;
- (id)preparePackageProgressPercents;
- (id)preparePackageProgressPercentsWithRecoveryOS;
- (id)commitStashProgressPercents;
- (id)applyUpdateProgressPercents;
- (id)cancelCurrentUpdateProgressPercents;

@end
