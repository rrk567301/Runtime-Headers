@interface BookmarksFileImporter : NSObject

@property (readonly, nonatomic) BOOL canImportBookmarks;

+ (id)sharedImporter;

- (void)importBookmarks;
- (int)importBookmarksFrom:(id)a0 intoBookmarksFolder:(id)a1;
- (void)importBookmarksFromFilesAtURLs:(id)a0;
- (id)_uniqueImportFolderName;
- (id)importBookmarksFrom:(id)a0;
- (id)_dateForImportFolderName;
- (id)_collectionNamed:(id)a0;

@end
