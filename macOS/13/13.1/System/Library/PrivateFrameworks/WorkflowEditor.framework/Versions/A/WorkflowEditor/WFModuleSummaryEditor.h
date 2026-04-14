@class WFVariable, WFMultipleValueParameterState, WFParameter;
@protocol WFVariableProvider, WFParameterState, WFModuleSummaryEditorDelegate, WFEditorAuxiliaryViewPresenter, WFVariableUIDelegate, WFModuleSummarySupporting, WFSlotTemplateTextEntry;

@interface WFModuleSummaryEditor : NSObject

@property (nonatomic) BOOL returnToKeyboardOnComplete;
@property (retain, nonatomic) WFVariable *lastValueForEditingVariable;
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *parameter;
@property (readonly, nonatomic) id<WFParameterState> initialState;
@property (readonly, nonatomic) WFMultipleValueParameterState *initialArrayState;
@property (readonly, nonatomic) id<WFParameterState> currentState;
@property (readonly, nonatomic) unsigned long long arrayIndex;
@property (readonly, nonatomic, getter=isProcessing) BOOL processing;
@property (retain, nonatomic) id<WFModuleSummaryEditorDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic) BOOL allowsPickingVariables;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (readonly, weak, nonatomic) id<WFSlotTemplateTextEntry> textEntry;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;
+ (BOOL)supportsEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (id)initWithParameter:(id)a0 arrayIndex:(unsigned long long)a1 processing:(BOOL)a2;
- (void)stageState:(id)a0;
- (void)commitState:(id)a0;
- (void)completeEditing;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (id)menuForTextEntry;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (void)requestTextEntry;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (void)requestEditingSlotIdentifier:(id)a0;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (void)sourceViewTintColorDidChange;
- (id)variableMenuElementsForSlotWithIdentifier:(id)a0;
- (BOOL)menuElementsContainDeferredElement:(id)a0 withEstimatedCountGreaterThan:(long long)a1;
- (id)menuForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 presentationAnchor:(id)a2;
- (BOOL)canTypeAlongsideVariables;
- (void)_beginEditingVariableAttachment:(id)a0 slotIdentifier:(id)a1 presentationAnchor:(id)a2;

@end
