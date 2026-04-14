@class NSString, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly, nonatomic) struct _WFContentSlice { unsigned long long x0; unsigned long long x1; } slice;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (id)keywords;
- (id)descriptionDictionary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)initializeParameters;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)outputContentClasses;
- (id)parameterStateForKey:(id)a0;
- (id)parameterSummary;
- (id)possibleStatesForEnumeration:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)auxiliaryButton;
- (unsigned long long)parameterCollapsingBehavior;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (BOOL)hasMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
- (void)runFilterWithInput:(id)a0 query:(id)a1;
- (id)sortablePropertyDisplayNames;
- (id)sortablePropertyNames;
- (id)tableTemplate;
- (void)updateCompoundParameterVisibility;

@end
