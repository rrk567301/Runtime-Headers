@interface _AMiPhoto5Application : SBApplication

+ (id)application;

- (id)selection;
- (void)setSelection:(id)a0;
- (id)albums;
- (id)documents;
- (id)keywords;
- (void)setView:(int)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)name;
- (int)view;
- (id)version;
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
