@class NSNumber;

@interface CHIPPowerProfileClusterGetPowerProfilePriceResponseParams : NSObject

@property (retain, nonatomic) NSNumber *powerProfileId;
@property (retain, nonatomic) NSNumber *currency;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *priceTrailingDigit;

- (id)init;
- (void).cxx_destruct;

@end
