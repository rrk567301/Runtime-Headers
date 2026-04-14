@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)procedureRecordType;
+ (id)conditionRecordType;
+ (id)coverageRecordType;
+ (id)medicationRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)_requiresAuthorization;
- (BOOL)isClinicalType;
- (BOOL)requiresPerObjectAuthorization;

@end
