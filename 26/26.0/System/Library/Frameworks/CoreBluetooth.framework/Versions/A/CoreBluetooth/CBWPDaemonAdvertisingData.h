@class NSArray, NSDictionary, NSData, NSNumber;

@interface CBWPDaemonAdvertisingData : NSObject <NSCopying>

@property (nonatomic) unsigned char advInstanceType;
@property (nonatomic) unsigned short advInterval;
@property (copy, nonatomic) NSDictionary *advDataPerType;
@property (nonatomic) BOOL enableAdvertisingWithPowerAssertion;
@property (nonatomic) BOOL enableEPAForAdvertisement;
@property (nonatomic) BOOL enableObjectLocatorResponseOnAdvertisingInstance;
@property (copy, nonatomic) NSArray *listOfClients;
@property (copy, nonatomic) NSData *mfgData;
@property (nonatomic) BOOL stopOnAdvertisingAddressChange;
@property (copy, nonatomic) NSNumber *wiProxUpdateTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
