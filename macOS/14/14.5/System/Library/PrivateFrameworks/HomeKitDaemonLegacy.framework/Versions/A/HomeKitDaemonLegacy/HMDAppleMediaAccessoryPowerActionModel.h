@class NSUUID, NSNumber;

@interface HMDAppleMediaAccessoryPowerActionModel : HMDActionModel

@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSNumber *targetSleepWakeState;

+ (id)properties;

- (void)loadModelWithActionInformation:(id)a0;

@end
