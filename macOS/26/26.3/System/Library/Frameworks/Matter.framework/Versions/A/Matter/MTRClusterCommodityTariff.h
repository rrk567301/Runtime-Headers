@interface MTRClusterCommodityTariff : MTRGenericCluster

- (id)readAttributeNextDayWithParams:(id)a0;
- (void)getDayEntryWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)getTariffComponentWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeCalendarPeriodsWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentDayEntryDateWithParams:(id)a0;
- (id)readAttributeCurrentDayEntryWithParams:(id)a0;
- (id)readAttributeCurrentDayWithParams:(id)a0;
- (id)readAttributeCurrentTariffComponentsWithParams:(id)a0;
- (id)readAttributeDayEntriesWithParams:(id)a0;
- (id)readAttributeDayPatternsWithParams:(id)a0;
- (id)readAttributeDefaultRandomizationOffsetWithParams:(id)a0;
- (id)readAttributeDefaultRandomizationTypeWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeIndividualDaysWithParams:(id)a0;
- (id)readAttributeNextDayEntryDateWithParams:(id)a0;
- (id)readAttributeNextDayEntryWithParams:(id)a0;
- (id)readAttributeNextTariffComponentsWithParams:(id)a0;
- (id)readAttributeStartDateWithParams:(id)a0;
- (id)readAttributeTariffComponentsWithParams:(id)a0;
- (id)readAttributeTariffInfoWithParams:(id)a0;
- (id)readAttributeTariffPeriodsWithParams:(id)a0;
- (id)readAttributeTariffUnitWithParams:(id)a0;

@end
