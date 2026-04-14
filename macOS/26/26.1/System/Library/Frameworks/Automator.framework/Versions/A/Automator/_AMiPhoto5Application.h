@interface _AMiPhoto5Application : SBApplication

+ (id)application;

- (id)albums;
- (id)keywords;
- (id)version;
- (void)setSelection:(id)a0;
- (void)setView:(int)a0;
- (id)documents;
- (id)selection;
- (id)classNamesForCodes;
- (int)view;
- (id)codesForPropertyNames;
- (id)name;
- (id)windows;
- (void)open:(id)a0;
- (id)photos;
- (id)lastMonthsAlbum;
- (void)setMailAddress:(id)a0;
- (id)lastImportAlbum;
- (void)setMailSubject:(id)a0;
- (id)currentAlbum;
- (BOOL)frontmost;
- (id)lastRollsAlbum;
- (id)mailAddress;
- (id)mailRecipient;
- (id)mailSubject;
- (id)photoLibraryAlbum;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)setCurrentAlbum:(id)a0;
- (void)setMailRecipient:(id)a0;
- (id)trashAlbum;

@end
