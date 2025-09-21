@class ABAccount, ABAddressBook;

@interface ABBrowsingGroupEntry : ABGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;

- (char)canSelect;
- (id)selectHelperWithFactory:(id)a0;
- (char)canDrag;
- (id)actionScope;
- (id)importFilesHelperWithFactory:(id)a0 filenames:(id)a1 showConfirmation:(char)a2;
- (id)pasteHelperWithFactory:(id)a0;
- (char)shouldImportToDefaultAccount;

@end
