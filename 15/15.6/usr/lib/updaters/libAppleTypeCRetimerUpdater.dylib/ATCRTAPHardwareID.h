@class NSDictionary;

@interface ATCRTAPHardwareID : NSObject

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int chipID;
@property (readonly) char productionStatus;
@property (readonly) char securityMode;
@property (readonly) unsigned int securityDomain;
@property (readonly) NSDictionary *personalizationParameters;

+ (id)query;

- (id)description;
- (char)queryHardwareParameters;

@end
