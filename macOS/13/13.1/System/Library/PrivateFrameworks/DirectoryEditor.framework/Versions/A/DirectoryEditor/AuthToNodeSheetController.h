@class NSTextField, ODNode, NSPanel, DirectoryEditorViewController, NSButton;

@interface AuthToNodeSheetController : NSObject {
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSTextField *_directionsTextField;
    ODNode *_node;
    DirectoryEditorViewController *_dirEditorViewController;
}

@property (retain) NSPanel *authSheet;

- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNode:(id)a0 forDirEditorViewController:(id)a1;
- (void)buttonHit:(id)a0;
- (void)beginSheet;
- (void)closeAuthSheet;

@end
