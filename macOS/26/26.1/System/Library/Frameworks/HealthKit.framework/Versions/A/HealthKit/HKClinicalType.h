@interface HKClinicalType : HKSampleType

+ (id)allergyRecordType;
+ (id)allTypes;
+ (id)procedureRecordType;
+ (id)conditionRecordType;
+ (id)medicationRecordType;
+ (id)coverageRecordType;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
