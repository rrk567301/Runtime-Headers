@class NSString, NSNumber, NSData;

@interface UARPDeviceConfiguration : NSObject

@property (retain) NSString *appleModelNumber;
@property (retain) NSString *assetIdentifier;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *friendlyName;
@property (retain) NSString *hardwareVersion;
@property (retain) NSString *hwFusingType;
@property (retain) NSString *manufacturerName;
@property (retain) NSString *modelName;
@property (retain) NSString *serialNumber;
@property (retain) NSString *stagedFirmwareVersion;
@property (copy) NSNumber *boardID;
@property (copy) NSNumber *chipID;
@property (copy) NSNumber *chipRevision;
@property (copy) NSNumber *ECID;
@property (copy) NSData *ecidData;
@property (copy) NSNumber *ftabGeneration;
@property (copy) NSData *nonce;
@property (copy) NSData *nonceSeed;
@property (copy) NSNumber *productionMode;
@property (copy) NSNumber *realHdcpKeyPresent;
@property (copy) NSNumber *securityDomain;
@property (copy) NSNumber *securityMode;

- (void).cxx_destruct;

@end
