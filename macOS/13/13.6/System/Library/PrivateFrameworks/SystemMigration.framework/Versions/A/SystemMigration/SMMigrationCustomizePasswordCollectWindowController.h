@class NSTextField, NSString, NSButton, NSWindow;

@interface SMMigrationCustomizePasswordCollectWindowController : NSWindowController <NSControlTextEditingDelegate>

@property NSWindow *overWindow;
@property (weak) NSString *userShortName;
@property NSTextField *passwordField;
@property (retain) NSString *password;
@property (retain) NSString *verifyPassword;
@property (retain) NSString *errorText;
@property (retain) NSString *instructionText;
@property BOOL passwordIsTemporary;
@property NSButton *setPasswordButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)a0;
- (void)windowDidLoad;
- (void)collectPasswordForUser:(id)a0 overWindow:(id)a1 callbackBlock:(id /* block */)a2;
- (void)pressedSetpassword:(id)a0;

@end
