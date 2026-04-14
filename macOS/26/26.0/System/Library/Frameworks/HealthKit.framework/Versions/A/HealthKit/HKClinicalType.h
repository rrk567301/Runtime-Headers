@interface HKClinicalType : HKSampleType

+ (id)conditionRecordType;
+ (id)coverageRecordType;
+ (id)allergyRecordType;
+ (id)procedureRecordType;
+ (id)allTypes;
+ (id)medicationRecordType;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
