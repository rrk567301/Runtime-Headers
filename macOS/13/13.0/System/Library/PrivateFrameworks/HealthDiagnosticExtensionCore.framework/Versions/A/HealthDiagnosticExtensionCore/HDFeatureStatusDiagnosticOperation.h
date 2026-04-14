@interface HDFeatureStatusDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (void)_reportRequirementSatisfactionOverridesByFeature;
- (void)_reportFeatureStatusByFeature;
- (void)_reportFeatureStatusForFeature:(id)a0 healthStore:(id)a1;
- (void)_reportRegionAvailabilityByFeature;
- (void)_reportRegionAvailabilityForFeature:(id)a0 healthStore:(id)a1;

@end
