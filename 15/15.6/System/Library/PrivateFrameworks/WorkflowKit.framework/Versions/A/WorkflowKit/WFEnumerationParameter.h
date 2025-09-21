@class NSString, NSArray;

@interface WFEnumerationParameter : WFParameter <WFParameterValuePickable, WFParameterDialogProvider>

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
@property (readonly, nonatomic) NSArray *staticPossibleStates;
@property (readonly, nonatomic) NSArray *displayNames;
@property (readonly, nonatomic) NSArray *subtitles;
@property (readonly, nonatomic) NSArray *symbolNames;
@property (readonly, nonatomic) char providesLocalizedValuesForSummary;
@property (readonly, nonatomic) char prefersParameterValuePicker;
@property (readonly, nonatomic) char preferParameterValuePicker;
@property (readonly, nonatomic) char preferContextMenu;
@property (readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property (readonly, nonatomic) char alwaysShowsButton;
@property (readonly, nonatomic) char hideClearButton;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) char hidesSubtitleInEditor;
@property (readonly, nonatomic) char hidesAccessoryIconInEditor;
@property (readonly, nonatomic) char liveUpdatesPossibleStatesInEditor;
@property (readonly, nonatomic) NSString *selectionType;
@property (readonly, nonatomic) NSString *tableViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (void)startLiveUpdatingPossibleStates;
- (id)wf_pickerLocalizedIconForState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (char)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (void)stopLiveUpdatingPossibleStates;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (id)wf_pickerLocalizedImageForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (char)displaysMultipleValueEditor;
- (id)localizedTitleForButtonWithState:(id)a0;
- (id)localizedLabelForMultipleState:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)localizedLabelForMultipleCompleteState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0 inMultipleState:(id)a1;
- (id)parameterStateFromDialogResponse:(id)a0;
- (void)setPossibleStatesFromRemoteSource:(id)a0;
- (id)statesForMultipleStateLabelWithStates:(id)a0;

@end
