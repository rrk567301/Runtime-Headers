@class NSString, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (id)keywords;
- (id)descriptionDictionary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)parameterStateForKey:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)initializeParameters;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)parameterSummary;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)outputContentClasses;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)auxiliaryButton;
- (unsigned long long)parameterCollapsingBehavior;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (id)tableTemplate;
- (BOOL)hasMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFind;
- (void)updateCompoundParameterVisibility;
- (void)runAsynchronouslyWithInput:(id)a0 query:(id)a1;

@end
