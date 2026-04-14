@class NSString, WFModuleSummaryEditor;

@interface WFDateIntervalParameterSummaryEditor : WFModuleSummaryEditor <WFModuleSummaryEditorDelegate>

@property (readonly, nonatomic) WFModuleSummaryEditor *dateFieldEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)dateFieldEditorClass;
+ (BOOL)supportsEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(unsigned long long)a2 processing:(BOOL)a3;
- (void)completeEditing;
- (void)summaryEditorDidRequestEditing:(id)a0;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0 slotIdentifier:(id)a1;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 presentationAnchor:(id)a2;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (id)initialStateForSummaryEditor:(id)a0;
- (id)menuForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (id)menuForTextEntry;
- (void)requestTextEntry;
- (void)setAllowsPickingVariables:(BOOL)a0;
- (void)setAuxiliaryViewPresenter:(id)a0;
- (void)setVariableProvider:(id)a0;
- (void)setVariableUIDelegate:(id)a0;
- (void)sourceViewTintColorDidChange;
- (void)summaryEditor:(id)a0 didCommitAuxiliaryParameterState:(id)a1 forKey:(id)a2;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
- (void)summaryEditor:(id)a0 didStageParameterState:(id)a1;
- (void)summaryEditor:(id)a0 willUpdateVariable:(id)a1;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (BOOL)textEntryShouldChangeTextTo:(id)a0 replacingRanges:(id)a1 withStrings:(id)a2;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (id)variableMenuElementsForSlotWithIdentifier:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)viewControllerForEditingWithIdentifier:(id)a0;

@end
