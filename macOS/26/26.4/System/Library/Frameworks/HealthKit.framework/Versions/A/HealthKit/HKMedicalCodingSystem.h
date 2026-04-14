@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)SNOMEDCodeSystem;
+ (id)FHIRConditionClinicalStatus;
+ (id)argonautHL7System;
+ (id)textSystem;
+ (id)FHIRImmunizationStatus;
+ (id)FHIRProcedureStatus;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)LOINCCodeSystem;
+ (id)FHIRCoverageType;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)appleOntologySystem;
+ (id)externalCodeSystems;
+ (id)ICD9System;
+ (id)CVXSystem;
+ (id)FHIRGoalStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)RxNormCodeSystem;
+ (id)ICD10System;
+ (id)unknownSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRCommunicationStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIREventStatus;
+ (id)UCUMSystem;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRCoverageStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRDeviceStatus;
+ (id)adHocConceptSystem;
+ (id)FHIRCoverageClassification;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)NDCSystem;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRObservationStatus;

- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCustomIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)ontology_hasCodingSystemAttributeIdentifier;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
