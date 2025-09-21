@interface HKSampleType : HKObjectType

@property (readonly, nonatomic) char isMaximumDurationRestricted;
@property (readonly, nonatomic) double maximumAllowedDuration;
@property (readonly, nonatomic) char isMinimumDurationRestricted;
@property (readonly, nonatomic) double minimumAllowedDuration;
@property (readonly, nonatomic) char allowsRecalibrationForEstimates;

+ (id)_sampleTypeWithCode:(long long)a0;
+ (id)medicalRecordTypes;
+ (id)medicalRecordTypesWithOptions:(unsigned long long)a0;

- (char)supportsAttachments;
- (char)canAttachFileOfType:(id)a0 size:(unsigned long long)a1 error:(id *)a2;
- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)a0;
- (id)_rollingBaselineConfiguration;
- (char)_supportsRelativeDataCalculation;
- (id)_unitForChangeInCanonicalUnit;
- (char)_validateStartDate:(double)a0 endDate:(double)a1 error:(id *)a2;
- (char)hk_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;

@end
