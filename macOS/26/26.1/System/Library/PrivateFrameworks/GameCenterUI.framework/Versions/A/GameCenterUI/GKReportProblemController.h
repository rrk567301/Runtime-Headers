@class NSTextField, NSArray, NSPopUpButton, NSButton;

@interface GKReportProblemController : GKComposeController

@property NSTextField *actionDescriptionField;
@property NSPopUpButton *concernPopUpButton;
@property NSButton *sendButton;
@property NSTextField *messageField;
@property (retain) NSArray *possibleConcerns;

- (void)controlTextDidChange:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)done:(id)a0;
- (void)viewWillAppear;
- (id)selectedConcern;
- (void)updateUIWithConcerns:(id)a0;
- (void)validateReadyToSend;

@end
