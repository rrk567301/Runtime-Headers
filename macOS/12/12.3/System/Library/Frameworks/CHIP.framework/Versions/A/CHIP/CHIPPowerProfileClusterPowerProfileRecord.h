@class NSNumber;

@interface CHIPPowerProfileClusterPowerProfileRecord : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId;
@property (retain, nonatomic) NSNumber *energyPhaseId;
@property (retain, nonatomic) NSNumber *powerProfileRemoteControl;
@property (retain, nonatomic) NSNumber *powerProfileState;

- (id)init;
- (void).cxx_destruct;

@end
