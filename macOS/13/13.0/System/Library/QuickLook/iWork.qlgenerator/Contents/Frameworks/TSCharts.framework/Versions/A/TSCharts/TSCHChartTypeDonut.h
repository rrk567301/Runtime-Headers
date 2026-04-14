@interface TSCHChartTypeDonut : TSCHChartTypePieFamily

- (id)name;
- (id)init;
- (id)userInterfaceName;
- (id)defaultSeriesType:(unsigned long long)a0;
- (Class)chartLayoutItemClass;
- (double)defaultLabelExplosionValue;
- (id)localizedDeliveryTypeForWedge;
- (id)unlocalizedDeliveryTypeForWedge;
- (id)localizedTitleForDeliveryTypeWedge;
- (id)localizedWedgeDragLabelWithPercent:(unsigned long long)a0;
- (id)localizedActionStringForWedgeExplosion;
- (long long)userInterfaceTag;
- (id)alternateArchiveChartTypeAndReturnWriterVersion:(unsigned long long *)a0 readerVersion:(unsigned long long *)a1 featureID:(id *)a2;

@end
