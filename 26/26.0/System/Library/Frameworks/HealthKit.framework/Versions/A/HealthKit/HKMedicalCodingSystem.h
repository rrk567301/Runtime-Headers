@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)adHocConceptSystem;
+ (id)FHIREventStatus;
+ (id)RxNormCodeSystem;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)ICD9System;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRGoalStatus;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)UCUMSystem;
+ (id)LOINCCodeSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRCoverageType;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRProcedureStatus;
+ (id)textSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)ICD10System;
+ (id)appleOntologySystem;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRDeviceStatus;
+ (id)FHIRCarePlanStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRObservationStatus;
+ (id)externalCodeSystems;
+ (id)FHIRCoverageClassification;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)CVXSystem;
+ (id)FHIRCoverageStatus;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRMedicationOrderStatus;
+ (id)unknownSystem;
+ (id)FHIRImmunizationStatus;
+ (id)argonautHL7System;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRQuantityComparatorSystem;
+ (id)NDCSystem;

- (id)initWithCustomIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)ontology_hasCodingSystemAttributeIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
