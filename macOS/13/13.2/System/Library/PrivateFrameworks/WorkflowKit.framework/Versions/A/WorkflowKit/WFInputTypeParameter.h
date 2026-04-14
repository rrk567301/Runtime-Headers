@class NSString;

@interface WFInputTypeParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectionType;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)preferParameterValuePicker;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)defaultSupportedVariableTypes;
- (BOOL)allowsMultipleValues;
- (id)accessoryIconForPossibleState:(id)a0;
- (id)localizedLabelForMultipleCompleteState:(id)a0;

@end
