@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)FHIRCoverageType;
+ (id)FHIRQuantityComparatorSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRConditionClinicalStatus;
+ (id)textSystem;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)CVXSystem;
+ (id)ICD9System;
+ (id)RxNormCodeSystem;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRCoverageStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRDeviceStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRObservationStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)argonautHL7System;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRGoalStatus;
+ (id)unknownSystem;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)UCUMSystem;
+ (id)FHIRCoverageClassification;
+ (id)appleOntologySystem;
+ (id)NDCSystem;
+ (id)LOINCCodeSystem;
+ (id)externalCodeSystems;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIREventStatus;
+ (id)FHIRImmunizationStatus;
+ (id)ICD10System;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)SNOMEDCodeSystem;
+ (id)adHocConceptSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRProcedureStatus;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)initWithCustomIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)ontology_hasCodingSystemAttributeIdentifier;

@end
