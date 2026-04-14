@class NSArray, NSString, NSLayoutConstraint, NSWindow;

@interface SMFDEManagementViewController : NSWindowController

@property BOOL diskPasswordOnly;
@property (retain) NSArray *incomingUsers;
@property (weak) NSWindow *sheetWindow;
@property (copy) id /* block */ completionHandler;
@property BOOL continueEnabled;
@property NSLayoutConstraint *diskPassToButtonConstraint;
@property NSLayoutConstraint *userTableToButtonConstraint;
@property (retain) NSArray *userList;
@property BOOL simpleMode;
@property BOOL tokenOnlyMode;
@property (retain) NSString *fdePassword;
@property (readonly) BOOL collectingDiskPassword;
@property (readonly) NSString *instructionText;
@property (readonly) NSString *passwordButtonLabel;

+ (id)keyPathsForValuesAffectingInstructionText;
+ (id)keyPathsForValuesAffectingCollectingDiskPassword;

- (id)init;
- (void).cxx_destruct;
- (void)pressedCancel:(id)a0;
- (void)dismissWindow;
- (void)pressedPasswordButton:(id)a0;
- (void)showForIncomingUsers:(id)a0 overWindow:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)pressedContinue:(id)a0;
- (void)pressedAuthorizeDiskPassword:(id)a0;

@end
