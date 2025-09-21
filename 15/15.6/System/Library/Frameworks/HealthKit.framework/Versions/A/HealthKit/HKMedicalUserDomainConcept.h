@class NSArray, NSString, NSDictionary, HKOntologyLocalizedEducationContent, HKMedicalUserDomainConceptSemanticIdentifier;

@interface HKMedicalUserDomainConcept : HKUserDomainConcept <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _computedPropertyLock;
    NSDictionary *_preferredNameByLocaleIdentifier;
    HKMedicalUserDomainConceptSemanticIdentifier *_semanticIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *categoryTypes;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *ontologyPreferredName;
@property (readonly, copy, nonatomic) NSDictionary *preferredNameByLocaleIdentifier;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent;
@property (readonly, nonatomic) char chartsBloodPressure;
@property (readonly, nonatomic) char hidesOutOfRangeFilter;
@property (readonly, nonatomic) char isLowUtility;

+ (id)_typeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (id)semanticIdentifier;
- (id)_dataDescriptionAllowedForPublic:(char)a0;
- (id)_generateSemanticIdentifier;
- (void)_setCategoryTypes:(id)a0;
- (void)_setCountryCode:(id)a0;
- (char)canRequestSyncUponInsertion;
- (id)initWithCategoryTypes:(id)a0;
- (id)initWithCategoryTypes:(id)a0 countryCode:(id)a1 codingCollection:(id)a2 propertyCollection:(id)a3;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)medicalConceptByAddingCategoryType:(long long)a0;
- (id)medicalConceptByReplacingCategoryTypes:(id)a0;
- (id)medicalConceptByReplacingCategoryTypes:(id)a0 codingCollection:(id)a1 linkCollection:(id)a2;
- (char)unitTesting_isIdentical:(id)a0;

@end
