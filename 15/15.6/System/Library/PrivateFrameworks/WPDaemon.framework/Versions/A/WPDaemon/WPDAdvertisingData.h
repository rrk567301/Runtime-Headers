@class NSMutableData, NSMutableSet, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property char enableEPAForAdvertisement;
@property char isRanging;
@property char assertPower;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEqualToData:(id)a0;
- (void)addAdvertisingRequest:(id)a0;
- (char)isEnableEPAForAdvertisement;
- (char)isValidWithAdditionalRequest:(id)a0;

@end
