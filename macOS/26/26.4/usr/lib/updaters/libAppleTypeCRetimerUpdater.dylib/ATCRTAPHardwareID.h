@class NSDictionary;

@interface ATCRTAPHardwareID : NSObject

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int chipID;
@property (readonly) BOOL productionStatus;
@property (readonly) BOOL securityMode;
@property (readonly) unsigned int securityDomain;
@property (readonly) unsigned int flavorField;
@property (readonly) NSDictionary *personalizationParameters;

+ (id)query;

- (id)description;
- (BOOL)queryHardwareParameters;
- (id)stripHWModelSuffix:(id)a0;

@end
