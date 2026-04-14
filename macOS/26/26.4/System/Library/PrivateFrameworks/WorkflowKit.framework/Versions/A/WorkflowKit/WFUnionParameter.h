@class NSString, NSArray, NSDictionary, WFAction;

@interface WFUnionParameter : WFParameter <WFParameterValuePickable, WFParameterDialogProvider>

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
@property (readonly, nonatomic) NSArray *subtypes;
@property (readonly, nonatomic) NSArray *subdefinitions;
@property (readonly, nonatomic) NSArray *subparameters;
@property (readonly, nonatomic) NSDictionary *caseDisplayRepresentations;
@property (readonly, nonatomic) NSDictionary *parameterMetadataByType;
@property (nonatomic) BOOL isRowParameter;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)localizedStringFor:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (id)wf_pickerLocalizedImageForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isArrayMemberTypeForSubtype:(id)a0;
- (BOOL)isLinkEnumSubparameter:(id)a0;
- (BOOL)isLinkEnumSubparameterWithState:(id)a0;
- (void)loadCombinedStatesWithSearchTerm:(id)a0 completion:(id /* block */)a1;
- (void)loadStatesForSubtype:(id)a0 searchTerm:(id)a1 completion:(id /* block */)a2;
- (id)processArrayParameterForEntityParameter:(id)a0 subtype:(id)a1;
- (id)subparameterForState:(id)a0;
- (id)subparameterForType:(id)a0;
- (id)subtypeFromSubparameter:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)getArrayMemberTypeFromType:(id)a0;
- (id)parameterStateFromDialogResponse:(id)a0;
- (id)subdefinitionForType:(id)a0;

@end
