@class NSString, LNActionParameterMetadata;
@protocol WFPropertyListObject;

@interface WFLinkDynamicOptionsEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable>

@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic) BOOL allowsMultipleValues;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedDefaultParameterOption;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)preferParameterValuePicker;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)localizedTitleForButtonWithState:(id)a0;
- (BOOL)displaysMultipleValueEditor;
- (id)statesForMultipleStateLabelWithStates:(id)a0;
- (BOOL)hidesSubtitleInEditor;
- (BOOL)alwaysShowsButton;
- (BOOL)dynamicOptionsSupportsSearch;

@end
