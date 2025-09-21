@class WFSlotIdentifier, NSString, WFModalPresentationAnchor, WFModuleSummaryEditor;
@protocol WFParameterState, WFStandaloneModuleSummaryPresenterDelegate;

@interface WFStandaloneModuleSummaryPresenter : NSObject <WFModuleSummaryEditorDelegate>

@property (retain, nonatomic) WFModuleSummaryEditor *editor;
@property (readonly, nonatomic) id<WFParameterState> initialState;
@property (readonly, nonatomic) WFSlotIdentifier *slotIdentifier;
@property (retain, nonatomic) WFModalPresentationAnchor *presentationAnchor;
@property (retain, nonatomic) id<WFStandaloneModuleSummaryPresenterDelegate> retainedDelegate;
@property (weak, nonatomic) id<WFStandaloneModuleSummaryPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)menu;
- (void)present;
- (void)dismiss;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 initialState:(id)a2 isProcessing:(char)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 presentationAnchor:(id)a6 allowsPickingVariables:(char)a7;
- (void)releaseDelegate;
- (id)initialStateForSummaryEditor:(id)a0;
- (void)retainDelegate;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didRequestEditingSlotWithIdentifier:(id)a1;
- (void)summaryEditor:(id)a0 didStageParameterState:(id)a1;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(char)a1 withTextAttachmentToEdit:(id)a2;
- (void)summaryEditorDidRequestTextEntry:(id)a0;

@end
