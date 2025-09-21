@class NSArray, HMDAccessoryFirmwareUpdateTimeWindow;

@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject

@property char noUserAtHome;
@property char anyUserAtHome;
@property char checkForScheduledAutomation;
@property (retain) NSArray *characteristicConfigurations;
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

- (id)init;
- (void).cxx_destruct;

@end
