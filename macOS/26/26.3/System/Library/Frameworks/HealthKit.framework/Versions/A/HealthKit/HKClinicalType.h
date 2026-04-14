@interface HKClinicalType : HKSampleType

+ (id)procedureRecordType;
+ (id)conditionRecordType;
+ (id)allTypes;
+ (id)medicationRecordType;
+ (id)allergyRecordType;
+ (id)coverageRecordType;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
