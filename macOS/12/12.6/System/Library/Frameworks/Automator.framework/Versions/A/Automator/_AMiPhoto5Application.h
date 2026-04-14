@interface _AMiPhoto5Application : SBApplication

+ (id)application;

- (id)name;
- (id)version;
- (int)view;
- (id)keywords;
- (void)open:(id)a0;
- (void)setView:(int)a0;
- (id)windows;
- (id)documents;
- (id)selection;
- (id)photos;
- (void)setSelection:(id)a0;
- (id)albums;
- (BOOL)frontmost;
- (id)mailSubject;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)a0;
- (id)lastImportAlbum;
- (id)lastMonthsAlbum;
- (id)lastRollsAlbum;
- (id)mailAddress;
- (void)setMailAddress:(id)a0;
- (id)mailRecipient;
- (void)setMailRecipient:(id)a0;
- (void)setMailSubject:(id)a0;
- (id)photoLibraryAlbum;
- (id)trashAlbum;

@end
