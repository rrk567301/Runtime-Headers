@class HKOntologyLocalizedEducationContent;

@interface HKMedicalUserDomainConcept : HKMedicalBaseUserDomainConcept <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent;
@property (readonly, nonatomic) BOOL chartsBloodPressure;
@property (readonly, nonatomic) BOOL hidesOutOfRangeFilter;
@property (readonly, nonatomic) BOOL isLowUtility;

+ (id)_typeIdentifier;

- (BOOL)unitTesting_isIdentical:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dataDescriptionAllowedForPublic:(BOOL)a0;
- (id)_generateSemanticIdentifier;
- (BOOL)canRequestSyncUponInsertion;
- (id)initWithCategoryTypes:(id)a0 countryCode:(id)a1 codingCollection:(id)a2 propertyCollection:(id)a3;
- (id)medicalConceptByAddingCategoryType:(long long)a0;

@end
