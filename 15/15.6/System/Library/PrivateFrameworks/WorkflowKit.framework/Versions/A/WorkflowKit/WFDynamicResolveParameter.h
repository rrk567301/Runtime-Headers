@class NSString, INStringLocalizer, INCodableAttribute;
@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;

@interface WFDynamicResolveParameter : WFParameter <WFParameterValuePickable, WFCodableAttributeBackedParameter>

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
@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (weak, nonatomic) id<WFDynamicResolveParameterDataSource> dataSource;
@property (weak, nonatomic) id<WFDynamicResolveParameterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (id)wf_pickerLocalizedImageForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForState:(id)a0;
- (void)endResolutionSession;
- (void)localizedDisambiguationPromptForItems:(id)a0 intent:(id)a1 completion:(id /* block */)a2;
- (void)resolveOptionsForUserInput:(id)a0 completionBlock:(id /* block */)a1;

@end
