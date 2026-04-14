@class NSSet, NSDictionary, NSHashTable, NSString, WFResourceManager;

@interface WFParameter : NSObject

@property (readonly, nonatomic) NSSet *disallowedVariableTypes;
@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSHashTable *eventObservers;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL displaysMultipleValueEditor;
@property (readonly, nonatomic) NSSet *defaultSupportedVariableTypes;
@property (readonly, copy, nonatomic) NSDictionary *arraySizesBySizeClass;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *localizedPrompt;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *keyForSerialization;
@property (readonly, copy, nonatomic) NSString *legacyKey;
@property (readonly, copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) BOOL doNotLocalizeValues;
@property (readonly, nonatomic) BOOL doNotLocalizePlaceholder;
@property (readonly, nonatomic) NSSet *supportedVariableTypes;
@property (readonly, copy, nonatomic) id defaultSerializedRepresentation;
@property (readonly, nonatomic) WFResourceManager *resourceManager;
@property (readonly, nonatomic, getter=isInsideWorkflow) BOOL insideWorkflow;
@property (readonly, nonatomic) NSString *importQuestionBehavior;
@property (readonly, nonatomic) NSString *intentSlotName;
@property (readonly, nonatomic) BOOL allowsMultipleValues;
@property (readonly, nonatomic, getter=isFixedSizeArray) BOOL fixedSizeArray;
@property (readonly, nonatomic) BOOL shouldAlignLabels;
@property (nonatomic) BOOL isEditingForConfiguration;
@property (readonly, nonatomic) BOOL stripsTTSHints;

+ (id)referencedActionResourceClasses;
+ (id)allInsertableVariableTypes;
+ (id)parameterWithDefinition:(id)a0;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (void)removeEventObserver:(id)a0;
- (void)addEventObserver:(id)a0;
- (void)attributesDidChange;
- (void)defaultSerializedRepresentationDidChange;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)setActionResources:(id)a0;
- (Class)singleStateClass;
- (void)stateValidityCriteriaDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (Class)multipleStateClass;
- (long long)arraySizeForWidgetSizeClass:(id)a0;

@end
