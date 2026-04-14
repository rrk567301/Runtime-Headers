@class NSString, MTRDataTypeCurrencyStruct, NSNumber;

@interface MTRCommodityTariffClusterTariffInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tariffLabel;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) MTRDataTypeCurrencyStruct *currency;
@property (copy, nonatomic) NSNumber *blockMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
