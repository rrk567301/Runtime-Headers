@class WFHMServiceParameterState, HMHome, NSDictionary, HMCharacteristic, HMService, WFHMCharacteristicSubstitutableState;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState

@property (retain, nonatomic) NSDictionary *serializedWFHMServiceParameter;
@property (retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState;
@property (retain, nonatomic) WFHMServiceParameterState *serviceParameterState;
@property (retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) BOOL negatesValue;

+ (id)subjectType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEnumeration;
- (id)unit;
- (long long)contentType;
- (id)serializedRepresentation;
- (id)minimumValue;
- (id)maximumValue;
- (id)unitType;
- (id)maximumLength;
- (id)stepValue;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithService:(id)a0 characteristic:(id)a1 homeIdentifier:(id)a2 negatesValue:(BOOL)a3;
- (id)initWithSerializedWFHMServiceParameter:(id)a0 serializedWFHMCharacteristicSubstitutableState:(id)a1 negatesValue:(BOOL)a2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;

@end
