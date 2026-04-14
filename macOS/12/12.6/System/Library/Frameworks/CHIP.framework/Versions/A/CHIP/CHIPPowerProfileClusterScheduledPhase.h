@class NSNumber;

@interface CHIPPowerProfileClusterScheduledPhase : NSObject

@property (retain, nonatomic) NSNumber *energyPhaseId;
@property (retain, nonatomic) NSNumber *scheduledTime;

- (id)init;
- (void).cxx_destruct;

@end
