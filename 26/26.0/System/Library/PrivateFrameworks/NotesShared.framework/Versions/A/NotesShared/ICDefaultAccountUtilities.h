@interface ICDefaultAccountUtilities : NSObject

+ (id)accountToAddSmartFolderWithModernContext:(id)a0;
+ (id)accountToAddNewNoteWithTagSelection:(id)a0 modernContext:(id)a1;
+ (id)defaultFolderWithHTMLNoteContext:(id)a0;
+ (void)setDefaultAccountIdentifier:(id)a0;
+ (void)_setDefaultAccountIdentifierForTests:(id)a0;
+ (id)defaultAccount;
+ (id)defaultAccountWithHTMLNoteContext:(id)a0;
+ (id)_defaultAccountIdentifierForTests;

@end
