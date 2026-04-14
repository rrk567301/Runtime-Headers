@class NSTextField, NSArray, NSPopUpButton, NSButton;

@interface GKReportProblemController : GKComposeController

@property NSTextField *actionDescriptionField;
@property NSPopUpButton *concernPopUpButton;
@property NSButton *sendButton;
@property NSTextField *messageField;
@property (retain) NSArray *possibleConcerns;

- (void)done:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear;
- (id)selectedConcern;
- (void)updateUIWithConcerns:(id)a0;
- (void)validateReadyToSend;

@end
