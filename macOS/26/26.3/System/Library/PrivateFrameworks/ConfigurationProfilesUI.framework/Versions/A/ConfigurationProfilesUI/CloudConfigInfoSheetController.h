@class NSTextField, NSDictionary, NSButton, NSWindow;

@interface CloudConfigInfoSheetController : NSWindowController

@property (retain) NSTextField *orgInfoField;
@property (retain) NSTextField *infoField;
@property (retain) NSButton *okButton;
@property (retain) NSWindow *parentWindow;
@property (retain) NSDictionary *cloudConfig;

- (void)windowDidLoad;
- (void).cxx_destruct;
- (void)buttonClicked:(id)a0;

@end
