@class NSString;

@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportsStatisticOptions:(unsigned long long)a0;
- (id)underlyingSampleType;
- (id)canonicalUnitForStatistics;
- (long long)aggregationStyleForStatistics;
- (void)validateUnitForStatistic:(id)a0;

@end
