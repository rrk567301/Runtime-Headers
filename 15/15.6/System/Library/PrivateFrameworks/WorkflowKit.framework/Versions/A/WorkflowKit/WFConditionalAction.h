@class NSArray, WFContentCollection, NSError, WFActionParameterSummary;

@interface WFConditionalAction : WFControlFlowAction <WFVariableDelegate, WFAddButtonParameterDelegate> {
    void /* unknown type, empty encoding */ tableTemplate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addButtonParameter;
    void /* unknown type, empty encoding */ parameterSerializationKeys;
    void /* unknown type, empty encoding */ observedVariables;
    void /* unknown type, empty encoding */ truthForTestingOnly;
}

@property (nonatomic, readonly) char isDeletable;
@property (nonatomic, readonly) char usesLegacyInputBehavior;
@property (nonatomic, readonly) char inputRequired;
@property (nonatomic, readonly) NSArray *inputContentClasses;
@property (nonatomic, readonly) char inputPassthrough;
@property (nonatomic, readonly) char populatesInputFromInputParameter;
@property (nonatomic, readonly) char skipsProcessingHiddenParameters;
@property (nonatomic, readonly) WFActionParameterSummary *parameterSummary;
@property (nonatomic, readonly) NSArray *parameterDefinitions;
@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;

- (id)init;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)serializedParameters;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)containedVariables;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)minimumSupportedClientVersion;
- (id)parameterStateForKey:(id)a0 fallingBackToDefaultValue:(char)a1;
- (char)setParameterState:(id)a0 forKey:(id)a1;
- (id)createAccompanyingActions;
- (id)parameterStateUpdateForPlusButtonForParameter:(id)a0;
- (char)showsAddButtonForParameter:(id)a0;
- (void)variableDidChange:(id)a0;
- (id)visibleParametersWithProcessing:(char)a0;
- (char)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)inputSourceInWorkflow:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (char)truthWithVariableSource:(id)a0;
- (void)visibleParametersUpdated;

@end
