@class WFParameter, NSString, WFModuleSummaryEditor, WFEnumerationValuePicker;
@protocol WFModuleSummarySupporting;

@interface WFUnionParameterSummaryEditor : WFModuleSummaryEditor <WFModuleSummaryEditorDelegate>

@property (readonly, nonatomic) WFModuleSummaryEditor *subeditor;
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *subparameter;
@property (retain, nonatomic) WFEnumerationValuePicker *valuePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(unsigned long long)a2 processing:(BOOL)a3;
- (void)completeEditing;
- (void)summaryEditorDidRequestEditing:(id)a0;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0 slotIdentifier:(id)a1;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 presentationAnchor:(id)a2;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (void)commitState:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (id)initialStateForSummaryEditor:(id)a0;
- (BOOL)isSelfSlot:(id)a0;
- (id)menuForTextEntry;
- (id)newStateWithCommittedState:(id)a0 isNewArrayElement:(BOOL)a1 slotIdentifier:(id)a2;
- (void)presentValuePickerWithSlotIdentifier:(id)a0 currentState:(id)a1 isNewArrayElement:(BOOL)a2 fromPresentationAnchor:(id)a3 initialCollection:(id)a4;
- (void)requestTextEntry;
- (BOOL)shouldProcessAsMultiValueWithSlotIdentifier:(id)a0 isNewArrayElement:(BOOL)a1;
- (void)sourceViewTintColorDidChange;
- (id)subeditorForParameter:(id)a0;
- (id)subeditorForState:(id)a0;
- (id)subtypeMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
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

@end
