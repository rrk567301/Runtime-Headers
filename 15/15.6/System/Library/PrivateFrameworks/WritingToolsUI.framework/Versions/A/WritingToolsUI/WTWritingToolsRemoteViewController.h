@class NSString, NSArray, NSMutableDictionary, WTSession, WTWritingToolsViewController, WTUIAttributedStringController, WTWritingToolsConfiguration, NSPopover;

@interface WTWritingToolsRemoteViewController : NSRemoteViewController <WTWritingToolsDelegate_Internal, WTTextViewDelegate, NSPopoverDelegate>

@property (weak, nonatomic) WTWritingToolsViewController *writingToolsViewController;
@property (retain, nonatomic) WTWritingToolsConfiguration *writingToolsConfiguration;
@property (retain, nonatomic) WTSession *currentSession;
@property (nonatomic) char showingOriginal;
@property (nonatomic) char isProcessing;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSMutableDictionary *uuidContextMapping;
@property (retain, nonatomic) NSMutableDictionary *uuidSuggestionMapping;
@property (retain, nonatomic) NSMutableDictionary *suggestionUUIDContextMapping;
@property (retain, nonatomic) NSPopover *suggestionViewPopover;
@property (retain, nonatomic) WTUIAttributedStringController *attributedStringController;
@property (nonatomic) char shouldDetachPopoverOnFocusLost;
@property (nonatomic) char viewServiceWasLaunchedByThisDelegate;
@property (nonatomic) char serviceIsReady;
@property (nonatomic) char isShowingAlert;
@property (readonly, nonatomic) SEL undoSelector;
@property (readonly, nonatomic) SEL redoSelector;
@property (nonatomic) struct { char shouldReopen; long long toolToOpen; } popoverClosureConfig;
@property (nonatomic) char wantsWritingToolsInlineEditing;
@property (readonly, nonatomic) char includesTextListMarkers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)reset;
- (id)exportedInterface;
- (void)redo;
- (void)undo;
- (void)endWritingTools;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(char)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(char)a1;
- (char)popoverShouldClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(char)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)proofreadingSessionWithUUID:(id)a0 showDetailsForSuggestionWithUUID:(id)a1 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (void)proofreadingSessionWithUUID:(id)a0 updateState:(long long)a1 forSuggestionWithUUID:(id)a2;
- (void)replaceSelectionWithText:(id)a0;
- (id)serviceViewControllerInterface;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)copyText:(id)a0;
- (char)hasRemainingSuggestionsToReview;
- (id)alertIcon;
- (void)beginTextPlaceholder;
- (void)closePopoverTransientlyToShowTool:(long long)a0;
- (void)detachPopover;
- (void)endTextPlaceholderAndWillInsertText:(char)a0 completion:(id /* block */)a1;
- (void)endWritingToolsWithError:(id)a0;
- (void)notifyServiceIsReady;
- (void)notifyViewServiceWasLaunchedByThisDelegate;
- (void)setRemainingRedoCount:(unsigned long long)a0;
- (void)setRemainingUndoCount:(unsigned long long)a0;
- (void)setUsesStandardCloseButton:(char)a0;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 buttonAction:(id /* block */)a3;
- (void)showContentWarningWithTitle:(id)a0 message:(id)a1;
- (void)textSystemWillBeginEditingDuringSessionWithUUID:(id)a0;

@end
