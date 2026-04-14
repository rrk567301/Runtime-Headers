@class NSNumber;

@interface CHIPPowerProfileClusterTransferredPhase : NSObject

@property (retain, nonatomic) NSNumber *energyPhaseId;
@property (retain, nonatomic) NSNumber *macroPhaseId;
@property (retain, nonatomic) NSNumber *expectedDuration;
@property (retain, nonatomic) NSNumber *peakPower;
@property (retain, nonatomic) NSNumber *energy;
@property (retain, nonatomic) NSNumber *maxActivationDelay;

- (id)init;
- (void).cxx_destruct;

@end
