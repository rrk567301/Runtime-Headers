@class NSString, WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState <WFVariableSupportingParameterState>

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEnumeration;
- (unsigned long long)tense;
- (long long)contentType;
- (id)serializedRepresentation;
- (id)initWithVariable:(id)a0;
- (id)unitType;
- (BOOL)isIrrational;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (unsigned long long)displayableTimeUnits;
- (BOOL)isCaseInsensitive;
- (unsigned long long)comparableTimeUnits;
- (id)supportedComparisonOperators;
- (id)initWithVariableState:(id)a0;
- (Class)contentClassProvidingContentProperty;
- (Class)effectiveContentClass;

@end
