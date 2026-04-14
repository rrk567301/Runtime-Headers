@interface ICDefaultAccountUtilities : NSObject

+ (id)accountToAddNewNoteWithTagSelection:(id)a0 modernContext:(id)a1;
+ (id)defaultAccount;
+ (id)_defaultAccountIdentifierForTests;
+ (id)defaultAccountWithHTMLNoteContext:(id)a0;
+ (id)defaultFolderWithHTMLNoteContext:(id)a0;
+ (id)accountToAddSmartFolderWithModernContext:(id)a0;
+ (void)setDefaultAccountIdentifier:(id)a0;
+ (void)_setDefaultAccountIdentifierForTests:(id)a0;

@end
