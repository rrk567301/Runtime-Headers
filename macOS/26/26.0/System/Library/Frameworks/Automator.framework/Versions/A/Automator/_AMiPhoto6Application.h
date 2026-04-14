@class _AMiPhoto6Album, NSArray, NSString;

@interface _AMiPhoto6Application : SBApplication

@property (copy) _AMiPhoto6Album *currentAlbum;
@property (readonly) long long importing;
@property (readonly, copy) _AMiPhoto6Album *lastMonthsAlbum;
@property (readonly, copy) _AMiPhoto6Album *lastRollsAlbum;
@property (readonly, copy) NSArray *localRootAlbums;
@property (copy) NSString *mailAddress;
@property (copy) NSString *mailRecipient;
@property (copy) NSString *mailSubject;
@property (readonly, copy) _AMiPhoto6Album *photoLibraryAlbum;
@property (copy) NSArray *selection;
@property (readonly, copy) NSArray *sharedLibraryAlbums;
@property (readonly) long long slideshowRunning;
@property (readonly, copy) _AMiPhoto6Album *trashAlbum;
@property int view;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

+ (id)application;

- (id)albums;
- (id)codesForPropertyNames;
- (id)keywords;
- (id)documents;
- (id)classNamesForCodes;
- (id)windows;
- (id)open:(id)a0;
- (id)photos;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;

@end
