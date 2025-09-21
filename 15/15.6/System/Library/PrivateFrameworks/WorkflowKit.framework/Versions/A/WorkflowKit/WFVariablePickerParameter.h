@class NSString;

@interface WFVariablePickerParameter : WFEnumerationParameter <WFParameterValuePickable>

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

@end
