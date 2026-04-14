@class NSButton, NSTextField;

@interface SiriUIImproveSiriAlert : NSWindowController

@property (weak) NSTextField *messageText;
@property (weak) NSTextField *informativeText;
@property (weak) NSButton *aboutLinkButton;
@property (weak) NSButton *firstButton;
@property (weak) NSButton *secondButton;

- (void)windowDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (void)clickedAboutLink:(id)a0;
- (void)clickedFirstButton:(id)a0;
- (void)clickedSecondButton:(id)a0;
- (void)siriUIBeginModalForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
