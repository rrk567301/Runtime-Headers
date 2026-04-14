@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)LOINCCodeSystem;
+ (id)FHIRCarePlanStatus;
+ (id)adHocConceptSystem;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRAllergyIntoleranceType;
+ (id)CVXSystem;
+ (id)FHIRDeviceStatus;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRCoverageType;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRGoalStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRObservationStatus;
+ (id)argonautHL7System;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRImmunizationStatus;
+ (id)UCUMSystem;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRCoverageStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)NDCSystem;
+ (id)ICD10System;
+ (id)SNOMEDCodeSystem;
+ (id)FHIREventStatus;
+ (id)RxNormCodeSystem;
+ (id)FHIRMedicationRequestStatus;
+ (id)unknownSystem;
+ (id)ICD9System;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)externalCodeSystems;
+ (id)textSystem;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRProcedureStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)appleOntologySystem;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRAllergyIntoleranceClinicalStatus;

- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCustomIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)ontology_hasCodingSystemAttributeIdentifier;

@end
