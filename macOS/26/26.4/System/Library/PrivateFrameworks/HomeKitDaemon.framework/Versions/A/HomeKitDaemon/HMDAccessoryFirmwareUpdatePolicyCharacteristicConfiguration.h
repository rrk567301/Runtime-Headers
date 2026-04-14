@class NSString, NSArray, NSNumber;

@interface HMDAccessoryFirmwareUpdatePolicyCharacteristicConfiguration : NSObject <HMFFastEncodable>

@property (readonly) NSString *type;
@property (readonly) NSString *format;
@property (readonly) NSArray *values;
@property (readonly) NSNumber *settlingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
