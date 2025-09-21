@class MTRDataTypePowerThresholdStruct, NSString, MTRCommodityTariffClusterAuxiliaryLoadSwitchSettingsStruct, MTRCommodityTariffClusterPeakPeriodStruct, NSNumber, MTRCommodityTariffClusterTariffPriceStruct;

@interface MTRCommodityTariffClusterTariffComponentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *tariffComponentID;
@property (copy, nonatomic) MTRCommodityTariffClusterTariffPriceStruct *price;
@property (copy, nonatomic) NSNumber *friendlyCredit;
@property (copy, nonatomic) MTRCommodityTariffClusterAuxiliaryLoadSwitchSettingsStruct *auxiliaryLoad;
@property (copy, nonatomic) MTRCommodityTariffClusterPeakPeriodStruct *peakPeriod;
@property (copy, nonatomic) MTRDataTypePowerThresholdStruct *powerThreshold;
@property (copy, nonatomic) NSNumber *threshold;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *predicted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
