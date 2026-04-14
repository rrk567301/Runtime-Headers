@class NSString, NSDateComponents;

@interface HMDAccessoryFirmwareUpdateTimeWindow : NSObject <HMFLogging, HMFFastEncodable>

@property (readonly) NSDateComponents *startTimeComponents;
@property (readonly) NSDateComponents *endTimeComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
