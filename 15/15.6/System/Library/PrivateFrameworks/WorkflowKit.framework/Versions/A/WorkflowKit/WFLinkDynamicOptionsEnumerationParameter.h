@class NSString, LNActionParameterMetadata, WFAppIntentExecutionAction;
@protocol WFPropertyListObject;

@interface WFLinkDynamicOptionsEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable>

@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) char wf_supportsSearch;
@property (readonly, nonatomic) char wf_allowsMultipleSelection;
@property (readonly, nonatomic) char wf_usesTogglesForSelection;
@property (readonly, nonatomic) char wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) char wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) char wf_alwaysScaleIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic) char allowsMultipleValues;
@property (weak, nonatomic) WFAppIntentExecutionAction *action;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedDefaultParameterOption;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (char)parameterStateIsValid:(id)a0;
- (char)preferParameterValuePicker;
- (Class)singleStateClass;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (char)displaysMultipleValueEditor;
- (id)localizedTitleForButtonWithState:(id)a0;
- (char)alwaysShowsButton;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (void)createParameterStateFromDialogResponse:(id)a0 completionHandler:(id /* block */)a1;
- (char)dynamicOptionsSupportsSearch;
- (char)hidesSubtitleInEditor;
- (id)statesForMultipleStateLabelWithStates:(id)a0;

@end
