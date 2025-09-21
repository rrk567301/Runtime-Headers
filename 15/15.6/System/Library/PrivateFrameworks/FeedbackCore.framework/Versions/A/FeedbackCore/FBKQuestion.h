@class FBKModalConfiguration, NSArray, NSString, FBKQuestionGroup, NSNumber, NSSet;
@protocol FBKChoiceSetResolverProtocol;

@interface FBKQuestion : FBKManagedLocalIDObject <FBKDiffableObject>

@property (nonatomic, readonly) char configuresEnhancedLogging;
@property (nonatomic, readonly) FBKModalConfiguration *EnhancedLoggingModalConfiguration;
@property (retain) NSNumber *primitiveAnswerType;
@property (retain) NSNumber *primitiveRequired;
@property (retain) NSNumber *primitiveConditional;
@property (retain) NSArray *choices;
@property (retain, nonatomic) NSArray *modalConfigurations;
@property (retain) NSString *text;
@property (retain) NSString *role;
@property (retain) NSString *placeholder;
@property (retain) NSNumber *sortOrder;
@property (retain) NSString *resolver;
@property (retain) FBKQuestionGroup *questionGroup;
@property unsigned long long answerType;
@property (getter=isRequired) char required;
@property (readonly) char appearsRequiredIfOptional;
@property (retain, nonatomic) id<FBKChoiceSetResolverProtocol> choiceSetResolver;
@property (readonly) NSArray *visibleChoices;
@property (retain, nonatomic) NSSet *answers;
@property (nonatomic) char canDisplayChoicesInline;
@property (readonly, nonatomic) NSString *tat;
@property (getter=isConditional) char conditional;
@property (retain) NSNumber *conditionQuestionID;
@property (retain) id conditionValue;
@property (retain, nonatomic) NSArray *conditions;
@property (retain) NSString *choiceSetClientSideResolver;
@property (retain) NSString *targetUserAgent;
@property (retain) NSString *userAgentPopulate;
@property char visible;

+ (id)entityName;
+ (id)uniquingKey;

- (id)description;
- (void).cxx_destruct;
- (void)prepareForDeletion;
- (void)setRequired:(char)a0;
- (id)choiceForValue:(id)a0;
- (id)allChoices;
- (char)isMultiSelect;
- (char)shouldHaveChoices;
- (void)setConditional:(char)a0;
- (void)addAnswer:(id)a0;
- (char)affectsRequirements;
- (id)answerToDisplayNameValueTransformer;
- (id)diffableHashWithContext:(id)a0;
- (id)displayTextForAnswer:(id)a0;
- (char)isAnswerableByAutoFill;
- (char)matchesInlineChoiceTypes;
- (id)serverSideChoices;
- (void)setPropertiesFromJSONObject:(id)a0;
- (void)setQuestionChoices:(id)a0;
- (id)titleForValue:(id)a0;

@end
