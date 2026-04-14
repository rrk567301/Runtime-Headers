@class NSButton, NSTextField;

@interface AKNoCodeReceivedController : NSViewController

@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *messageTextField;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *alternativeButton;
@property (retain) NSButton *defaultButton;
@property (copy) id /* block */ cancelButtonAction;
@property (copy) id /* block */ alternateButtonAction;
@property (copy) id /* block */ defaultButtonAction;

- (id)init;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)defaultButtonPressed:(id)a0;
- (void)alternativeButtonPressed:(id)a0;

@end
