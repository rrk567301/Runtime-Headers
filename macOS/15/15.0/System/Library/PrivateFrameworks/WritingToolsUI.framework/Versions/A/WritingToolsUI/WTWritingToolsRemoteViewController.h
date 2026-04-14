@class WTUIAttributedStringController, NSArray, NSMutableDictionary, WTWritingToolsViewController, WTSession, NSPopover;

@interface WTWritingToolsRemoteViewController : NSRemoteViewController <WTWritingToolsDelegate_Internal, WTTextViewDelegate>

@property (weak, nonatomic) WTWritingToolsViewController *writingToolsViewController;
@property (retain, nonatomic) WTSession *currentSession;
@property (nonatomic) BOOL showingOriginal;
@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSMutableDictionary *uuidContextMapping;
@property (retain, nonatomic) NSMutableDictionary *uuidSuggestionMapping;
@property (retain, nonatomic) NSMutableDictionary *suggestionUUIDContextMapping;
@property (retain, nonatomic) NSPopover *suggestionViewPopover;
@property (retain, nonatomic) WTUIAttributedStringController *attributedStringController;
@property (nonatomic) BOOL shouldDetachPopoverOnFocusLost;
@property (nonatomic) BOOL viewServiceWasLaunchedByThisDelegate;
@property (nonatomic) BOOL serviceIsReady;
@property (nonatomic) BOOL wantsWritingToolsInlineEditing;

- (void)cleanup;
- (void).cxx_destruct;
- (void)reset;
- (id)exportedInterface;
- (void)redo;
- (void)undo;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)proofreadingSessionWithUUID:(id)a0 showDetailsForSuggestionWithUUID:(id)a1 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (void)proofreadingSessionWithUUID:(id)a0 updateState:(long long)a1 forSuggestionWithUUID:(id)a2;
- (void)replaceSelectionWithText:(id)a0;
- (id)serviceViewControllerInterface;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)copyText:(id)a0;
- (void)endWritingTools;
- (BOOL)hasRemainingSuggestionsToReview;
- (void)beginTextPlaceholder;
- (void)detachPopover;
- (void)endTextPlaceholderAndWillInsertText:(BOOL)a0;
- (void)endWritingToolsWithError:(id)a0;
- (void)notifyServiceIsReady;
- (void)notifyViewServiceWasLaunchedByThisDelegate;
- (void)setRemainingRedoCount:(unsigned long long)a0;
- (void)setRemainingUndoCount:(unsigned long long)a0;
- (void)setUsesStandardCloseButton:(BOOL)a0;
- (void)textSystemWillBeginEditingDuringSessionWithUUID:(id)a0;

@end
