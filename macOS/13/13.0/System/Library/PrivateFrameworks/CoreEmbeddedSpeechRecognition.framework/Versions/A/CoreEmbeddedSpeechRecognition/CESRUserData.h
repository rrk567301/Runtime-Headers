@class NSArray, NSDictionary, NSString;

@interface CESRUserData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactWordsWithFrequency;
@property (copy, nonatomic) NSDictionary *vocabularyWords;
@property (copy, nonatomic) NSArray *appNames;
@property (copy, nonatomic) NSDictionary *interactionSenderDisplayNames;
@property (copy, nonatomic) NSDictionary *searchEventValues;
@property (copy, nonatomic) NSArray *locationOfInterestNames;
@property (copy, nonatomic) NSArray *spatialLocationOfInterestNames;
@property (copy, nonatomic) NSArray *eventTitles;
@property (copy, nonatomic) NSArray *eventLocationNames;
@property (copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems;
@property (copy, nonatomic) NSArray *pexNamedEntityNames;
@property (copy, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *language;

+ (id)_vocabularyWordCategories;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithLanguage:(id)a0;
- (id)initWithItems:(id)a0 language:(id)a1;
- (void)populateUserDataFromItems:(id)a0;
- (id)_handleItems:(id)a0 forKVFieldTypes:(id)a1 withCategory:(id)a2;
- (id)_handleContacts:(id)a0;
- (id)_handleKeyboardLMDynamicVocabularyItems:(id)a0;
- (id)_handleVocabularyWords:(id)a0 template:(id)a1;

@end
