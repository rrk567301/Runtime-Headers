@class WFParameter, NSString, WFModuleSummaryEditor;
@protocol WFModuleSummarySupporting;

@interface WFUnionParameterSummaryEditor : WFModuleSummaryEditor <WFModuleSummaryEditorDelegate>

@property (readonly, nonatomic) WFModuleSummaryEditor *subeditor;
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *subparameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)substate;
- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (id)initWithParameter:(id)a0 arrayIndex:(unsigned long long)a1 processing:(BOOL)a2;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 presentationAnchor:(id)a2;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (void)commitState:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (id)initialStateForSummaryEditor:(id)a0;
- (BOOL)isSelfSlot:(id)a0;
- (id)menuForTextEntry;
- (void)requestTextEntry;
- (void)sourceViewTintColorDidChange;
- (id)subeditorForState:(id)a0;
- (id)subtypeMenuElementsForSlotWithIdentifier:(id)a0;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (id)variableMenuElementsForSlotWithIdentifier:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;

@end
