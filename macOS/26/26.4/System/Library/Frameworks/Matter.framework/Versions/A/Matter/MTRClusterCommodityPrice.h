@interface MTRClusterCommodityPrice : MTRGenericCluster

- (void)getDetailedForecastRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)getDetailedPriceRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrencyWithParams:(id)a0;
- (id)readAttributeCurrentPriceWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributePriceForecastWithParams:(id)a0;
- (id)readAttributeTariffUnitWithParams:(id)a0;

@end
