@interface ICDefaultAccountUtilities : NSObject

+ (id)defaultAccountWithHTMLNoteContext:(id)a0;
+ (id)accountToAddSmartFolderWithModernContext:(id)a0;
+ (void)_setDefaultAccountIdentifierForTests:(id)a0;
+ (void)setDefaultAccountIdentifier:(id)a0;
+ (id)defaultFolderWithHTMLNoteContext:(id)a0;
+ (id)_defaultAccountIdentifierForTests;
+ (id)defaultAccount;
+ (id)accountToAddNewNoteWithTagSelection:(id)a0 modernContext:(id)a1;

@end
