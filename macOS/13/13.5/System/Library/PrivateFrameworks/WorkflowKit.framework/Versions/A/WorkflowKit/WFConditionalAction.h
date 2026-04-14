@class NSString;
@protocol WFVariableProvider;

@interface WFConditionalAction : WFControlFlowAction <WFDynamicEnumerationDataSource, WFVariableDelegate>

@property (weak, nonatomic) id<WFVariableProvider> parentVariableProvider;
@property (readonly, nonatomic) BOOL truthForTestingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializedParametersForHome:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (BOOL)isDeletable;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)skipsProcessingHiddenParameters;
- (id)defaultOutputName;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)initializeParameters;
- (id)inputContentClasses;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)minimumSupportedClientVersion;
- (BOOL)populatesInputFromInputParameter;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (id)actionsProvidingVariableName:(id)a0;
- (id)createAccompanyingActions;
- (id)possibleContentClassesForVariableNamed:(id)a0 context:(id)a1;
- (void)variableDidChange:(id)a0;
- (void)updateRightExpressionParameters;
- (void)configureResourcesForParameter:(id)a0;
- (void)clearLegacyComparisonBehaviorFlag;
- (id)copyForProcessing;
- (id)fileSizeForQuantityValue:(id)a0;
- (BOOL)groupContainsOtherwiseAction;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)inputSourceInWorkflow:(id)a0;
- (void)loadHomesIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (id)measurementForQuantityValue:(id)a0;
- (id)predicateForComparisonOperator:(long long)a0 rightDate:(id)a1 secondRightDate:(id)a2 comparableTimeUnits:(unsigned long long)a3 rightDurationValue:(id)a4;
- (void)prepareToProcessWithCompletionHandler:(id /* block */)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)setTruth:(BOOL)a0 withVariableSource:(id)a1;
- (Class)settingsViewControllerClass;
- (long long)subjectContentType;
- (id)subjectState;
- (id)timeIntervalForQuantityValue:(id)a0;
- (BOOL)truthWithVariableSource:(id)a0;
- (void)updatePossibleOperators;
- (BOOL)useLegacyComparisonBehavior;
- (BOOL)usesLegacyInputBehavior;

@end
