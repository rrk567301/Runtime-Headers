@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)NDCSystem;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)textSystem;
+ (id)FHIRObservationStatus;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRCoverageStatus;
+ (id)FHIRCoverageClassification;
+ (id)appleOntologySystem;
+ (id)FHIREventStatus;
+ (id)adHocConceptSystem;
+ (id)RxNormCodeSystem;
+ (id)FHIRImmunizationStatus;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRDiagnosticReportStatus;
+ (id)unknownSystem;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRDeviceStatus;
+ (id)UCUMSystem;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRConditionClinicalStatus;
+ (id)CVXSystem;
+ (id)FHIRProcedureStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRMedicationOrderStatus;
+ (id)ICD10System;
+ (id)LOINCCodeSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRGoalStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRCoverageType;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)ICD9System;
+ (id)argonautHL7System;
+ (id)externalCodeSystems;
+ (id)FHIRMedicationDispenseStatusR4;

- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)ontology_hasCodingSystemAttributeIdentifier;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCustomIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
