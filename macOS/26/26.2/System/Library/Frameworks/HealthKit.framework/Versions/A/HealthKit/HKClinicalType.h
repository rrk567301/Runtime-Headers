@interface HKClinicalType : HKSampleType

+ (id)medicationRecordType;
+ (id)allergyRecordType;
+ (id)procedureRecordType;
+ (id)conditionRecordType;
+ (id)coverageRecordType;
+ (id)allTypes;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
