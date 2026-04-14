@class NSNumber, NSArray;

@interface CHIPPowerProfileClusterEnergyPhasesScheduleNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId;
@property (retain, nonatomic) NSNumber *numOfScheduledPhases;
@property (retain, nonatomic) NSArray *scheduledPhases;

- (id)init;
- (void).cxx_destruct;

@end
