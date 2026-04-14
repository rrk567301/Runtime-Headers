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

- (BOOL)isValidWithAdditionalRequest:(id)a0;
- (void)addAdvertisingRequest:(id)a0;
- (BOOL)isEnableEPAForAdvertisement;
- (id)description;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
