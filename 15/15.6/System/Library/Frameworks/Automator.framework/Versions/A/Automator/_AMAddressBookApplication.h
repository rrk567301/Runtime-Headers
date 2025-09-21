@class _AMAddressBookPerson, NSArray, NSString;

@interface _AMAddressBookApplication : SBApplication

@property (copy) _AMAddressBookPerson *myCard;
@property (readonly) char unsaved;
@property (copy) NSArray *selection;
@property (readonly, copy) NSString *defaultCountryCode;
@property (readonly, copy) NSString *name;
@property (readonly) char frontmost;
@property (readonly, copy) NSString *version;

- (id)groups;
- (id)save;
- (id)windows;
- (id)documents;
- (id)open:(id)a0;
- (id)people;
- (char)exists:(id)a0;
- (id)actionProperty;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)actionTitleWith:(id)a0 for:(id)a1;
- (char)performActionWith:(id)a0 for:(id)a1;
- (void)print:(id)a0 withProperties:(id)a1 printDialog:(char)a2;
- (void)quitSaving:(int)a0;
- (char)shouldEnableActionWith:(id)a0 for:(id)a1;

@end
