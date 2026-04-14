@class NSNumber, NSArray;

@interface CHIPPowerProfileClusterEnergyPhasesScheduleStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId;
@property (retain, nonatomic) NSNumber *numOfScheduledPhases;
@property (retain, nonatomic) NSArray *scheduledPhases;

- (id)init;
- (void).cxx_destruct;

@end
