@class NSNumber, NSString;

@interface MIBUDeviceBase : NSObject

@property (readonly, nonatomic) NSNumber *protocolVersion;
@property (readonly, nonatomic) BOOL protocolSupported;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;

- (void).cxx_destruct;

@end
