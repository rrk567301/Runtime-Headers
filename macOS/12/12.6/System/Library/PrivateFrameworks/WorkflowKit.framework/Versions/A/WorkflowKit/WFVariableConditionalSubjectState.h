@class WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;

+ (id)subjectType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEnumeration;
- (unsigned long long)tense;
- (long long)contentType;
- (id)serializedRepresentation;
- (id)initWithVariable:(id)a0;
- (id)unitType;
- (BOOL)isIrrational;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (BOOL)isCaseInsensitive;
- (unsigned long long)comparableTimeUnits;
- (id)supportedComparisonOperators;
- (unsigned long long)displayableTimeUnits;
- (id)initWithVariableState:(id)a0;
- (Class)contentClassProvidingContentProperty;

@end
