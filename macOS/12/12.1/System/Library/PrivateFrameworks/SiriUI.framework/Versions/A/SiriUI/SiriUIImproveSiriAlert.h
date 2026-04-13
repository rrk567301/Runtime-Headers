@class NSTextField, SiriUIOrbView, NSTimer, NSButton;

@interface SiriUIImproveSiriAlert : NSWindowController

@property (weak) SiriUIOrbView *orbView;
@property (weak) NSTextField *messageText;
@property (weak) NSTextField *informativeText;
@property (weak) NSButton *aboutLinkButton;
@property (weak) NSButton *firstButton;
@property (weak) NSButton *secondButton;
@property (retain, nonatomic) NSTimer *animationTimer;

- (id)init;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (void)windowDidLoad;
- (void)siriUIBeginModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)clickedFirstButton:(id)a0;
- (void)clickedSecondButton:(id)a0;
- (void)clickedAboutLink:(id)a0;

@end
