@class NSTextField, NSString, NSArray, SMUser, NSMutableDictionary, NSMutableArray, NSWindow, NSButton, NSLayoutConstraint;

@interface SMConflictResolutionViewController : NSWindowController

@property (retain) SMUser *currentUser;
@property (retain) NSString *problem;
@property BOOL allowRename;
@property BOOL showSequenceField;
@property (retain) NSMutableArray *remainingUsers;
@property (retain) NSArray *initialUsers;
@property (copy) id /* block */ completionHandler;
@property NSWindow *sheetWindow;
@property unsigned long long totalConflicts;
@property (retain) NSMutableDictionary *restoreState;
@property BOOL allowConflictedOverwrite;
@property (retain) NSArray *nonAdmins;
@property (readonly) NSString *conflictDescription;
@property (readonly) NSString *replaceUserTitle;
@property (readonly) NSString *keepMessage;
@property (readonly) NSString *sequenceLabel;
@property (readonly) BOOL allowOverwrite;
@property NSTextField *shortNameField;
@property NSTextField *longNameField;
@property NSButton *replaceUserRadioButton;
@property NSButton *keepUserRadioButton;
@property NSLayoutConstraint *renameConstraint;
@property NSLayoutConstraint *noRenameConstraint;
@property NSLayoutConstraint *problemConstraint;
@property NSLayoutConstraint *noProblemConstraint;
@property unsigned long long keepUserState;

+ (id)keyPathsForValuesAffectingSequenceLabel;
+ (id)keyPathsForValuesAffectingKeepMessage;
+ (id)keyPathsForValuesAffectingReplaceUserTitle;
+ (id)keyPathsForValuesAffectingConflictDescription;
+ (id)keyPathsForValuesAffectingAllowOverwrite;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (void)pressedCancel:(id)a0;
- (void)dismissWindow;
- (void)pressedContinue:(id)a0;
- (void)saveRestoreState;
- (void)restoreUserState;
- (void)nextUser;
- (void)showForConflictedUsers:(id)a0 withNonAdmins:(id)a1 allowConflictedOverwrite:(BOOL)a2 overWindow:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)changedResolution:(id)a0;

@end
