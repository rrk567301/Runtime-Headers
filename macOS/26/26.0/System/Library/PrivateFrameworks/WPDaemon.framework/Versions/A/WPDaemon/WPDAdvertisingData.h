@class NSMutableDictionary, NSMutableSet, NSMutableData, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property (readonly) NSMutableDictionary *advDataPerType;
@property BOOL enableEPAForAdvertisement;
@property BOOL isRanging;
@property BOOL assertPower;

- (BOOL)isEqualToData:(id)a0;
- (void)addAdvertisingRequest:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isValidWithAdditionalRequest:(id)a0;
- (BOOL)isEnableEPAForAdvertisement;
- (void).cxx_destruct;

@end
