@class NSString;

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider>

@property (copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic, getter=isSecureTextEntry) char secureTextEntry;
@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSString *returnKeyType;
@property (readonly, copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) NSString *autocapitalizationType;
@property (readonly, nonatomic) NSString *autocorrectionType;
@property (readonly, nonatomic) char autoPeriodsDisabled;
@property (readonly, nonatomic) char smartQuotesDisabled;
@property (readonly, nonatomic) char smartDashesDisabled;
@property (readonly, nonatomic) char textReplacementDisabled;
@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic, getter=isMultiline) char multiline;
@property (readonly, nonatomic, getter=isMonospace) char monospace;
@property (readonly, nonatomic) unsigned long long hintDisplayMode;
@property (readonly, nonatomic) unsigned long long syntaxHighlightingType;
@property (readonly, nonatomic) char processesIntoContentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)setLocalizedPlaceholder:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;
- (id)hintForState:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)a0;
- (id)parameterStateFromDialogResponse:(id)a0;
- (char)shouldAlignLabels;

@end
