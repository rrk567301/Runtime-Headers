@class NSArray, HMDAccessoryFirmwareUpdateTimeWindow, NSString;

@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject <HMFFastEncodable>

@property BOOL noUserAtHome;
@property BOOL anyUserAtHome;
@property BOOL checkForScheduledAutomation;
@property (retain) NSArray *characteristicConfigurations;
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
