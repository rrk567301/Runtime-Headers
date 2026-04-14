@class NSArray, NSDictionary, NSString, WFVariable, WFVariableStringParameterState;
@protocol WFPropertyListObject;

@interface WFPersonNameComponentsParameterState : NSObject <WFParameterState, WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) NSDictionary *componentStates;
@property (readonly, nonatomic) WFVariableStringParameterState *prefixState;
@property (readonly, nonatomic) WFVariableStringParameterState *givenNameState;
@property (readonly, nonatomic) WFVariableStringParameterState *middleNameState;
@property (readonly, nonatomic) WFVariableStringParameterState *familyNameState;
@property (readonly, nonatomic) WFVariableStringParameterState *suffixState;
@property (readonly, nonatomic) WFVariableStringParameterState *nicknameState;
@property (readonly, nonatomic) WFVariableStringParameterState *phoneticGivenNameState;
@property (readonly, nonatomic) WFVariableStringParameterState *phoneticMiddleNameState;
@property (readonly, nonatomic) WFVariableStringParameterState *phoneticFamilyNameState;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hiddenFieldsForState:(id)a0;
+ (id)visibleFieldsForState:(id)a0;
+ (id)allFieldsInLocalizedOrder;
+ (id)defaultFieldsInLocalizedOrder;
+ (id)hideableFieldsInLocalizedOrder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPersonNameComponents:(id)a0;
- (id)visibleFields;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)hiddenFields;

@end
