@interface ICDefaultAccountUtilities : NSObject

+ (id)accountToAddSmartFolderWithModernContext:(id)a0;
+ (id)defaultFolderWithHTMLNoteContext:(id)a0;
+ (id)accountToAddNewNoteWithTagSelection:(id)a0 modernContext:(id)a1;
+ (id)_defaultAccountIdentifierForTests;
+ (void)setDefaultAccountIdentifier:(id)a0;
+ (id)defaultAccount;
+ (void)_setDefaultAccountIdentifierForTests:(id)a0;
+ (id)defaultAccountWithHTMLNoteContext:(id)a0;

@end
