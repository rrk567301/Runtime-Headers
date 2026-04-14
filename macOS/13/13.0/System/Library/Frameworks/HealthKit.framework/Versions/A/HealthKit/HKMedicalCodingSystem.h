@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)LOINCCodeSystem;
+ (id)SNOMEDCodeSystem;
+ (id)RxNormCodeSystem;
+ (id)UCUMSystem;
+ (id)CVXSystem;
+ (id)NDCSystem;
+ (id)ICD10System;
+ (id)ICD9System;
+ (id)argonautHL7System;
+ (id)FHIRDeviceStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIREventStatus;
+ (id)FHIRImmunizationStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRGoalStatus;
+ (id)FHIRCoverageStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRCoverageType;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRProcedureStatus;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)textSystem;
+ (id)unknownSystem;
+ (id)appleOntologySystem;
+ (id)adHocConceptSystem;
+ (id)appleHealthDataTypeSystem;
+ (id)externalCodeSystems;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)initWithCustomIdentifier:(id)a0;
- (long long)ontology_hasCodingSystemAttributeIdentifier;

@end
